#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
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

};

