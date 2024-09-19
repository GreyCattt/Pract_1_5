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
    int P;
    cout << "Вкажи значення P: ";
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
        cout << "Перше входження " << P << " знаходиться на iндексi " << index << endl;

    }
    else
    {
        cout << "Значення " << P << " не знайдено в послiдовностi. " << endl;

    }

    delete[] A;
    return 0;
}