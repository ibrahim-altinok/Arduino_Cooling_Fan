# Arduino_Cooling_Fan

Material List: 

ArduinoUno
Type K Thermocouple: Arduino MAX6675 
Relay: Arduino JQC-3FF-S-Z (10A - 250VAC) 
Cooling Fan: Fanec (JD-D8015M12S)
Power: 12V Adaptor 
Others: Breadboard, wires...

What happens? 
Cooling Fan gives a start under 20 celsius and stop working over 20 celsius


MAX6675 : https://datasheets.maximintegrated.com/en/ds/MAX6675.pdf
JQC-3FF-S-Z : https://www.generationrobots.com/media/JQC-3FF-v1.pdf


This converter resolves temperatures to 0.25°C, allows readings as high as +1024°C, and exhibits thermocouple
accuracy of 8 LSBs for temperatures ranging from 0°C to +700°C.
Operating Temperature Range .......................... -20°C to +85°C

1- GND Ground
2- T- Alumel Lead of Type-K Thermocouple.Should be connected to ground externally.
3- T+ Chromel Lead of Type-K Thermocouple. 
4- VCC Positive Supply. Bypass with a 0.1µF capacitor to GND.
5- SCK Serial Clock Input
6- CS Chip Select. Set CS low to enable the serial interface.
7- SO Serial Data Output
8- N.C. No Connection

The thermocouple’s hot junction can be read from 0°C to +1023.75°C. The cold end (ambient temperature of the board on which the MAX6675
is mounted) can only range from -20°C to +85°C. While the temperature at the cold end fluctuates, the MAX6675 continues to accurately


