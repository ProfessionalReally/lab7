#include "Like.h"
// Конструктор
Like::Like()
{
    amount = 0;
}

// Конструктор
Like::Like(int AMOUNT)
{
    this->amount = AMOUNT;
}

void Like::Setamount(int AMOUNT) //Установить количество оценок
{
    amount = AMOUNT;
}

// Инициализация структуры 
/*void Like::Set(int v)
{
    amount = v;
}*/

// Получение количества
int Like::Get()
{
    return this->amount;
}

// Ввод данных в структуру 
void Like::InpLike()
{
    string Lik;
    cout << "Please enter a amount likes: ";
    cin >> Lik;
    amount = stoi(Lik);
    cout << endl;
}

// Вывод данных из структуры
void Like::Displayamount()
{
    cout << "Amount likes: " << amount << endl;

}


// Добавление элемента в конец списка
void Like::Add(void)
{
    if (lastLike == NULL)
        this->prev = NULL;
    else
    {
        lastLike->next = this;
        prev = lastLike;
    }
    lastLike = this;
    this->next = NULL;
}

// Вывод на дисплей содержимого списка
void Like::reprint(void)
{
    Like* uk;   // Вспомогательный указатель
    uk = lastLike;
    if (uk == NULL)
    {
        cout << "List is empty!";
        return;
    }
    else
        cout << "\nList content :\n";

    // Цикл печати в обратном порядке значений элементов списка:
    while (uk != NULL)
    {
        cout << uk->amount << '\t';
        uk = uk->prev;
    }
}

// Создание нового списка
void Like::NewL()
{
    lastLike = NULL;
}

// Деструктор
Like::~Like()
{
    ;
}

// Перегрузка оператора '+' (Like + int)
Like operator+(const Like& like, int AMOUNT)
{
        return Like(like.amount + AMOUNT);
}

// Перегрузка префиксного оператора '++'
Like& Like::operator++()
{
    amount += 1;
    return *this;
}
// Перегрузка постфиксного оператора '++'
Like Like::operator++ (int)
{
    Like m1 = *this;
    ++* this;
    return m1;
}
