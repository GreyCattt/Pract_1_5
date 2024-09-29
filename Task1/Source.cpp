/**
* Done by:
* Student Name: Ivan Rudiy
* Student Group: 123
*Pract 1.5
*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    int N;
    cout << "Specify the number of elements in the sequence N: ";
    cin >> N;

    int* A = new int[N];

    srand(time(0));

    for (int i = 0; i < N; i++)
    {
        A[i] = rand() % 100;
        cout << A[i] << " ";

    }
    cout << endl;
    int P;
    cout << "Enter the value of P:";
    cin >> P;

    int index = -1;
    for (int i = 0; i < N; i++)
    {
        if (A[i] == P)
        {
            index = i;
            break;

        }


    }
    if (index != -1)
    {
        cout << "First entry " << P << " is on the index " << index << endl;

    }
    else
    {
        cout << "Value " << P << "not found in sequence. " << endl;

    }

    delete[] A;
    return 0;
}