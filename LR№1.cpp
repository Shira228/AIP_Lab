#include <iostream>
using namespace std;

int main()
{
    struct Employee 
    {
        string name; 
        string post; 
        int salary; 
        int prize;
    };
    struct Employee Employee;
    int sum;
    int sum1 = 0;
    int max = 0;
    int nump = 10;
    string nametop;
    do
    {
        cout << "Введите еще " << nump << " имен сотрудников:" << "\n";
        cin >> Employee.name;
        cout << "Введите оклад: ";
        cin >> Employee.salary;
        cout << "Введите премию: ";
        cin >> Employee.prize;
        nump = nump - 1;
        sum = Employee.salary + Employee.prize;
        if (sum > sum1)
        {
            max = sum;
            nametop = Employee.name;
        }
        sum1 = max;
    }
    while (nump > 0);
    cout << "Самая высокая общая зарплата ";
    cout << max;
    cout << " у " << nametop;
}