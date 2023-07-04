#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>
#include "DHT.h"

double angle_rad = PI/180.0;
double angle_deg = 180.0/PI;
double MQ7_Esik_Degeri;
double MQ9_Esik_Degeri;
double DHT11_Sicaklik_Degeri;
double DHT11_Nem_Degeri;
double MQ7_Sensor_Degeri;
double MQ9_Sensor_Degeri;
double Sicaklik_Esik_Degeri;
DHT dht_1(2,11);
SoftwareSerial btKontrol(11,10);



void setup(){
    btKontrol.begin(9600);
    Serial.begin(115200);
    MQ7_Esik_Degeri = 300;
    MQ9_Esik_Degeri = 400;
    Sicaklik_Esik_Degeri = 50;
    btKontrol.flush();
    
    pinMode(A0+0,INPUT);
    pinMode(A0+1,INPUT);
    pinMode(13,OUTPUT);
}

void loop(){
    
    DHT11_Sicaklik_Degeri = dht_1.readTemperature();
    DHT11_Nem_Degeri = dht_1.readHumidity();
    MQ7_Sensor_Degeri = analogRead(A0+0);
    MQ9_Sensor_Degeri = analogRead(A0+1);

     if(((MQ7_Sensor_Degeri) < (MQ7_Esik_Degeri)) || (((MQ9_Sensor_Degeri) < (MQ9_Esik_Degeri)) || ((DHT11_Sicaklik_Degeri) < (Sicaklik_Esik_Degeri)))){
        tone(13,262,500); // write to buzzer
        delay(500);
    }  
    btKontrol.println(String(MQ7_Sensor_Degeri)+","+String(MQ9_Sensor_Degeri)+","+String(DHT11_Nem_Degeri)+","+String(DHT11_Sicaklik_Degeri)+";");
        
    Serial.println(((String("CO2: ")+MQ9_Sensor_Degeri) + (String("Gaz Degeri: ")+MQ7_Sensor_Degeri)) + ((String("NEM: ")+DHT11_Nem_Degeri) + (String("Sicaklik: ")+DHT11_Sicaklik_Degeri)));
    
    _loop();
}

void _delay(float seconds){
    long endTime = millis() + seconds * 1000;
    while(millis() < endTime)_loop();
}

void _loop(){
    
}
