int analogPin1 = A1; // potentiometer wiper (middle terminal) connected to analog pin 3
int analogPin2 = A2;
int analogPin3 = A3;                 
int val1 = 0;  // variable to store the value read
int val2 = 0;
int val3 = 0;

void setup() {
  Serial.begin(9600);
  pinMode(11, OUTPUT);//  setup serial
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  val1 = analogRead(analogPin1);
    val2 = analogRead(analogPin2);
      val3 = analogRead(analogPin3);// read the input pin

  
  Serial.println(val1);
    Serial.println(val2);
      Serial.println(val3);// debug value
      
  if(val1>850){
    Serial.println("1 no water");
     digitalWrite(11, LOW);
  }
  else{
     digitalWrite(11, HIGH);
     Serial.println("1 have water");
  }


    if(val2>850){
    Serial.println("2 no water");
     digitalWrite(12, LOW);
  }
  else{
     digitalWrite(12, HIGH);
     Serial.println("2 have water");
  }


    if(val3>850){
    Serial.println("3 no water");
     digitalWrite(13, LOW);
  }
  else{
     digitalWrite(13, HIGH);
     Serial.println("3 have water");
  }
  delay(1000);
  
}
