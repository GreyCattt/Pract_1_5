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

    int MinV = A[0];

    for (int i = 1; i < N; i++)
    {
        if (A[i] < MinV)
        {
            MinV = A[i];

        }
    }
    cout << "The smallest value of the value among the positive elements of the sequence is: " << MinV << endl;
    delete[] A;
    return 0;
}