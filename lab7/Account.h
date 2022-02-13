#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <locale.h>
#include "Figure.h"
#include "Friends.h"
#include "Music.h"
#include "Messages.h"
#include "Human.h"

class Figure;
class Friends;
class Music;
class Messages;
class Like;

using namespace std;
class Account : public Human
{
private:
	//ACCOUNT
	//string name = ""; //���
	//string surname = ""; //�������
	string email = ""; //�����
	string password = ""; //������
	//FIGURE
	int FigureFigure = 0; //������
	int FigureColor = 0; //����
	//FRIENDS
	string FriendsName; //���
	string FriendsSurname; //�������
	//MUSIC
	string MusicTitle; //��������
	string MusicExecutor; //�����������
	//MESSAGES
	string MessagestoWhom = ""; //���� ���������
	string MessagesfromWhom = ""; //�� ���� ���������
	string Messagesmessage = ""; //����� ���������
	//LIKE
	int LikeAmount = 0; //���������� ������
public:

	Account(); //�����������

	Account(string NAME); //����������� � ����� ����������

	Account(string NAME, string SURNAME, string EMAIL, string PASSWORD); //����������� � �����������

	// ���������� ���
	//void Setname(string NAME);
	
	// ���������� �������
	//void Setsurname(string SURNAME);

	// ���������� �����
	void Setemail(string EMAIL);
	
	// ���������� ������
	void Setpassword(string PASSWORD);
	


	// ������� ��������� ������ �� �����
	//string Getname();
	//string Getsurname();
	string Getemail();
	string Getpassword();

	~Account(); //����������

	//void InitAccount(string NAME, string SURNAME, string EMAIL, string PASSWORD); //������������� ��������

	void InputAccount(); //��������� ������ � ��������

	void OutputAccount(); //����� ������ � ��������

	//void DeleteAccount(); //�������� ������ � ��������

	// ������������� ������� ������ ������ ������� Account, Figure, Friends, Music, Messages, Like
	friend void pushing(Account& account, Figure& figure, Friends& friends, Music& music, Messages& message, Like& like);

	// ���������� ��������� '=' (Account = Human)
	Account& operator=(Human& human);

	// ����������� ������� ������ ��������� �� �����, ��� �������� ������� (������������, ����)
	virtual string WhoIs();

};