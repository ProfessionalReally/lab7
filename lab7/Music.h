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
	string title = ""; //Название
	string executor = ""; //Исполнитель
public:

	Music(); //Конструктор

	~Music(); //Деструктор

	// Функции получения данных из полей
	string Gettitle();
	string Getexecutor();

	void MUSICinit(string EXECUTOR, string TITLE); //Инициализация музыки

	void MUSICinput(); //Изменение данных о музыке

	void OutputMusic(); //Вывод данных о музыке

	void DeleteMusic(); //Удаление данных о музыке
};