#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <locale.h>
#include "Account.h"
#include "Figure.h"
#include "Music.h"
#include "Messages.h"
#include "Like.h"
#include "Human.h"
using namespace std;

class Account;
class Figure;
class Music;
class Messages;
class Like;
class Friends : public Human
{
private:
	//string name = ""; //Имя
	//string surname = ""; //Фамилия
public:
	Friends(); //Конструктор

	Friends(string NAME); //Констуктор с одним параметром

	Friends(string NAME, string SURNAME); //Конструктор с параметрами

	//Конструктор копии
	Friends(const Friends& Friend);

	// Перегрузка функции присваивания
	Friends& operator=(const Friends& Friend);

	//void Setname(string NAME); //Установить имя

	//void Setsurname(string SURNAME); //Установить фамилию

	~Friends(); //Деструктор

	// Функции получения данных из полей
	//string Getname();
	//string Getsurname();

	//void InitFriends(string NAME, string SURNAME); //Инициализация друзей

	void InputFriends(); //Изменение данных о друзьях

	virtual void OutputFriends(); //Вывод данных о друзьях

	//void DeleteFriends(); //Удаление друзей

	// Виртуальная функция вывода сообщения на экран, кем является человек (неизвестный, пользователь, друг)
	/*virtual*/ string WhoIs();

	// Перегрузка оператора '=' (Friends = Human)
	Friends& operator=(Human& human);

		// Расширение действий оператора <<
		friend std::ostream & operator<< (std::ostream & out, const Friends & Friend);

	// Дружественная функция обмена полями классов Account, Figure, Friends, Music, Messages, Like
	friend void pushing(Account& account, Figure& figure, Friends& friends, Music& music, Messages& message, Like& like);

	
	
};