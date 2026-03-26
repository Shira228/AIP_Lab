#include <iostream>
using namespace std;

struct Point 
{
    int x, y;
};

void shift(Point* p, int dx, int dy) 
{
    if (p != nullptr) 
    {
        p->x += dx;
        p->y += dy;
    }
}

int main() 
{
    int x, y, dx, dy;    
    cout << "Введите начальную координату x: ";
    cin >> x;
    cout << "Введите начальную координату y: ";
    cin >> y;
    cout << "Введите смещение по x: ";
    cin >> dx;
    cout << "Введите смещение по y: ";
    cin >> dy;
    Point p = {x, y};
    Point* ptr = &p;
    cout << "Точка до сдвига: " << ptr->x << ", " << ptr->y << "\n";
    shift(ptr, dx, dy);
    cout << "Точка после сдвига: " << ptr->x << ", " << ptr->y << "\n";
    return 0;
}