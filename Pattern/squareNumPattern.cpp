#include<iostream>
using namespace std;

void paternPrint(int n){
    int num = 1;
    for(int i = 1; i<=n; i++){
        for(int j=1; j<=n; j++ ){
            cout << num << " ";
            num++;
        }
        cout << "\n";
    }

}


int main(){

    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    paternPrint(n);
    return 0;
}