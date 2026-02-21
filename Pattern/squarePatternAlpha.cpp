#include<iostream>
using namespace std;

void paternPrint(int n){
    
    for(int i = 1; i<=n; i++){
        char ch = 'A'; 
        for(int j=1; j<=n; j++ ){
            cout << ch << " ";
            ch++;
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