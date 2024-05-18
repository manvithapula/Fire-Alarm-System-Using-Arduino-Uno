#define Fire_sensor 8  
#define Buzzer 9  
#define bdelay 500  
void setup() {  
    Serial.begin(9600);  
    pinMode(Fire_sensor, INPUT);  
    pinMode(Buzzer, OUTPUT);  
}  
void loop() {  
    if (int a = digitalRead(Fire_sensor) == LOW) {  
        alert();  
    } else {  
        digitalWrite(Buzzer, LOW);  
    }  
}  
void alert() {  
    digitalWrite(Buzzer, HIGH);
    delay(bdelay);
    digitalWrite(Buzzer, LOW);  
    delay(bdelay);
    digitalWrite(Buzzer, HIGH);  
    delay(bdelay);
    digitalWrite(Buzzer, LOW);  
    delay(bdelay);
    digitalWrite(Buzzer, HIGH);  
    delay(bdelay);
    digitalWrite(Buzzer, LOW);  
    delay(bdelay);
}