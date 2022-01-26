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
    int amount = 0;  // ���������� ������

    static Like* lastLike;  // ����� ���������� �������� ������
    Like* prev;             // �� ���������� ������� ������
    Like* next;             // �� ��������� ������� ������

public:

    // �����������
    Like();

    // �����������
    Like(int AMOUNT);

    // ����������
    ~Like();

    // ������������� ��������� 
    void Set(int v);

    // ��������� ����������
    int Get();

    // ���� ������ � ��������� 
    void InpLike();

    // ����� ������ �� ���������
    void Displayamount();

    // ���������� �������� � ����� ������
    void Add(void);

    // ����� �� ������� ����������� ������
    static void reprint(void);

    // ������������� ������� ������ ������ ������� Account, Figure, Friends, Music, Messages, Like
    friend void pushing(Account& account, Figure& figure, Friends& friends, Music& music, Messages& message, Like& like);

    // ���������� ��������� '+' (Like + int)
    friend Like operator+(const Like& like, int AMOUNT);

    // ���������� ����������� ��������� '++'
    Like& operator++();

    // ���������� ������������ ��������� '++'
    Like operator++ (int);

    // �������� ������ ������
    static void NewL();
    

};

