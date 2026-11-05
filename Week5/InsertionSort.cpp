//Sắp xếp chèn 
//Độ phức tạp tính toán: tốt nhất O(n); tệ nhất, trung bình O(n^2)
//Độ phức tạp không gian: O(1)

#include <iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for (int i=1; i<n; i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}