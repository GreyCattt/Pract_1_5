#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{

    int N;
    cout << "Specify the number of elements in the sequence N:";
    cin >> N;
 
    std::vector<int> arr(N);//create a sequence of values

    srand(time(0));

    for (int i = 0; i < N; i++) { //Randomly filling with values
        arr[i] = rand() % 100;
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    int minIndex = 0, maxIndex = 0;//Creating variables for the minimum and maximum values

    for (int i = 1; i < N; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    cout << "The smallest value in the sequence is: " << arr[minIndex] << endl;
    cout << "The greatest value in the sequence is: " << arr[maxIndex] << endl;
    std::swap(arr[minIndex], arr[maxIndex]);//change the values ??by places in the sequence
    
    cout << "After swapping, the sequence is: ";
    for (int i = 0; i < N; i++) {
        std::cout << arr[i] << " ";
    }
    cout << endl;
    std::cout << std::endl;
    return 0;
}