﻿#include "Account.h"
#include "Figure.h"
#include "Friends.h"
#include "Music.h"
#include "Messages.h"
#include "string"
#include "Windows.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "1)" << endl;
	cout << "=================================================================" << endl;
	cout << "Тест возврата значения из метода класса Messages через ссылку (&)" << endl;
	Messages messages[1];
	string t = "Ivan Ivanov"; //Кому сообщение
	string f = "Anton Petrov"; //От кого сообщение
	string m = "Hello!"; //Текст сообщения

	messages->InitMessages(t, f, m);

	string toWhom;  string& TOWHOM = toWhom;  messages[0].GettoWhomLink(TOWHOM);
	string fromWhom; string& FROMWHOM = fromWhom; messages[0].GetfromWhomLink(FROMWHOM);
	string message; string& MESSAGE = message; messages[0].GetmessageLink(MESSAGE);

	cout << TOWHOM << endl;
	cout << FROMWHOM << endl;
	cout << MESSAGE << endl;

	cout << "\n" << endl;

	cout << "Тест возврата значения из метода класса Figure через указатель (*)" << endl;
	Figure fig[1];
	int figure = 2;
	int color = 1;

	fig->InitFigure(figure, color);

	int* figure_p = new int;
	int* color_p = new int;
	fig[0].GetcolorL(color_p);
	fig[0].GetfigureL(figure_p);
	cout << *figure_p << endl;
	cout << *color_p << endl;

	
}