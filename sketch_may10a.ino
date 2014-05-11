
long distance;
int led = 13;
int counter, counter1;

void setup()
{
    Serial.begin (9600);
    pinMode(led, OUTPUT);
}

void loop()
{

  distance =analogRead(0);
  Serial.println(distance);  
 
  //if sensor on range
  if(distance>=1000)
  {
   // Serial.println("Sensor On");
   // turnLed();
   counter1=0;
   counter++;
   //Serial.println(counter);
   
   if(counter==1)
   {
    turnOnLed();
   }
   
  }
  //if sensor off range
  else if(distance<1000)
  {
    //Serial.println("Sensor Off");
    
    counter=0;
  
  }
  
  delay(10); 
}

void turnOnLed()
{
  if(digitalRead(led) == HIGH)
  {
    //Serial.println("LedOn");
     digitalWrite(led, LOW); 
  }
  else if(digitalRead(led) == LOW)
  {
   // Serial.println("LedOff");
     digitalWrite(led, HIGH); 
  }
//  delay(1000);               // wait for a second
//  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
//  delay(1000);
}

void turnOffLed()
{
  digitalWrite(led, LOW);
}
                           
