/*Напишите функцию для поиска определенного элемента в списке*/
#include <iostream>
using namespace std;

struct Node 
{
    int data;
    Node* next;
};

void add(Node*& head, int value) 
{
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;
    if (head == NULL) 
    {
        head = newNode;
    } 
    else 
    {
        Node* temp = head;
        while (temp->next != NULL) 
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

bool search(Node* head, int value) 
{
    Node* temp = head;
    while (temp != NULL) 
    {
        if (temp->data == value) 
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void printList(Node* head) 
{
    Node* temp = head;
    while (temp != NULL) 
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() 
{
    Node* head = NULL;
    int n, x;
    cout << "Введите количество элементов: ";
    cin >> n;
    for (int i = 0; i < n; i++) 
    {
        cout << "Введите элемент: ";
        cin >> x;
        add(head, x);
    }
    cout << "Список: ";
    printList(head);
    cout << "Введите элемент для поиска: ";
    cin >> x;
    if (search(head, x)) 
    {
        cout << "Элемент найден" << endl;
    } 
    else 
    {
        cout << "Элемент не найден" << endl;
    }

    return 0;
}