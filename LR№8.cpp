/*Удаление элемента: Реализуйте функцию для удаления элемента из списка по
ключу.*/
#include <iostream>
using namespace std;

struct Node 
{
    int data;
    Node* next;
};

void append(Node*& head, int value) 
{
    Node* newNode = new Node{value, nullptr};
    if (head == nullptr) 
    {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) 
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void deleteByKey(Node*& head, int key) 
{
    Node* temp = head;
    Node* prev = nullptr;
    if (temp != nullptr && temp->data == key) 
    {
        head = temp->next;
        delete temp;
        cout << "Элемент удален\n";
        return;
    }
    while (temp != nullptr && temp->data != key) 
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == nullptr) 
    {
        cout << "Элемент не найден\n";
        return;
    }
    prev->next = temp->next;
    delete temp;
    cout << "Элемент удален\n";
}

void printList(Node* head) 
{
    if (head == nullptr) 
    {
        cout << "Список пуст\n";
        return;
    }
    Node* temp = head;
    while (temp != nullptr) 
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "0\n";
}

void deleteList(Node*& head) 
{
    Node* temp;
    while (head != nullptr) 
    {
        temp = head;
        head = head->next;
        delete temp;
    }
}

int main() 
{
    Node* head = nullptr;
    int n, value, key;
    cout << "Введите количество элементов: ";
    cin >> n;
    cout << "Введите элементы списка:\n";
    for (int i = 0; i < n; i++) 
    {
        cin >> value;
        append(head, value);
    }
    cout << "Исходный список:\n";
    printList(head);
    cout << "Введите ключ для удаления: ";
    cin >> key;
    deleteByKey(head, key);
    cout << "Список после удаления:\n";
    printList(head);
    deleteList(head);
    return 0;
}
