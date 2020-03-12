String str;
void setup() {
  pinMode(13,OUTPUT);
  digitalWrite(13,LOW);
  Serial.begin(9600);
}

void loop() {
  if(Serial.available() > 0)
  {
    str = Serial.readStringUntil('\n');
    if(str == "on")
    {
      digitalWrite(13,HIGH);
      Serial.write("LED ON");
    }
  }
  if(str == "off")
  {
    digitalWrite(13,LOW);
    Serial.write("LED OFF");
  }
}
