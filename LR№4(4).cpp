#include <iostream>
using namespace std;

int main()
{
    int checel;
    int *mka = &checel;
    cout << "Введите число: ";
    cin >> checel;
    if (*mka < 0)
    {
        cout << "Меньше 0";
    }
    if (*mka > 0)
    {
        cout << "Больше 0";
    }
    if (*mka == 0)
    {
        cout << "Равно 0";
    }
    return 0;
}