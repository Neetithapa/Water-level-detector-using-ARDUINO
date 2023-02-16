//INITIALIZATION
int buzzer = 8;
int LED = 12;
int water_sensor = A1 ;
int waterlevel = 0;

//SETUP BLOCK
void setup() {
  
Serial.begin(9600);
pinMode(buzzer, OUTPUT);
pinMode(LED, OUTPUT);
pinMode(water_sensor, INPUT);

}

//LOOP BLOCK
void loop() {
  
  waterlevel = analogRead(water_sensor);
  
  if(waterlevel==0)
  {
    Serial.print("water level : ");
    Serial.println(waterlevel);
    digitalWrite(buzzer, LOW);
    digitalWrite(LED,LOW);
  }
  else
  {
    Serial.print("water level : ");
    Serial.println(waterlevel);
    digitalWrite(buzzer, HIGH);
    digitalWrite(LED,HIGH);
    
  }
  delay(100);
}
