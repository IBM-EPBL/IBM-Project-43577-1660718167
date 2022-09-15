// C++ code
//
int temppin=A2;
float temp=0;
int LED;
int Buzz=5;
int PIR=2;
int val=0;
void setup(){
  Serial.begin(9600);
  pinMode(Buzz,OUTPUT);
  pinMode(PIR,INPUT);
  pinMode(temppin,INPUT);
  analogWrite(Buzz,0);
}
void loop(){
  temp=analogRead(temppin);
  temp=temp*0.48828125;
  Serial.println(temp);
  val=digitalRead(PIR);
  if(val==HIGH){
    digitalWrite(LED,HIGH);
    digitalWrite(Buzz,HIGH);
    Serial.println("Movement Detected");
  }
  if(temp>60)
  {
    for(int i=0;i<=254;i++)
    {
      analogWrite(Buzz,i);
    }
    int i=255;
  }
  else
  {
    analogWrite(Buzz,0);
  }
}
     