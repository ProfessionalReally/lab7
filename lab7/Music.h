#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <locale.h>
#include "Account.h"
#include "Friends.h"
#include "Figure.h"
#include "Messages.h"
#include "Like.h"
using namespace std;

class Account;
class Figure;
class Friends;
class Messages;
class Like;
class Music
{
private:
	string title = ""; //��������
	string executor = ""; //�����������
public:

	Music(); //�����������

	~Music(); //����������

	// ������� ��������� ������ �� �����
	string Gettitle();
	string Getexecutor();

	void MUSICinit(string EXECUTOR, string TITLE); //������������� ������

	void MUSICinput(); //��������� ������ � ������

	void OutputMusic(); //����� ������ � ������

	void DeleteMusic(); //�������� ������ � ������

	friend void pushing(Account& account, Figure& figure, Friends& friends, Music& music, Messages& message, Like& like);
};