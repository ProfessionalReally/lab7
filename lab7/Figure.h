#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>

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
};

