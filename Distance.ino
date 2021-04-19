Distance() {

  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, LOW); //CLEARE THE TRIGPIN
  delayMicroseconds(2);//SET THE TRIGPIN ON HIGH STATE FOR 10 SECONDS

  digitalWrite(trigPin, HIGH); //WRITE THE TRIGGER FOR MCU ON MODULE
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW); //READS THE ECHOPIN, RETURNS THE SOUND WAVE TRAVEL TIME IN MICROSECONDS

  duration = pulseIn(echoPin, HIGH); //USING THE FORMULA
  distance = duration * 0.034 / 2;
  Serial.print("Distance: ");
  Serial.println(distance);//PRINT THE DISTANCE ON THE SERIAL MONITOR

}
