int ldrPin = A0;        // Pin connected to LDR
int irPin1 = 2;         // Pin connected to first IR sensor
int irPin2 = 3;         // Pin connected to second IR sensor
int ledPin1 = 9;        // Pin connected to first LED
int ledPin2 = 10;       // Pin connected to second LED

int ldrValue;           // Variable to store LDR value
int irValue1;           // Variable to store first IR sensor value
int irValue2;           // Variable to store second IR sensor value

void setup() {
  pinMode(ldrPin, INPUT);
  pinMode(irPin1, INPUT);
  pinMode(irPin2, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  ldrValue = analogRead(ldrPin);       // Read LDR value
  irValue1 = digitalRead(irPin1);      // Read first IR sensor value
  irValue2 = digitalRead(irPin2);      // Read second IR sensor value

  Serial.print("LDR Value: ");
  Serial.print(ldrValue);
  Serial.print(" | IR1 Value: ");
  Serial.print(irValue1);
  Serial.print(" | IR2 Value: ");
  Serial.println(irValue2);

  if (ldrValue < 100) {
    // If it's dark 
    if (irValue1 == HIGH) {
      // If an object is detected by the first IR sensor, turn on the first LED with high intensity
      analogWrite(ledPin1, 255);
    } else {
      // If no object is detected by the first IR sensor, turn on the first LED with low intensity
      analogWrite(ledPin1, 10);
    }

    if (irValue2 == HIGH) {
      // If an object is detected by the second IR sensor, turn on the second LED with high intensity
      analogWrite(ledPin2, 255);
    } else {
      // If no object is detected by the second IR sensor, turn on the second LED with low intensity
      analogWrite(ledPin2, 10);
    }
  } else {
    // If it's bright (LDR value is above threshold), turn off both LEDs
    analogWrite(ledPin1, 0);
    analogWrite(ledPin2, 0);
  }

  delay(100);
}
