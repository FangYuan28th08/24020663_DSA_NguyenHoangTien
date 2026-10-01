//Nhap vao 1 day gom N phan tu
//Do phuc tap thuat toan: 0(n)
//Do phuc tap bo nho:0(1)

#include <iostream>
using namespace std;

//Xoa phan tu o vi tri thu k
//Do phuc tap thuat toan: 0(n)
//Do phuc tap bo nho:0(1)
void xoaPhtu(double a[], int &n){
    int k;
    cout << "Vi tri xoa phan tu la: ";
    cin >> k;
    if(k<0 || k>=n){
        cout << "Vi tri khong hop le\n";
        return xoaPhtu(a, n);
    } else{
        for(int i=k; i<n-1; i++){
            a[i]=a[i+1];
        }
        n--;
        for(int i=0; i<n; i++){
        cout << a[i] << " ";
        }
        cout <<"\n";      
    }
}

//Chen phan tu y vao vi tri thu m trong day
//Do phuc tap thuat toan: 0(n)
//Do phuc tap bo nho:0(1)
void chenPhtu(double a[], int &n, float y){
    int m;
    cout << "Vi tri muon chen la: ";
    cin >> m;
    if(m<0 || m>=n){
        cout << "Vi tri chen khong hop le\n";
        return chenPhtu(a, n, y);
    } else{
        a[m]=y;
        for(int i=0; i<n; i++){
            cout << a[i] << " ";
        }
    }
}

//Do phuc tap thuat toan: 0(n)
//Do phuc tap bo nho:0(1)
int main(){
    int n;
    double a[1000];
    cout << "So luong cua day la: ";
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    xoaPhtu(a,n);
    float y;
    cout << "Phan tu muon chen la: ";
    cin >> y;
    chenPhtu(a, n, y);
    return 0;
}