#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <locale.h>

using namespace std;
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
};