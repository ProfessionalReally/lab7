#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <locale.h>

using namespace std;

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
};