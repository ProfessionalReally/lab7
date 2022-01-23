#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;
class Figure
{
private:

	int figure = 0; //Фигура
	int color = 0; //Цвет
public:

	Figure(); //Конструктор

	~Figure(); //Деструктор

	// Функции получения данных из полей
	int Getfigure();
	int Getcolor();

	// Получение оценки через указатель
	void GetfigureL(int* FIGURE);

	void GetcolorL(int* COLOR);

	void InitFigure(int FIGURE, int COLOR); //Инициализация фигуры

	void InputFigure(); //Изменение данных о фигуре

	void OutputFigure(); //Вывод данных о фигуре

	void DeleteFigure(); //Удаление данных о фигуре
};

