#define trigPin 5
#define echoPin 6

#define trigPin2 8
#define echoPin2 9

#define trigPin3 4
#define echoPin3 3

long tStart, tEnd, tStart2,tEnd2,tStart3, tEnd3;
int Time, Time2, Time3;
void setup() {
  Serial.begin (500000);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);  
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);  
  pinMode(trigPin3, OUTPUT);
  pinMode(echoPin3, INPUT); 
}

void loop() {
  long duration1, distance1;
  long duration2, distance2;
  long duration3, distance3;
  tStart=millis();
  digitalWrite(trigPin, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin, HIGH);
//  delayMicroseconds(1000); - Removed this line
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPin, LOW);
  duration1 = pulseIn(echoPin, HIGH,15000);
  distance1= duration1*0.034/2;
  tEnd=millis();
  Time=tEnd-tStart;
  
  Serial.print("Distance1: ");
  Serial.println(distance1);
  Serial.print("Time:");
  Serial.println(Time);

tStart2=millis();
  digitalWrite(trigPin2, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin2, HIGH);
//  delayMicroseconds(1000); - Removed this line
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPin2, LOW);
  duration2 = pulseIn(echoPin2, HIGH,15000);
  distance2= duration2*0.034/2;
  tEnd2=millis();
  Time2=tEnd2-tStart2;
  Serial.print("Distance2: ");
  Serial.println(distance2);
  Serial.print("Time: ");
  Serial.println(Time2);

  tStart3=millis();
  digitalWrite(trigPin3, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin3, HIGH);
//  delayMicroseconds(1000); - Removed this line
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPin3, LOW);
  duration3 = pulseIn(echoPin3, HIGH,15000);
  distance3= duration3*0.034/2;
  tEnd3=millis();
  Time3=tEnd3-tStart3;
  Serial.print("Distance3: ");
  Serial.println(distance3);
  Serial.print("Time: ");
  Serial.println(Time3);

  Serial.print("Total Time:");
  Serial.println(tEnd3-tStart);
  Serial.println();
  Serial.println();
  
  delay(2000);
}
