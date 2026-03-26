#include <iostream>
using namespace std;

int main()
{
    string mass[] {"C++", "is", "one", "of", "the", "world's", "most", "popular", "programming", "languages"};
    string S;
    bool r = 0;
    cout << "Введите S: ";
    cin >> S;
    for (int i = 0; i < 10; i++)
    {
        if (S == mass[i])
        {
            r = 1;
        }
    }
        if (r == 1)
        {
            cout << "S принадлежит массиву";
        }
        else
        {
            cout << "S не принадлежит массиву";
        }

}