  int A=1000;


void setup() {
    pinMode(11, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(9, OUTPUT);
}

void loop() {
    digitalWrite(11, HIGH);
    delay(A);
    analogWrite(11, 102);
    delay(A);
    digitalWrite(11, LOW);
    delay(A);
    
    digitalWrite(10, HIGH);
    delay(A);
    analogWrite(10, 102);
    delay(A);
    digitalWrite(10, LOW);
    delay(A);
    
    digitalWrite(9, HIGH);
    delay(A);
    analogWrite(9, 102);
    delay(A);
    digitalWrite(9, LOW);
    delay(A);
}
