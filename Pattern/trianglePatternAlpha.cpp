#include<iostream>
using namespace std;



void patternPrint(int n){
    char ch = 'A';
    for(int i =1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout << ch << " ";
        }
        ch++;
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