//����Ʈ���� ������� �͹̳� ������ led on/off�ϱ�
#include <SoftwareSerial.h>
//led 8���� ���
#define led 8
SoftwareSerial BTSerial(6, 7);

void setup()
{
    pinMode(led, OUTPUT);
    digitalWrite(led, LOW);
    Serial.begin(9600);
    BTSerial.begin(9600);
    Serial.println("�ø��� ��� ����");
}

void loop()
{
    while (BTSerial.available() > 0)
    {
        byte data = BTSerial.read();
        Serial.write(data);
        //����Ʈ������ 1 ���� �� led ON
        if (data == '1')
        {
            digitalWrite(led, HIGH);
        }
        //����Ʈ������ 0 ���� �� led OFF
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