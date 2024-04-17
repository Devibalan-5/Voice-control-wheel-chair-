int data;
int i;
int j;
void setup() {
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  Serial.begin(9600);

}

void Stop(){
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
}
void loop() {
  if(Serial.available()){
    data=Serial.read();
    Serial.println(data);
    Serial.println("voice accept");
    if (data=='F'){
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
      digitalWrite(10,HIGH);
      digitalWrite(11,LOW);  
      Serial.println("forward worked");
      i=0;
      i++;
    }
    if (data=='B'){
      digitalWrite(8,LOW);
      digitalWrite(9,HIGH);
      digitalWrite(10,LOW);
      digitalWrite(11,HIGH);
      Serial.println("backward worked");
      i++;
      j=0;
    }
    if (data=='S'){
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      digitalWrite(11,LOW);
      Serial.print("stop worked");
      i++;
      j++;
    }
    if(data=='L'){
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      digitalWrite(10,HIGH);
      digitalWrite(11,LOW);
      Serial.println("LEFT worked");
      delay(1000);
      Serial.println("delay worked");
      Stop();
    }
    if (data=='R'){
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      digitalWrite(11,LOW);
       Serial.println("right worked");
      delay(1000);
      Serial.println("delay r worked");
      Stop();
    }
    if (data=='Q')
    {
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
      digitalWrite(10,HIGH);
      digitalWrite(11,LOW);
      delay(1700);
      Stop();
    }
    if (data=='W')
    {
      digitalWrite(8,LOW);
      digitalWrite(9,HIGH);
      digitalWrite(10,LOW);
      digitalWrite(11,HIGH);
      delay(1700);
      Stop();
    }
  }
 else if (i==1){
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      digitalWrite(11,HIGH);  
      Serial.println("i worked");
      

    }  
 else if (j==0){
      digitalWrite(8,LOW);
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
      digitalWrite(11,LOW);
      Serial.println("j worked");
}
}
