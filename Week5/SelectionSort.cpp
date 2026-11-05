//Sắp xếp lựa chọn
//Độ phức tạp tính toán:O(n^2) trong mọi trường hợp
//Độ phức tạp không gian:O(1)

#include <iostream>
#include <algorithm>
using namespace std;

void selectionSort(int arr[], int n){
    for (int i=0; i<n-1; i++){
        int min_index = i; //Danh dau vi tri min ban dau
        for (int j=i+1; j<n; j++){
            if (arr[j] < arr[min_index]){
                min_index = j;
            }
        } //Tim vi tri min
        if(min_index != i){
            swap(arr[min_index], arr[i]); //Hoan doi vi tri min voi vi tri hien tại
        }
    }
}