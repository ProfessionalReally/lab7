#include "Friends.h"

Friends::Friends() //�����������
{
	name = ""; //���
	surname = ""; //�������
}

Friends::Friends(string NAME) : Human(NAME, "") //���������� � ����� ����������
{
	name = NAME; //���
	surname = ""; //�������
}

Friends::Friends(string NAME, string SURNAME) : Human(NAME, SURNAME) //����������� � �����������
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

/*void Friends::Setname(string NAME) //���������� ���
{
	name = NAME; //���
}

void Friends::Setsurname(string SURNAME) //���������� �������
{
	surname = SURNAME; //�������
}*/

// ������� ��������� ������ �� �����
/*string Friends::Getname()
{
	return this->name;
}

string Friends::Getsurname()
{
	return this->surname;
}*/

/*void Friends::InitFriends(string NAME, string SURNAME) //������������� ������
{
	this->name = NAME;
	this->surname = SURNAME;
}*/

void Friends::InputFriends() //��������� ������ � �������
{
	//printf_s("\nPlease enter your friend's name: ");
	//cin >> name;
	//printf_s("\nPlease enter your friend's surname: ");
	//cin >> surname;
	Human::InpHuman();
}

void Friends::OutputFriends() //����� ������ � �������
{
	//Human::DisplayInfo();
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

/*void Friends::DeleteFriends() //�������� ������
{
	this->name = "";
	this->surname = "";
}*/

// ����������� ������� ������ ��������� �� �����, ��� �������� ������� (�����������, ������������, ����)
string Friends::WhoIs()
{
	return "����";
}

// ���������� ��������� '=' (Friends = Persone)
Friends& Friends::operator=(Human & human) 
{
	this->name = human.GetName();
	this->surname = human.GetSurname();

	return *this;
}

// ���������� �������� ��������� <<
std::ostream& operator<< (std::ostream& out, const Friends& Friend)
{
	// ��������� operator<< �������� ������ ������ Friends, �� �� ����� ������ ������ � ������ Friends
	out << "Name and Surname: " << Friend.name << " " << Friend.surname;

	return out;
}

Friends::~Friends() //����������
{
	;
}