void IRInit()  {
    Serial.begin(9600);
    pinMode(6,INPUT);
}
bool IRData()  {
    while(1)  {
        //delay(500);
        if(digitalRead(6)==LOW)  {
            Serial.println("Somebody is here.");
            return 1;
        }
        else  {
            Serial.println("Nobody.");
            return 0;
        }
    }
}
