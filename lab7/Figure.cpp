#include "Figure.h"

Figure::Figure() //�����������
{
	figure = 0; //������
	color = 0; //����
}

// ������� ��������� ������ �� �����
int Figure::Getfigure()
{
	return this->figure;
}
int Figure::Getcolor()
{
	return this->color;
}

// ��������� ������ ����� ���������
void Figure::GetfigureL(int* FIGURE)
{
	*FIGURE = figure;
}

void Figure::GetcolorL(int* COLOR)
{
	*COLOR = color;
}

void Figure::InitFigure(int FIGURE, int COLOR) //������������� ������
{
	this->figure = FIGURE;
	this->color = COLOR;
}

void Figure::InputFigure() //��������� ������ � ������
{
	printf_s("\nPlease enter a figure(1 - Triangle, 2 - Circle, 3 - Square): ");
	cin >> figure;
	printf_s("\nPlease enter a color(1 - Red, 2 - Green, 3 - Blue): ");
	cin >> color;
}

void Figure::OutputFigure() //����� ������ � ������
{
	if (figure == 0)
		printf_s("Figure: Empty\n");
	if (figure == 1)
		printf_s("Figure: Triangle\n");
	if (figure == 2)
		printf_s("Figure: Circle\n");
	if (figure == 3)
		printf_s("Figure: Square\n");
	if (color == 0)
		printf_s("Color: Empty\n");
	if (color == 1)
		printf_s("Color: Red\n");
	if (color == 2)
		printf_s("Color: Green\n");
	if (color == 3)
		printf_s("Color: Blue\n");
	printf_s("\n");
}

void Figure::DeleteFigure() //�������� ������
{
	this->figure = 0;
	this->color = 0;
}

Figure::~Figure() //����������
{
	;
}