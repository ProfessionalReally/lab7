#include "Like.h"
// �����������
Like::Like()
{
    amount = 0;
}

// �����������
Like::Like(int AMOUNT)
{
    this->amount = AMOUNT;
}

void Like::Setamount(int AMOUNT) //���������� ���������� ������
{
    amount = AMOUNT;
}

// ������������� ��������� 
/*void Like::Set(int v)
{
    amount = v;
}*/

// ��������� ����������
int Like::Get()
{
    return this->amount;
}

// ���� ������ � ��������� 
void Like::InpLike()
{
    string Lik;
    cout << "Please enter a amount likes: ";
    cin >> Lik;
    amount = stoi(Lik);
    cout << endl;
}

// ����� ������ �� ���������
void Like::Displayamount()
{
    cout << "Amount likes: " << amount << endl;

}


// ���������� �������� � ����� ������
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

// ����� �� ������� ����������� ������
void Like::reprint(void)
{
    Like* uk;   // ��������������� ���������
    uk = lastLike;
    if (uk == NULL)
    {
        cout << "List is empty!";
        return;
    }
    else
        cout << "\nList content :\n";

    // ���� ������ � �������� ������� �������� ��������� ������:
    while (uk != NULL)
    {
        cout << uk->amount << '\t';
        uk = uk->prev;
    }
}

// �������� ������ ������
void Like::NewL()
{
    lastLike = NULL;
}

// ����������
Like::~Like()
{
    ;
}

// ���������� ��������� '+' (Like + int)
Like operator+(const Like& like, int AMOUNT)
{
        return Like(like.amount + AMOUNT);
}

// ���������� ����������� ��������� '++'
Like& Like::operator++()
{
    amount += 1;
    return *this;
}
// ���������� ������������ ��������� '++'
Like Like::operator++ (int)
{
    Like m1 = *this;
    ++* this;
    return m1;
}
