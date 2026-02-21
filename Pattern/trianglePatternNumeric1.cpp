#include<iostream>
using namespace std;



void patternPrint(int n){

    for(int i =1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    patternPrint(n);
    return 0;
}