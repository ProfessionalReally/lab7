#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "Account.h"
#include "Friends.h"
#include "Music.h"
#include "Figure.h"
#include "Like.h"
using namespace std;
class Account;
class Figure;
class Friends;
class Music;
class Like;
class Messages
{
private:
	string toWhom = ""; //Кому сообщение
	string fromWhom = ""; //От кого сообщение
	string message = ""; //Текст сообщение
public:
	Messages(); //Конструктор

	Messages(string TOWHOM); //Конструктор с одним параметром

	Messages(string TOWHOM, string FROMWHOM, string MESSAGE); //Конструктор с параметрами

	void SettoWhom(string TOWHOM); //Установить кому сообщение

	void SetfromWhom(string FROMWHOM); //Установить от кого сообщение

	void Setmessage(string MESSAGE); //Установить текст сообщения

	~Messages(); //Деструктор

	// Функции получения данных из полей
	string GettoWhom();
	string GetfromWhom();
	string Getmessage();
	
	// Фун-ии получения данных из полей через ссылку
	void GettoWhomLink(string& TOWHOM);

	void GetfromWhomLink(string& FROMWHOM);

	void GetmessageLink(string& MESSAGE);

	//void InitMessages(string TOWHOM, string FROMWHOM, string MESSAGE); //Инициализация сообщения

	void InputMessages(); //Изменение данных о сообщении

	void OutputMessages(); //Вывод данных о сообщении

	void DeleteMessages(); //Удаление данных о сообщении

	// Дружественная функция обмена полями классов Account, Figure, Friends, Music, Messages, Like
	friend void pushing(Account& account, Figure& figure, Friends& friends, Music& music, Messages& message, Like& like);
};

