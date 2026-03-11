#include <iostream>
using namespace std;

int main()
{  
    int a[5];
    for (int i = 0; i < 5; i++)
        a[i] = (rand() % 10);
    cout << a[0] << "\n";
    cout << a[1] << "\n";
    cout << a[2] << "\n";
    cout << a[3] << "\n";
    cout << a[4] << "\n";
    int otv1 = a[0] + a[1] + a[2] + a[3] + a[4];
    int otv2 = a[0] * a[1] * a[2] * a[3] * a[4];
    int otv3 = (a[0] * a[0]) + (a[1] * a[1]) + (a[2] * a[2]) + (a[3] * a[3]) + (a[4] * a[4]);
    cout << "Ответ 1: "<<otv1 << "\n" << "Ответ 2: " << otv2 << "\n" << "Ответ 3: " << otv3 << "\n";
    return 0;
}