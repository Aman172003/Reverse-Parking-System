#define echoPin 2 // attach pin D2 Arduino to pin Echo of HC-SR04
#define trigPin 3 //attach pin D3 Arduino to pin Trig of HC-SR04
#define buzzer 4
#define ledred 13
#define ledyel 12
#define ledgre 11
#define gnd 7
// defines variables
long duration; // variable for the duration of sound wave travel
int distance; // variable for the distance measurement

void setup() {
        pinMode(trigPin, OUTPUT); // Sets the trigPin as an OUTPUT
        pinMode(echoPin, INPUT); // Sets the echoPin as an INPUT
        pinMode(buzzer, OUTPUT);
        pinMode(ledred, OUTPUT);
        pinMode(ledyel, OUTPUT);
        pinMode(ledgre, OUTPUT);
        pinMode(gnd, OUTPUT);
       digitalWrite(gnd, LOW);
       Serial.begin(9600); // // Serial Communication is starting with 9600 of baudrate speed
       Serial.println("Ultrasonic Sensor HC-SR04 Test"); // print some text in Serial  
       Serial.println("with Arduino UNO R3");                        
 }

 void ledgreen() {
  digitalWrite(ledgre, HIGH);
  delay(500);
  digitalWrite(ledgre, LOW);
  delay(500);
}
void ledyellow() {
  digitalWrite(ledyel, HIGH);
  delay(250);
  digitalWrite(ledyel, LOW);
  delay(250);
}
void ledRed() {
  digitalWrite(ledred, HIGH);
  delay(100);
  digitalWrite(ledred, LOW);
  delay(100);
}

void loop() {
  // Clears the trigPin condition
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  // Displays the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  if (distance > 40) {
    ledgreen();
    digitalWrite(buzzer, LOW);
  } else if ((distance <= 40) && (distance > 10)) {
    ledyellow();
    digitalWrite(buzzer, LOW);
  } else if (distance <= 10) {
    ledRed();
    digitalWrite(buzzer, HIGH);
  } else
    digitalWrite(buzzer, LOW);
}