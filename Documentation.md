# Alcohol Detector
  ## Abstract:

In our project will be detecting if a person has consumend alcohol or not.If the Alcohol Detector  comes near to a person who had consumed the alcohol then it will printed on the screen if person has not consumed alcohol we will get message that alcohol is not present.We will using MQ3 Gas Sensor to detect the the concentration of alcohol whose range from 25 to 500 ppm.
### Components:
1.	MQ3 Gas Sessor
2.	Arduino UNO
3.	Resistance(220Ω)
4.	LED
5.	LCD
6.	Potentiometer (For Brightness of  LCD) 
### About Component:
   • MQ3 Gas Sensor: It is an analog as well as digital sensor.When alcohol gas comes near the sensor its conductivity increases and allows the current to flows through it.Hence                     alcohol gets detected.SnO2 is the seniconductor material used in the sensor.
   When it comes in contact with  clean air  its electron gets attracted with O2 and creates a depletion layer so no electron flow through circuit.
        	When sensor comes in contact with alcohol gas oxygen at surface reacts with it and hence decreases potential barrier.The electrons starts to flow throgh                         circuit and alcohol is detected.
                  This Sensor can measre alcohol,ethanol,smoke.
		  
  • Led:It is used as a indication if it senses the alcohol it will glow otherwise it will not glow with 220 Ω resistor so that led will not get burst.
  
### Circuit Diagram:



### Working: 
We are using digital pin of the sesnor by setting the threshold voltage of the sensor.
If the voltage from sensor is less than the threshold voltage it will give ‘0’ as output which indicates no alcohol is present.
When value go above the threshold voltage it will send ‘1’ as output which is the indication of alcohol near the sensor. 
As the alcohol got detected then the arduino will send the message to data pins of lcd “Alcohol got detected” to lcd and led will start to glow.
Hence we can easily identify if a person has consumed alcohol or not.

### Program Logic:
  •If we use digital pin of sensor:
   If at the input Pin 7 of arduino “0” is detected the no alcohol if “1” is detected then prints Alcohol is present. 

        #define MQ3 7  //senor is attached
       int gas_value;
       gas_value = digitalRead(MQ3);
       if gas_value == “0”
	  No Alcohol
       if  gas_value == “1”
	  Alcohol Detected

  •If we use analog pin of sensor :
     AnalogRead will read the value of sesnor and if the input value is in range then no alcohol is present and if  the range goes above Alcohol is present.
     
     #define MQ3 Ao  //senor is attached
      int gas_value;
      gas_value = analog(MQ3);
      if gas_value <400
	 Normal Mode
      else
        Alcohol Detected



