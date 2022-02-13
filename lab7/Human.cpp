#include "Human.h"

//�����������
Human::Human()
{
	surname = "";
	name = "";
}
//����������� � �����������
Human::Human(string NAME, string SURNAME)
{
	surname = SURNAME;
	name = NAME;
}
// ���������� �������
void Human::SetSurname(string SURNAME)
{
	surname = SURNAME;
}
// ���������� ���
void Human::SetName(string NAME)
{
	name = NAME;
}
// ���-�� ��������� ������ �� �����
string Human::GetSurname()
{
	return this->surname;
}
string Human::GetName()
{
	return this->name;
}

// ���-�� ��������� ������ �� ����� ����� ������
void Human::GetSurnameLink(string& SURNAME)
{
	SURNAME = this->surname;
}
void Human::GetNameLink(string& NAME)
{
	NAME = this->name;
}

// ����������
Human::~Human()
{
	;
}

// ������������� ������ Human
void Human::Set(string NAME, string SURNAME)
{
	this->name = NAME;
	this->surname = SURNAME;
}

// ���� ��������
void Human::InpHuman()
{
	printf_s("\nPlease enter a name: ");
	cin >> name;
	printf_s("\nPlease enter a surname: ");
	cin >> surname;
}
// ����� �� �����
void Human::DisplayInfo()
{
	cout << "Name and surname: " << name << " " << surname << endl;
}

// ����������� ������� ������ ��������� �� �����, ��� �������� ������� (�����������, ������������, ����)
string Human::WhoIs()
{
	return "�����������";
}

//������� ������
void Human::SayHello()
{
	cout << WhoIs() << " ������� ������!" << endl;
}
