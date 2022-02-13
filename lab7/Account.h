#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <locale.h>
#include "Figure.h"
#include "Friends.h"
#include "Music.h"
#include "Messages.h"
#include "Human.h"

class Figure;
class Friends;
class Music;
class Messages;
class Like;

using namespace std;
class Account : public Human
{
private:
	//ACCOUNT
	//string name = ""; //Имя
	//string surname = ""; //Фамилия
	string email = ""; //Почта
	string password = ""; //Пароль
	//FIGURE
	int FigureFigure = 0; //Фигура
	int FigureColor = 0; //Цвет
	//FRIENDS
	string FriendsName; //Имя
	string FriendsSurname; //Фамилия
	//MUSIC
	string MusicTitle; //Название
	string MusicExecutor; //Исполнитель
	//MESSAGES
	string MessagestoWhom = ""; //Кому сообщение
	string MessagesfromWhom = ""; //От кого сообщение
	string Messagesmessage = ""; //Текст сообщения
	//LIKE
	int LikeAmount = 0; //Количество лайков
public:

	Account(); //Конструктор

	Account(string NAME); //Конструктор с одним параметром

	Account(string NAME, string SURNAME, string EMAIL, string PASSWORD); //Конструктор с параметрами

	// Установить имя
	//void Setname(string NAME);
	
	// Установить фамилию
	//void Setsurname(string SURNAME);

	// Установить почту
	void Setemail(string EMAIL);
	
	// Установить пароль
	void Setpassword(string PASSWORD);
	


	// Функции получения данных из полей
	//string Getname();
	//string Getsurname();
	string Getemail();
	string Getpassword();

	~Account(); //Деструктор

	//void InitAccount(string NAME, string SURNAME, string EMAIL, string PASSWORD); //Инициализация аккаунта

	void InputAccount(); //Изменение данных о аккаунте

	void OutputAccount(); //Вывод данных о аккаунте

	//void DeleteAccount(); //Удаление данных о аккаунта

	// Дружественная функция обмена полями классов Account, Figure, Friends, Music, Messages, Like
	friend void pushing(Account& account, Figure& figure, Friends& friends, Music& music, Messages& message, Like& like);

	// Перегрузка оператора '=' (Account = Human)
	Account& operator=(Human& human);

	// Виртуальная функция вывода сообщения на екран, кем является человек (пользователь, друг)
	virtual string WhoIs();

};