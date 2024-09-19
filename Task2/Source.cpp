#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "uk_UA");

    int N;
    cout << "вкажи кiлькiсть елементiв у послiдовностi N: ";
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
    cout << "Найменшим значенням значення серед додатних елементiв послiдовностi є: " << MinV << endl;
    delete[] A;
    return 0;
}