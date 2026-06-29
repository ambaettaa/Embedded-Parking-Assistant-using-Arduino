#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, A0, A1, A2, A3);

const int trigPin = 9;
const int echoPin = 10;
const int greenLed = 2;
const int yellowLed = 3;
const int redLed = 4;
const int buzzer = 5;

long duration;
float distance;

void setup() {
  
  lcd.begin(16,2);
  lcd.print("Parking System");
  delay(2000);
  lcd.clear();
  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(redLed, OUTPUT);
  pinMode(buzzer, OUTPUT);



  Serial.begin(9600);
}

void loop() {
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

 
  duration = pulseIn(echoPin, HIGH);
  distance = 8;


  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  lcd.setCursor(0,0);
  lcd.print("Dist: ");
  lcd.print(distance);
  lcd.print("cm       ");
  delay(1000);

  digitalWrite(greenLed, LOW);
  digitalWrite(yellowLed, LOW);
  digitalWrite(redLed, LOW);
  digitalWrite(buzzer, LOW);

  if (distance > 30) {
    digitalWrite(greenLed, HIGH);
    Serial.println("STATUS: SAFE");
    
    lcd.setCursor(0,0);
    lcd.print("STATUS: SAFE       ");
    
  } else if (distance > 15 && distance <= 30) {
    digitalWrite(yellowLed, HIGH);
    Serial.println("STATUS: WARNING");
    
     lcd.setCursor(0,0);
    lcd.print("STATUS: WARNING       ");
    
  } else if (distance <= 15) {
    digitalWrite(redLed, HIGH);
    digitalWrite(buzzer, HIGH);
    Serial.println("STATUS: DANGER");
     lcd.setCursor(0,0);
    lcd.print("STATUS: DANGER       ");
  }

  delay(200);
}
