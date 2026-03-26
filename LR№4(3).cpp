#include <iostream>
using namespace std;

int main()
{
    int fir;
    int sec;
    int summ = 0;
    cout << "Введите 1 число: ";
    cin >> fir;
    cout << "Введите 2 число: ";
    cin >> sec;
    int *odin = &fir;
    int *dwa = &sec;
    cout << odin << "\n";
    cout << dwa << "\n";
    summ = *odin + *dwa;
    cout << summ << "\n";
    return 0;
}