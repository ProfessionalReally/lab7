#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <locale.h>


using namespace std;
class Account
{
private:
	//ACCOUNT
	string fromWhom = ""; //���
	string surfromWhom = ""; //�������
	string email = ""; //�����
	string password = ""; //������

public:
	//FIGURE
	int FigureFigure = 0; //������
	int FigureColor = 0; //����
	//FRIENDS
	string FriendsfromWhom[2]; //���
	string FriendsSurfromWhom[2]; //�������
	//MUSIC
	string MusicTitle[2]; //��������
	string MusicExecutor[2]; //�����������
	//MESSAGES
	string MessagestoWhom = ""; //���� ���������
	string MessagesfromWhom = ""; //�� ���� ���������
	string Messagesmessage = ""; //����� ���������

	Account(); //�����������

	// ������� ��������� ������ �� �����
	string GetfromWhom();
	string GetsurfromWhom();
	string Getemail();
	string Getpassword();

	~Account(); //����������

	void InitAccount(string fromWhom, string SURfromWhom, string EMAIL, string PASSWORD); //������������� ��������

	void InputAccount(); //��������� ������ � ��������

	void OutputAccount(); //����� ������ � ��������

	void DeleteAccount(); //�������� ������ � ��������
};