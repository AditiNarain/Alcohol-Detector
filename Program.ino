#include <LiquidCrystal.h>
#define MQ3 7 //defined macros for input pin
// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 13, en = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int gas_value;
void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);  
  pinMode(6,OUTPUT);// led is connected to D6
}
void loop()
{
  gas_value = digitalRead(MQ3); // Read the value from MQ3 Sensor
  if(gas_value==1) // if the value is above threshold then mq3 gives 1 as output
  {
   digitalWrite(6,HIGH);// Led will glow
   lcd.setCursor (0, 1);
   lcd.print("ALCOHOL DEDUCTED");
   lcd.display();
   }
   else // if the value is below threshold then mq3 gives 0 as output
   {
    digitalWrite(6,LOW);// led we be off
    lcd.setCursor (0, 1);
    lcd.print("NO ALCOHOL");
    lcd.display();
   }
   delay(1000); 
   lcd.clear(); 
}
