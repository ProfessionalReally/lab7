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

};

