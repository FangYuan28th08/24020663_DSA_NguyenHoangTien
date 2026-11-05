//Sắp xếp nổi bọt
//Độ phức tạp tính toán: O(n^2) trong mọi trường hợp
//Độ phức tạp không gian: O(1)

#include <iostream>
#include <algorithm>
using namespace std;

void bubbleSort(int arr[], int n){
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-i-1; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}