//스마트폰의 블루투스 터미널 앱으로 led on/off하기
#include <SoftwareSerial.h>
//led 8번핀 사용
#define led 8
SoftwareSerial BTSerial(6, 7);

void setup()
{
    pinMode(led, OUTPUT);
    digitalWrite(led, LOW);
    Serial.begin(9600);
    BTSerial.begin(9600);
    Serial.println("시리얼 통신 시작");
}

void loop()
{
    while (BTSerial.available() > 0)
    {
        byte data = BTSerial.read();
        Serial.write(data);
        //스마트폰에서 1 전송 시 led ON
        if (data == '1')
        {
            digitalWrite(led, HIGH);
        }
        //스마트폰에서 0 전송 시 led OFF
        else if (data == '0')
        {
            digitalWrite(led, LOW);
        }
    }

    while (Serial.available() > 0)
    {
        byte data = Serial.read();
        BTSerial.write(data);
    }
}