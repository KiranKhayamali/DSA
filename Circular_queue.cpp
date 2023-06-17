#include <iostream>
#include <conio.h>
#define MAX 10

using namespace std;

int main()
{
    system("cls");
    int front = -1, rear = -1, choice = 1, queue[MAX], data;
    while (choice != 0)
    {
        cout << endl
             << "Enter Choice to Perform:" << endl
             << "1. Circular Enqueue" << endl
             << "2. Circular Dequeue" << endl
             << "3. Display" << endl
             << "Enter Choice:";
        cin >> choice;
        switch (choice)
        {
        case 1:
            if (front == 0 && rear == MAX - 1 || front == rear + 1)
            {
                cout << endl
                     << "Queue is full" << endl;
                break;
            }
            else
            {
                cout << "Enter Data: ";
                cin >> data;
                rear = (rear + 1) % MAX;
                queue[rear] = data;
                if (front == -1)
                {
                    front = 0;
                }
            }
            break;
        case 2:
            if (front == -1)
            {
                cout << "Queue is Empty" << endl;
            }
            else if (front == rear)
            {
                data = queue[front];
                cout << "The Dequeued Data is: " << data << endl;
                front = -1;
                rear = -1;
            }
            else
            {
                data = queue[front];
                cout << "The Dequeued Data is: " << data << endl;
                front = (front + 1) % MAX;
            }
            break;
        case 3:
            if (front == -1)
            {
                cout << "Queue is Empty" << endl;
            }
            else if (front == rear)
            {
                data = queue[front];
                cout << "The Dequeued Data is: " << data << endl;
                front = -1;
                rear = -1;
            }
            else
            {
                while (front != rear)
                {
                    data = queue[front];
                    cout << "The Dequeued Data is: " << data << endl;
                    front = (front + 1) % MAX;
                }
            }
            break;
        case 0:
            choice = 0;
            break;
        default:
            cout << endl
                 << "Invalid Choice";
            getch();
            break;
        }
    }
    getch();
    return 0;
}
