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

// ������������� ��������� 
void Like::Set(int v)
{
    amount = v;
}

// ��������� ����������
int Like::Get()
{
    return this->amount;
}

// ���� ������ � ��������� 
void Like::InpLike()
{
    string Lik;
    cout << "������� ������: ";
    cin >> Lik;
    amount = stoi(Lik);
    cout << endl;
}

// ����� ������ �� ���������
void Like::Displayamount()
{
    cout << "������: " << amount << endl;

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
        cout << "������ ����!";
        return;
    }
    else
        cout << "\n���������� ������:\n";

    // ���� ������ � �������� ������� �������� ��������� ������:
    while (uk != NULL)
    {
        cout << uk->amount << '\t';
        uk = uk->prev;
    }
}

// ����������
Like::~Like()
{
    ;
}
