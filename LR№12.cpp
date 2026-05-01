/*Напишите программу для вычисления средней ширины всех уровней в
двоичном дереве.*/
#include <iostream>
using namespace std;

struct Node 
{
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int value) 
{
    Node* node = new Node();
    node->data = value;
    node->left = NULL;
    node->right = NULL;
    return node;
}

Node* insert(Node* root, int value) 
{
    if (root == NULL) 
    {
        root = newNode(value);
        return root;
    }
    if (value < root->data) 
    {
        root->left = insert(root->left, value);
    }
    else 
    {
        root->right = insert(root->right, value);
    }
    return root;
}

double avgWidth(Node* root) 
{
    if (root == NULL) 
    {
        return 0;
    }
    Node* queue[100];
    int head = 0;
    int tail = 0;
    queue[tail] = root;
    tail++;
    int sumWidth = 0;
    int countLevels = 0;
    while (head != tail) 
    {
        int levelSize = tail - head;
        sumWidth = sumWidth + levelSize;
        countLevels = countLevels + 1;
        for (int i = 0; i < levelSize; i++) 
        {
            Node* current = queue[head];
            head++;
            if (current->left != NULL) 
            {
                queue[tail] = current->left;
                tail++;
            }
            if (current->right != NULL) 
            {
                queue[tail] = current->right;
                tail++;
            }
        }
    }
    double result = (double)sumWidth / countLevels;
    return result;
}

int main() 
{
    Node* root = NULL;
    int n;
    cout << "Введите количество элементов: ";
    cin >> n;
    cout << "Введите элементы: " << endl;
    for (int i = 0; i < n; i++) 
    {
        int x;
        cin >> x;
        root = insert(root, x);
    }
    double avg = avgWidth(root);
    cout << "Средняя ширина дерева: " << avg << endl;
    return 0;
}