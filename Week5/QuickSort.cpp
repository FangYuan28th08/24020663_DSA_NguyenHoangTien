//Sắp xếp nhanh
//Độ phức tạp tính toán: tốt nhất O(n*log(n)); trung bình O(n*log(n)); tệ nhất: O(n^2)
//Độ phức tạp không gian: O(1)

#include <iostream>
#include <algorithm>
using namespace std;

int partition(int arr[], int l, int r){
    int pivot = arr[r];
    int i = l-1;
    for (int j=l; j <r; j++){
        if (arr[j]<pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[r]);
    return i+1;
}

void quickSort(int arr[], int l, int r){
    if (l<r){
        int p = partition(arr, l, r);
        quickSort(arr, l, p-1);
        quickSort(arr, p+1, r);
    }
}