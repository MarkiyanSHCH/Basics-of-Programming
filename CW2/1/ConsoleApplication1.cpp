//#include <iostream>
//using namespace std;
//
//void remove(int* arr, int& n, int ind) {
//    cout << arr[ind];
//    for (long i = ind; i < n; ++i)
//    {
//        arr[i] = arr[i + 1];
//    }
//    n--;
//}
//
//void printArr(int* arr, int n) {
//    for (int i = 0; i < n; i++) {
//        cout << arr[i] << " ";
//    }
//}
//
//void inputArr(int* arr, int n) {
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//}
//int main()
//{
//    int n, from, to;
//    cout << "Enter size arr: ";
//    cin >> n;
//    int* arr = new int[n];
//    inputArr(arr,n);
//    cout << "Enter i: ";
//    cin >> from;
//    cout << "Enter j: ";
//    cin >> to;
//    
//    cout << "Delete elem: ";
//    for (int i = to; i >= from; i--) {
//        remove(arr, n, i);
//        cout << " ";
//    }
//
//    cout << endl << "Arr: ";
//    printArr(arr, n);
//
//}
