//Mang 2 chieu co kich thuoc N*M. 
//Do phuc tap thuat toan: 0(n*m)
//Do phuc tap bo nho:0(1)

#include <iostream>
using namespace std;

//Tinh tong cac phan tu trong mang
//Do phuc tap thuat toan: 0(n*m)
//Do phuc tap bo nho:0(1)
void tinhtong(double a[][100], int &n, int &m){
    double tong =0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            tong+=a[i][j];
        }
    }
    cout << "Tong cac phan tu la: " << tong << "\n";
}

//Xoa dong thu i trong mang 2 chieu
//Do phuc tap thuat toan: 0(n*m)
//Do phuc tap bo nho:0(1)
void xoadong(double a[][100], int &n, int &m){
    int i;
    cout << "Dong muon xoa la: ";
    cin >>i;
    if(i<0 || i>=n){
        cout << "Khong hop le\n";
        return xoadong(a, n, m);
    } else{
        for(int h=i; h<n-1; h++){
            for(int k=0; k<m; k++){
                a[h][k]=a[h+1][k];
            }
        }
    }
    n--;
    for(int h=0; h<n; h++){
        for(int k=0; k<m; k++){
            cout << a[h][k] <<" ";
        }
        cout << "\n";
    }
}

//Do phuc tap thuat toan: 0(n*m)
//Do phuc tap bo nho:0(1)
int main(){
    int m,n;
    cout << "So hang la: ";
    cin >> n;
    cout << "So cot la: ";
    cin >> m;
    double a[100][100];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >>a[i][j];
        }
    }
    tinhtong(a, n, m);
    xoadong(a, n, m);
    return 0;
}