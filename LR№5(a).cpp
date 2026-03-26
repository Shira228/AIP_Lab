#include <iostream>
using namespace std;

int main()
{
    int mass[] {1,675,7,645,5};
    int *ptr {mass};
    int max = 0;
    while (*ptr > max)
    {
        max = *ptr;
        ptr++;
    }
    cout << "Максимальное число: " << max << endl;
    return 0;
}