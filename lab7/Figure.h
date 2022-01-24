#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "Account.h"
#include "Friends.h"
#include "Music.h"
#include "Messages.h"
#include "Like.h"

class Account;
class Friends;
class Music;
class Messages;
class Like;
using namespace std;
class Figure
{
private:
	int figure = 0; //������
	int color = 0; //����
public:

	Figure(); //�����������

	~Figure(); //����������

	// ������� ��������� ������ �� �����
	int Getfigure();
	int Getcolor();

	// ��������� ������ ����� ���������
	void GetfigureL(int* FIGURE);

	void GetcolorL(int* COLOR);

	void InitFigure(int FIGURE, int COLOR); //������������� ������

	void InputFigure(); //��������� ������ � ������

	void OutputFigure(); //����� ������ � ������

	void DeleteFigure(); //�������� ������ � ������

	friend void pushing(Account& account, Figure& figure, Friends& friends, Music& music, Messages& message, Like& like);
};

