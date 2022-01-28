#include "Friends.h"

Friends::Friends() //�����������
{
	name = ""; //���
	surname = ""; //�������
}

Friends::Friends(string NAME) //���������� � ����� ����������
{
	name = NAME; //���
	surname = ""; //�������
}

Friends::Friends(string NAME, string SURNAME) //����������� � �����������
{
	name = NAME; //���
	surname = SURNAME; //�������
}

//����������� �����
Friends::Friends(const Friends& Friend)
{
	// ������������� �����������, �.�. ��� �� ���������
	name = Friend.name;

	// ������������� �����������, �.�. ��� �� ���������
	surname = Friend.surname;
}

// ���������� ������� ������������
Friends& Friends::operator=(const Friends& Friend)
{
	// �������� �� ����������������
	if (this == &Friend)
		return *this;

	name = Friend.name;

	surname = Friend.surname;

	return *this;

}

void Friends::Setname(string NAME) //���������� ���
{
	name = NAME; //���
}

void Friends::Setsurname(string SURNAME) //���������� �������
{
	surname = SURNAME; //�������
}

// ������� ��������� ������ �� �����
string Friends::Getname()
{
	return this->name;
}

string Friends::Getsurname()
{
	return this->surname;
}

/*void Friends::InitFriends(string NAME, string SURNAME) //������������� ������
{
	this->name = NAME;
	this->surname = SURNAME;
}*/

void Friends::InputFriends() //��������� ������ � �������
{
	printf_s("\nPlease enter your friend's name: ");
	cin >> name;
	printf_s("\nPlease enter your friend's surname: ");
	cin >> surname;
}

void Friends::OutputFriends() //����� ������ � �������
{
	if ((name[0] == 0) && (surname[0] == 0))
	{
		printf_s("Your friend's name: Empty\n");
		printf_s("Your friend's surname: Empty\n");
	}
	else
	{
		cout << "Your friend's name: " << name << endl;
		cout << "Your friend's surname: " << surname << endl;
	}
	printf_s("\n");
}

void Friends::DeleteFriends() //�������� ������
{
	this->name = "";
	this->surname = "";
}


Friends::~Friends() //����������
{
	;
}