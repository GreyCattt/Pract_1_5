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
    cout << "����� �i���i��� �������i� � ����i�������i N: ";
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
    cout << "����� �������� P: ";
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
        cout << "����� ��������� " << P << " ����������� �� i�����i " << index << endl;

    }
    else
    {
        cout << "�������� " << P << " �� �������� � ����i�������i. " << endl;

    }

    delete[] A;
    return 0;
}