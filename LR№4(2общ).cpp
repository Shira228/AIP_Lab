#include <iostream>
using namespace std;

int main()
{
    int func(int *pi);
    {
        *pi = 1024; 
        /*В данном случае не используется унарный оператор &, 
        а также указатель должен указывать на переменную а не на значение*/
        return *pi;
    }

    void main()
    {   
        int *pi2 = 0; 
        int ival = func(pi2); 
        return 0;
    }
}