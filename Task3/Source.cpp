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

    int MinV = A[0];

    for (int i = 1; i < N; i++)
    {
        if (A[i] < MinV)
        {
            MinV = A[i];
        }
    }
    cout << "��������� ��������� �������� ����� �������� �������i� ����i�������i �: " << MinV << endl;

    int MaxV = A[0];

    for (int i = 1; i < N; i++)
    {
        if (A[i] > MaxV)
        {
            MaxV = A[i];

        }
    }
    cout << "����i����� ��������� �������� ����� �������� �������i� ����i�������i �: " << MaxV << endl;
    int temp = MinV;
    MinV = MaxV;
    MaxV = temp;
    cout << "�i��� ������������ ������� �������� �i�i������ ��: " << MinV << " i ����������� ��: " << MaxV << endl;
    delete[] A;
    return 0;
}