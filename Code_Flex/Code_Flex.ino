#include <Servo.h>
Servo servo1;

int P;
int angle;
void setup() {
 servo1.attach(3);          // PWM D3
 Serial.begin(9600);
}
 
void loop() {

// Lecture de la résistance des flexs
P = analogRead(A1); 

// Calibration des flex/angle servo
int angle = map(P, 380, 550, 0, 180);

// Assurer que l'angle reste dans la plage valide (si )
angle = constrain(angle, 0, 180);

servo1.write(angle); // Contrôle du servo
Serial.print("Valeur capteur: ");
Serial.print(P);
Serial.print(" | Angle servo: ");
Serial.println(angle);

delay(100);
}


