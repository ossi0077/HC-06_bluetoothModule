#include <SoftwareSerial.h>
// 6, 7번 핀 사용
SoftwareSerial BTSerial(6, 7);

void setup()
{
    Serial.begin(9600);
    //baud rate 9600으로 블루투스 모듈 통신시작
    //default 값이 9600
    BTSerial.begin(9600);
    Serial.println("Serial start");
}

void loop()
{
    //블루투스 시리얼로 들어온 데이터가 있다면 시리얼에 작성되도록 합니다.
    if (BTSerial.available())
    {
        Serial.write(BTSerial.read());
    }

    //시리얼로 들어온 데이터가 있다면 블루투스 시리얼에 작서되도록 합니다.
    if (Serial.available())
    {
        BTSerial.write(Serial.read());
    }
}