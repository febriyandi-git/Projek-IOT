int Sensor_Gas = 34;
int Sensor_Api = 35;
int t= 5000;

void setup() {
  pinMode(Sensor_Gas, INPUT);
  pinMode(Sensor_Api, INPUT);
   Serial.begin(115200);
}
void loop() {
  
  int sensor_gas = analogRead(Sensor_Gas);//pembacaan sensor sebagai inpuanalog
  Serial.print("Sensor Gas:- ");
  Serial.println(sensor_gas);
  delay(1000);
  
  if (sensor_gas > 2300){
    Serial.println("Ada Gas Beracun");
//    digitalWrite(relay, HIGH);
    delay(t);
  }
  else{
  Serial.println("Ruangan AMAN!!!");
//    digitalWrite(relay, LOW);
  }
  
  //Sensor Api
   int sensor_api = digitalRead(Sensor_Api);
  Serial.print("Fire Class: ");
  Serial.print(sensor_api);
  Serial.print("\t");
  Serial.print("\t");
  if (sensor_api < 1) {
    Serial.println("Fire");

    delay(t);
  }
  else {
    Serial.println("No Fire");

  }
}
