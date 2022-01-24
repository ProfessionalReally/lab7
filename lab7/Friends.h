#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <locale.h>
#include "Account.h"
#include "Figure.h"
#include "Music.h"
#include "Messages.h"
#include "Like.h"
using namespace std;

class Account;
class Figure;
class Music;
class Messages;
class Like;
class Friends
{
private:
	string name = ""; //���
	string surname = ""; //�������
public:
	Friends(); //�����������

	~Friends(); //����������

	// ������� ��������� ������ �� �����
	string Getname();
	string Getsurname();

	void InitFriends(string NAME, string SURNAME); //������������� ������

	void InputFriends(); //��������� ������ � �������

	void OutputFriends(); //����� ������ � �������

	void DeleteFriends(); //�������� ������

	// ������������� ������� ������ ������ ������� Account, Figure, Friends, Music, Messages, Like
	friend void pushing(Account& account, Figure& figure, Friends& friends, Music& music, Messages& message, Like& like);
};