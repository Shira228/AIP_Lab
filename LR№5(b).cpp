#include <iostream>
using namespace std;

int main()
{
    int a[] {34, 645, 0, 2, 65};
    int otv1 = a[0] + a[1] + a[2] + a[3] + a[4];
    int otv2 = a[0] * a[1] * a[2] * a[3] * a[4];
    int otv3 = (a[0] * a[0]) + (a[1] * a[1]) + (a[2] * a[2]) + (a[3] * a[3]) + (a[4] * a[4]);
    cout << "Ответ 1: "<<otv1 << "\n" << "Ответ 2: " << otv2 << "\n" << "Ответ 3: " << otv3 << "\n";
    return 0;
}