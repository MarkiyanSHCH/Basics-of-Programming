//#include <iostream>
//using namespace std;
//
//void readMatrix(int** matrix, int n, int m) {
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            cout << "Matrix[" << i + 1 << "][" << j + 1 << "] = ";
//            cin >> matrix[i][j];
//        }
//    }
//}
//
//void outputMatrix(int** matrix, int n, int m) {
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++)
//            cout << matrix[i][j] << '\t';
//        cout << endl;
//    }
//}
//
//
//void deleteMatrix(int** matrix, int n)
//{
//    //clean memory
//    for (int i = 0; i < n; i++)
//    {
//        delete[] matrix[i];
//    }
//
//    delete[] matrix;
//}
//
//void findMaxMin(int** matrix, int n, int m) {
//    int max = 0;
//    int min = 0;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//
//        }
//    }
//}
//
//int colMaxSum(int** matrix, int n, int m)
//{
//    
//    int idx = -1;
//    int maxSum = INT_MIN;
//    for (int i = 0; i < n; i++) {
//        int sum = 0;
//        for (int j = 0; j < m; j++) {
//            sum += matrix[i][j];
//        }
//        if (sum > maxSum) {
//            maxSum = sum;
//            idx = i;
//        }
//    }
//
//    // return result 
//    return idx;
//}
//
//
//
//int colMinSum(int** matrix, int n, int m)
//{
//
//    int idx = -1;
//    int maxSum = INT_MAX;
//    for (int i = 0; i < n; i++) {
//        int sum = 0;
//        for (int j = 0; j < m; j++) {
//            sum += matrix[i][j];
//        }
//        if (sum < maxSum) {
//            maxSum = sum;
//            idx = i;
//        }
//    }
//
//    return idx;
//}
//
//void changeRow(int** matrix, int n, int i, int j) {
//    for (int k = 0; k < n; k++){
//        int t = matrix[i][k];
//        matrix[i][k] = matrix[j][k];
//        matrix[j][k] = t;
//    }
//}
//
//
//int main() {
//    int n;
//    cout << "Enter n: ";
//    cin >> n;
//    int** matrix = new int* [n];
//
//    for (int i = 0; i < n; i++) {
//        matrix[i] = new int[n];
//    }
//
//    readMatrix(matrix, n, n);
//    outputMatrix(matrix, n, n);
//    
//
//    int maxSum = colMaxSum(matrix,n,n);
//    int minSum = colMinSum(matrix, n, n);
//   
//    cout << endl;
//
//    changeRow(matrix, n, maxSum, minSum);
//    outputMatrix(matrix, n, n);
//
//    deleteMatrix(matrix, n);
//    return 0;
//
//}
