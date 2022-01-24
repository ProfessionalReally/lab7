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


class Figure;
class Friends;
class Music;
class Messages;
class Like;

using namespace std;
class Account
{
private:
	//ACCOUNT
	string name = ""; //Имя
	string surname = ""; //Фамилия
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

	// Функции получения данных из полей
	string GetfromWhom();
	string GetsurfromWhom();
	string Getemail();
	string Getpassword();

	~Account(); //Деструктор

	void InitAccount(string fromWhom, string SURfromWhom, string EMAIL, string PASSWORD); //Инициализация аккаунта

	void InputAccount(); //Изменение данных о аккаунте

	void OutputAccount(); //Вывод данных о аккаунте

	void DeleteAccount(); //Удаление данных о аккаунта

	// Дружественная функция обмена кординатами классов Account, Figure, Friends, Music, Messages
	friend void pushing(Account& account, Figure& figure, Friends& friends, Music& music, Messages& message, Like& like);

};