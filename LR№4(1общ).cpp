#include <iostream>
using namespace std;

int main()
{
    int ival = 1024;
    int ival2 = 2048;
    int *pi1 = &ival;
    int *pi2 = &ival2;
    int **pi3 = 0;
    ival = *pi3;      // Есть ошибка
    *pi2 = *pi3;      // Есть ошибка
    ival = pi2;       // Есть ошибка
    pi2 = *pi1;       // Есть ошибка
    pi1 = pi3;        // Есть ошибка
    ival = *pi1;      // Нет ошибки
    pi1 = ival;       // Есть ошибка
    pi3 = &pi2;       // Нет ошибки
    return 0;
}