#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "Account.h"
#include "Friends.h"
#include "Music.h"
#include "Figure.h"
#include "Like.h"
using namespace std;
class Account;
class Figure;
class Friends;
class Music;
class Like;
class Messages
{
private:
	string toWhom = ""; //���� ���������
	string fromWhom = ""; //�� ���� ���������
	string message = ""; //����� ���������
public:
	Messages(); //�����������

	Messages(string TOWHOM); //����������� � ����� ����������

	Messages(string TOWHOM, string FROMWHOM, string MESSAGE); //����������� � �����������

	void SettoWhom(string TOWHOM); //���������� ���� ���������

	void SetfromWhom(string FROMWHOM); //���������� �� ���� ���������

	void Setmessage(string MESSAGE); //���������� ����� ���������

	~Messages(); //����������

	// ������� ��������� ������ �� �����
	string GettoWhom();
	string GetfromWhom();
	string Getmessage();
	
	// ���-�� ��������� ������ �� ����� ����� ������
	void GettoWhomLink(string& TOWHOM);

	void GetfromWhomLink(string& FROMWHOM);

	void GetmessageLink(string& MESSAGE);

	//void InitMessages(string TOWHOM, string FROMWHOM, string MESSAGE); //������������� ���������

	void InputMessages(); //��������� ������ � ���������

	void OutputMessages(); //����� ������ � ���������

	void DeleteMessages(); //�������� ������ � ���������

	// ������������� ������� ������ ������ ������� Account, Figure, Friends, Music, Messages, Like
	friend void pushing(Account& account, Figure& figure, Friends& friends, Music& music, Messages& message, Like& like);
};

