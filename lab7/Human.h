#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>

using namespace std;
class Human
{
protected:
    string surname = "";        // Фамилия
    string name = "";       // Имя

public:
    //Конструктор
    Human();
    //Конструктор с параметрами
    Human(string NAME, string SURNAME);

    // Установить фамилию
    void SetSurname(string SURNAME);

    // Установить имя
    void SetName(string NAME);

    // Фун-ии получения данных из полей
    string GetSurname();
    string GetName();


    // Фун-ии получения данных из полей через ссылку
    void GetSurnameLink(string& SURNAME);
    void GetNameLink(string& NAME);

    // Деструктор
    ~Human();

    // Инициализация класса Human
    void Set(string NAME, string SURNAME);

    // Ввод учителя
    virtual void InpHuman();

    // Ввод учителя на экран
    void DisplayInfo();

    // Виртуальная функция вывода сообщения на экран, кем является человек (неизвестный, пользователь, друг)
    virtual string WhoIs();

    // Сказать привет
    void SayHello();
};

