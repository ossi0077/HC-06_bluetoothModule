#include <SoftwareSerial.h>
// 6, 7�� �� ���
SoftwareSerial BTSerial(6, 7);

void setup()
{
    Serial.begin(9600);
    //baud rate 9600���� ������� ��� ��Ž���
    //default ���� 9600
    BTSerial.begin(9600);
    Serial.println("Serial start");
}

void loop()
{
    //������� �ø���� ���� �����Ͱ� �ִٸ� �ø��� �ۼ��ǵ��� �մϴ�.
    if (BTSerial.available())
    {
        Serial.write(BTSerial.read());
    }

    //�ø���� ���� �����Ͱ� �ִٸ� ������� �ø��� �ۼ��ǵ��� �մϴ�.
    if (Serial.available())
    {
        BTSerial.write(Serial.read());
    }
}