/*Дана матрица размера M ×	N. Упорядочить ее строки так, чтобы их первые
элементы образовывали возрастающую последовательность*/
#include <iostream>
using namespace std;

int main() 
{
    int M, N;
    cout << "Введите количество строк и столбцов: \n";
    cin >> M >> N;
    int** a = new int*[M];
    for (int i = 0; i < M; i++) 
    {
        a[i] = new int[N];
    }
    cout << "Введите элементы матрицы: \n";
    for (int i = 0; i < M; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < M - 1; i++) 
    {
        for (int j = 0; j < M - i - 1; j++) 
        {
            if (a[j][0] > a[j + 1][0]) 
            {
                for (int k = 0; k < N; k++) 
                {
                    swap(a[k][j], a[j + 1][k]);
                }
            }
        }
    }
    cout << "Отсортированная матрица: \n";
    for (int i = 0; i < M; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < M; i++) 
    {
        delete[] a[i];
    }
    delete[] a;
    return 0;
}