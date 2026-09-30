//Viet chương trinh nhap vao mot day so thuc co do dai N.In ra tat ca nhung gia tri lon hon hoac bang gia tri trung binh cua day.
//Do phuc tap thuat toan: 0()
//Do phuc tap bo nho:0()

#include <iostream>
using namespace std;

int main(){
    float n;
    float tong=0;
    cout << "day so thuc co do dai la: ";
    cin >> n;
    float a[1000];
    for(int i=0; i<n; i++){
        cin >> a[i];
        tong+=a[i];
    }
    float gttb=tong/n;
    for(int i=0; i<n; i++){
        if(a[i]>=gttb){
            cout << a[i] << " ";
        }
    }
    return 0;
}