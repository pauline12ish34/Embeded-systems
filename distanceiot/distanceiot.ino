const int trigPin=13;
const int echoPin=7;
long duration,distance;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin,INPUT);
  pinMode(echoPin,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
   digitalWrite(trigPin, LOW);

  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);

  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = (duration / 2) / 29.1;

  // put your main code here, to run repeatedly:
if(distance>=100||distance<=0) {
  Serial.print("it is out of range");
  }else
  {
    Serial.print(distance);
    Serial.print ("cm");
    
    }

}
