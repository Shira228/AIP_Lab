#include <iostream>
using namespace std;

void printArray(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int schetmulti(int* arr, int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 3 == 0)
        {
            count++;
        }
    }

    return count;
}

void puzirsort(int* arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int* findmin(int* arr, int n)
{
    int* minNeg = nullptr;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            if (minNeg == nullptr || arr[i] < *minNeg)
            {
                minNeg = &arr[i];
            }
        }
    }

    return minNeg;
}

int main()
{
    int n;
    cout << "Введите количество элементов массива: ";
    cin >> n;
    int* arr = new int[n];
    cout << "Введите элементы массива:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "\nИсходный массив:\n";
    printArray(arr, n);
    puzirsort€(arr, n);
    cout << "\nМассив после сортировки по возрастанию:\n";
    printArray(arr, n);
    int count = countMultiplesOfThree(arr, n);
    cout << "\nКоличество элементов, кратных 3: " << count << endl;
    int* minNegAddress = findMinNegativeAddress(arr, n);
    if (minNegAddress != nullptr)
    {
        cout << "\nМинимальный среди отрицательных элементов: " << *minNegAddress << endl;
        cout << "Его адрес: " << minNegAddress << endl;
    }
    else
    {
        cout << "\nОтрицательных элементов в массиве нет.\n";
    }
    delete[] arr;
    return 0;
}