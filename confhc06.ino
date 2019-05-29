//programa para ajustar modulo HC-06
void setup(){
  Serial.begin(9600); //Comunicacion hacia pc
  Serial1.begin(9600); //Comunicacion hacia pc
}

void loop(){
  if(Serial.available()){
    Serial1.write(Serial.read());
  }
  if(Serial1.available()){
    Serial.write(Serial1.read());
  } 
}
