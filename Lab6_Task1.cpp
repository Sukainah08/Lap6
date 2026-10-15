// Task 1: Sort three numbers (ascending) using a void function
#include <iostream>
using namespace std;

void ascSort(int num1, int num2, int num3)
{
    int temp;

    if (num1 > num2) { temp = num1; num1 = num2; num2 = temp; }
    if (num2 > num3) { temp = num2; num2 = num3; num3 = temp; }
    if (num1 > num2) { temp = num1; num1 = num2; num2 = temp; }

    cout << num1 << " " << num2 << " " << num3 << endl;
}

int main()
{
    int a, b, c, choice;

    do
    {
        cout << "Enter three integer numbers:" << endl;
        cin >> a >> b >> c;

        ascSort(a, b, c);

        cout << "Do you want to try other three numbers (Negative value to Exit) ";
        cin >> choice;
    } while (choice >= 0);

    return 0;
}
