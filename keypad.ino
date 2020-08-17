#include <Keypad.h>
#include <LiquidCrystal.h>
//LiquidCrystal lcd(12, 11, A0, A1, A2, A3);

const byte n_rows = 4;
const byte n_cols = 4;
 int x=0;
char keys[n_rows][n_cols] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte colPins[n_rows] = {13,12,14,27};
byte rowPins[n_cols] = {36,39,35,34};
 
Keypad myKeypad = Keypad( makeKeymap(keys), rowPins, colPins, n_rows, n_cols); 

void setup(){
  Serial.begin(115200);
//    lcd.begin(16, 2);
//lcd.print("hello");
}
 
void loop(){
  char myKey = myKeypad.getKey();
    
  if (myKey != NULL)
  {
    Serial.print("Key pressed: ");
    Serial.println(myKey);
  
if(myKey == '1')
{    Serial.println("helmet");
     x=x+1000;
//     lcd.setCursor(0, 1);
//     lcd.clear();
//     lcd.print("helmet");

  }
else if(myKey == '2')
{    Serial.println("seat belt");
     x=x+1000;
//     lcd.setCursor(0, 1);
//     lcd.clear();
//     lcd.print("seat belt");
  }
else if(myKey == '3')
{    Serial.println("over speeding");
     x=x+5000;
//     lcd.setCursor(0, 1);
//     lcd.clear();
//     lcd.print("over speeding");
  }
else if(myKey == '4')
{    Serial.println("signal break");
     x=x+2000;
//     lcd.setCursor(0, 1);
//     lcd.clear();
//     lcd.print("signal break");
  }
else if(myKey == '*')
   {Serial.println("Final price :");
   Serial.println(x);
//   lcd.setCursor(0, 1);
//   lcd.clear();
//     lcd.print("Final price:");
//        lcd.println(x);

   }
  }
}
