#include "Music.h"

Music::Music() //�����������
{
	title = ""; //��������
	executor = ""; //�����������
}

// ������� ��������� ������ �� �����
string Music::Gettitle()
{
	return this->title;
}

string Music::Getexecutor()
{
	return this->executor;
}

void Music::MUSICinit(string EXECUTOR, string TITLE) //������������� ������
{
	this->executor = EXECUTOR;
	this->title = TITLE;
}

void Music::MUSICinput() //��������� ������ � ������
{
	printf_s("Please enter a executor: ");
	cin >> executor;
	printf_s("Please enter a title: ");
	cin >> title;
}

void Music::OutputMusic() //����� ������ � ������
{
	if ((executor[0] == 0) && (title[0] == 0))
	{
		printf_s("Empty - Empty");
	}
	else
	{
		cout << executor << " - " << title << endl;
	}
	printf_s("\n");
}

void Music::DeleteMusic() //�������� ������
{
	this->title = "";
	this->executor = "";
}

Music::~Music() //����������
{
	;
}