/*  ArduinoUno
 *  Arduino MAX6675 
 *  Arduino JQC-3FF-S-Z (10A - 250VAC) 
 */


// libraries 
#include "max6675.h"

// Arduino MAX6675 Pins 
int SO = 5;
int CS = 6;
int CLK = 7;

// Arduino RELAY Pins
int Relay=8; 


MAX6675 test(CLK, CS, SO);
  
void setup() {
  Serial.begin(9600);
  pinMode(Relay, OUTPUT);

  // time to settle
  delay(500);
}

void loop() {
  // test outputs (Celcius & Fahrenheit values)
   Serial.print("Degree Celcius = "); 
   Serial.print(test.readCelsius());
   Serial.print("\t Degree Fahrenheit = ");
   Serial.println(test.readFahrenheit());

   int temperature_cel=test.readCelsius();

  // run the Cooling Fan (JANEC:JD-D8015M12S)
   if( temperature_cel < 20){
      digitalWrite(Relay,LOW);
   }
   else{
      digitalWrite(Relay,HIGH);

   }

 // time between loops | 1 sec. 
   delay(1000);
}
