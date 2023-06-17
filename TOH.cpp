#include <iostream>
#include <conio.h>

using namespace std;
static int count = 0;

void TOH(int n, string A, string B, string C)
{
    if (n > 0)
    {
        TOH(n - 1, A, C, B);
        cout << "Move the disc no. " << n << " from " << A << " to " << C << endl;
        TOH(n - 1, B, A, C);
        count++;
    }
}
int main()
{
    system("cls");
    int n;
    string A = "source", B = "middle", C = "destination";
    cout << "Enter number of discs to play: ";
    cin >> n;
    TOH(n, A, B, C);
    cout << endl
         << "The number of steps involved to solve: " << count;
    getch();
    return 0;
}