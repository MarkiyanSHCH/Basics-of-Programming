#include <iostream>
using namespace std;

void swap(int arr[], int index_left, int index_right)
{
    int temp;
    temp = arr[index_left];
    arr[index_left] = arr[index_right];
    arr[index_right] = temp;


}

int min_index(int arr[], int n)
{
    int min = arr[0];
    int index = 0;
    for (int i = 0; i < 0; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            index = i;
        }
    }

    return index;


}



int main()
{
    int  input;
    const int n = 4;
    int count = 0;

    cout << "Enter " << n << endl;
    cin >> input;

    int arr[n];
    int max = 0;
    while (count < n)
    {
        arr[count] = input % 10;
        input /= 10;
        count++;

    }

    swap(arr, n - 1, min_index(arr, n));

    count = n - 1;
    while (count >= 0)
    {
        cout << arr[count];
        count--;

    }


}