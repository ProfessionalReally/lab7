#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;
class Messages
{
private:
	string toWhom = ""; //���� ���������
	string fromWhom = ""; //�� ���� ���������
	string message = ""; //����� ���������
public:

	Messages(); //�����������

	~Messages(); //����������

	// ������� ��������� ������ �� �����
	string GettoWhom();
	string GetfromWhom();
	string Getmessage();
	
	// ���-�� ��������� ������ �� ����� ����� ������
	void GettoWhomLink(string& TOWHOM);

	void GetfromWhomLink(string& FROMWHOM);

	void GetmessageLink(string& MESSAGE);

	void InitMessages(string TOWHOM, string FROMWHOM, string MESSAGE); //������������� ���������

	void InputMessages(); //��������� ������ � ���������

	void OutputMessages(); //����� ������ � ���������

	void DeleteMessages(); //�������� ������ � ���������
};
