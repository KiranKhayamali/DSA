#include <iostream>
#include <conio.h>
using namespace std;
#define MAX 10
int main()
{
    system("cls");
    int choice = 1, rear = -1, front = -1, data;
    char queue[MAX];
    while (choice != 0)
    {
        cout << endl
             << "Enter operation to perform: " << endl
             << "1. Linear Enqueue" << endl
             << "2. Linear Dequeue" << endl
             << "3. Display" << endl
             << "Enter Choice:";
        cin >> choice;
        switch (choice)
        {
        case 1: // enqueue
            if (rear == MAX - 1)
            {
                cout << "Queue is full" << endl;
            }
            else
            {
                cout << "Enter Data: ";
                cin >> data;
                rear += 1;
                if (front == -1)
                {
                    front = 0;
                }
                queue[rear] = data;
            }
            break;
        case 2: // dequeue
            if (front == -1)
            {
                cout << endl
                     << "The Queue is Empty" << endl;
                getch();
                break;
            }
            else
            {
                data = queue[front];
                cout << "The Dequeued Data is: " << data << endl;
                front += 1;
            }
            if (front > rear)
            {
                front = -1;
                rear = -1;
            }
            break;
        case 3: //  display
            if (front == -1)
            {
                cout << endl
                     << "The Queue is Empty" << endl;
                getch();
                break;
            }
            else
            {
                while (front <= rear)
                {
                    data = queue[front];
                    cout << "The Dequeued Data is: " << data << endl;
                    front += 1;
                }
            }
            if (front > rear)
            {
                front = -1;
                rear = -1;
            }
            break;
        case 0:
            choice = 0;
            break;
        default:
            cout << "Invalid Choice" << endl;
            getch();
            break;
        }
    }
    getch();
    return 0;
}
