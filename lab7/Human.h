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
    string surname = "";        // �������
    string name = "";       // ���

public:
    //�����������
    Human();
    //����������� � �����������
    Human(string NAME, string SURNAME);

    // ���������� �������
    void SetSurname(string SURNAME);

    // ���������� ���
    void SetName(string NAME);

    // ���-�� ��������� ������ �� �����
    string GetSurname();
    string GetName();


    // ���-�� ��������� ������ �� ����� ����� ������
    void GetSurnameLink(string& SURNAME);
    void GetNameLink(string& NAME);

    // ����������
    ~Human();

    // ������������� ������ Human
    void Set(string NAME, string SURNAME);

    // ���� �������
    virtual void InpHuman();

    // ���� ������� �� �����
    void DisplayInfo();

    // ����������� ������� ������ ��������� �� �����, ��� �������� ������� (�����������, ������������, ����)
    virtual string WhoIs();

    // ������� ������
    void SayHello();
};

