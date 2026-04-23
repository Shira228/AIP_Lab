/*Напишите программу, которая принимает строку и проверяет, является ли она палиндромом с использованием стека.*/
#include <iostream>
using namespace std;

struct Node 
{
    char data;
    Node* next;
};

void push(Node*& top, char value) 
{
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = top;
    top = newNode;
}

char pop(Node*& top) 
{
    if (top == NULL) return '\0';
    Node* temp = top;
    char value = temp->data;
    top = temp->next;
    delete temp;
    return value;
}

bool isPalindrome(string str) 
{
    Node* stack = NULL;
    for (int i = 0; i < str.length(); i++) 
    {
        push(stack, str[i]);
    }
    for (int i = 0; i < str.length(); i++) 
    {
        if (str[i] != pop(stack)) 
        {
            return false;
        }
    }

    return true;
}

int main() 
{
    string str;

    cout << "Введите строку: ";
    cin >> str;

    if (isPalindrome(str)) 
    {
        cout << "Строка является палиндромом" << endl;
    } 
    else 
    {
        cout << "Строка НЕ является палиндромом" << endl;
    }

    return 0;
}