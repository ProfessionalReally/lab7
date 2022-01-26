#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include "Account.h"
#include "Friends.h"
#include "Music.h"
#include "Figure.h"
#include "Messages.h"

class Account;
class Figure;
class Friends;
class Music;
class Messages;

using namespace std;
class Like
{
private: 
    int amount = 0;  // Количество оценок

    static Like* lastLike;  // Адрес последнего элемента списка
    Like* prev;             // На предыдущий элемент списка
    Like* next;             // На следующий элемент списка

public:

    // Конструктор
    Like();

    // Конструктор
    Like(int AMOUNT);

    // Деструктор
    ~Like();

    // Инициализация структуры 
    void Set(int v);

    // Получение количества
    int Get();

    // Ввод данных в структуру 
    void InpLike();

    // Вывод данных из структуры
    void Displayamount();

    // Добавление элемента в конец списка
    void Add(void);

    // Вывод на дисплей содержимого списка
    static void reprint(void);

    // Дружественная функция обмена полями классов Account, Figure, Friends, Music, Messages, Like
    friend void pushing(Account& account, Figure& figure, Friends& friends, Music& music, Messages& message, Like& like);

    // Перегрузка оператора '+' (Like + int)
    friend Like operator+(const Like& like, int AMOUNT);

    // Перегрузка префиксного оператора '++'
    Like& operator++();

    // Перегрузка постфиксного оператора '++'
    Like operator++ (int);

    // Создание нового списка
    static void NewL();
    

};

