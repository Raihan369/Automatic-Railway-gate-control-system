//Train Project
#include ‹Servo.h>
Servo servoMain;
int trigpin = 10;
int echopin = 11;
int distance;
float duration;
float cm;

void setup ()
{


servoMain.attach (12) ;
pinMode (trigpin, OUTPUT);
pinMode (echopin, INPUT);

}

void loop ()
{

digitalwrite (trigpin,LOW) ;
delay (2) ;
digitalWrite (trigpin,HIGH);
delayMicroseconds (10) ;
digitalwrite (trigpin,LOW);

duration= pulseIn (echopin,HIGH);

cm = (duration/58.82);
distance = cm;


if (distance<30)

{

    servoMain. write (90);
    delay (2400) ;
}

else
{
    servoMain. write (0);
    delay (50) ;
}

}
