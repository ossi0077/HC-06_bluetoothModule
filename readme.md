# HC-06 bluetooth module

## ���
	- �۵� ���� : 3.3V ~ 5V
	- ������� 2.0
	- �⺻ ����
		- name		: HC-06
		- baud rate : 9600
		- Pincode	: 1234 or 0000

## �ʿ� �ϵ����
	- HC-06
	- Arduino UNO
	- UNO cable
	- F-M cable(4ea)

## ����
	- TXD, RXD�� UNO������ Digital �� ���ϴ� ������ �����Ͽ� ����մϴ�.(���������� 6, 7 ���)

|HC-06|Arduino UNO|
|--|--|
|RXD|D7(���� ����)|
|TXD|D6(���� ����)|
|GND|GND|
|VCC|5V|

![schematic.jpg](./img/schematic.jpg)

## ���̺귯��
	- SoftwareSerial

## AT command
	- AT ��ɾ ����Ͽ� ������� Ȯ���� �����մϴ�.
	- �ø��� ����Ϳ��� ATĿ�ǵ带 �����Ͽ� ��� �����մϴ�.(��� �� ���ۿɼ��� �����ؼ� ����ϸ� ���ڴ� line ending ������ ���)
	- HC-06 ����� Ÿ ��⿡ ����� ��� AT command�� �۵����� �ʽ��ϴ�.

![AT_commands.png](./img/AT_commands.png)

## example_code_1.cpp
	1.	�ҽ��ڵ� 'code/example_code_1.cpp' ���ε�
	2.	AT(�빮�ڷ� �Է�) �ø��� ����ͷ� ���� �� OK���� Ȯ��
![AT_result.png](./img/AT_result.png)

	3.	����Ʈ�� 'Serial Bluetooth Terminal'�� ��ġ
	4.	�� ���� �� HC-06 ����
	5.	�ؽ�Ʈ �����Ͽ� �۵��ϴ��� Ȯ��(���������� AT���� �������� ������ �ø��� ����� ���ۿɼ��� 'Both NL & CR'�� �����Ͽ����ϴ�.)

<img src="./img/Connect_result_cellphone.jpg" width=50% height=50%>

![Connect_result_pc.png](./img/Connect_result_pc.png)
