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
	string name = ""; //Имя
	string surname = ""; //Фамилия
public:
	Friends(); //Конструктор

	~Friends(); //Деструктор

	// Функции получения данных из полей
	string Getname();
	string Getsurname();

	void InitFriends(string NAME, string SURNAME); //Инициализация друзей

	void InputFriends(); //Изменение данных о друзьях

	void OutputFriends(); //Вывод данных о друзьях

	void DeleteFriends(); //Удаление друзей
};