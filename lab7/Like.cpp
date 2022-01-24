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

// Инициализация структуры 
void Like::Set(int v)
{
    amount = v;
}

// Получение количества
int Like::Get()
{
    return this->amount;
}

// Ввод данных в структуру 
void Like::InpLike()
{
    string Lik;
    cout << "Введите оценку: ";
    cin >> Lik;
    amount = stoi(Lik);
    cout << endl;
}

// Вывод данных из структуры
void Like::Displayamount()
{
    cout << "Оценка: " << amount << endl;

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
        cout << "Список пуст!";
        return;
    }
    else
        cout << "\nСодержимое списка:\n";

    // Цикл печати в обратном порядке значений элементов списка:
    while (uk != NULL)
    {
        cout << uk->amount << '\t';
        uk = uk->prev;
    }
}

// Деструктор
Like::~Like()
{
    ;
}
