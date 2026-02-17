//Problem description
/*
 WAP to merge two sorted array into a single sorted array:
*/


#include<iostream>
using namespace std;

int main(){
    cout << "Enter the size of first array: ";
    int m;
    cin >> m;
    cout << "Enter the size of second array: ";
    int n;
    cin >> n;
    int arr1[m], arr2[n], arr3[m+n];

    cout << "Enter elements of first array(Sorted): ";
    for(int i = 0; i < m; i++){
        cin >> arr1[i];
    }
    cout << "Enter elements of second array(Sorted): ";
    for(int i = 0; i < n; i++){
        cin >> arr2[i];
    }

    
    int i = 0, j = 0, k = 0;
    while(i < m && j < n){
        if(arr1[i] < arr2[j]){
            arr3[k] = arr1[i];  
            k++;
            i++;
        }
        else if(arr1[i] > arr2[j]){
            arr3[k] = arr2[j];
            k++;
            j++;
        }
        else{
            arr3[k] = arr1[i];
            k++;
            arr3[k] = arr2[j];
            k++;
            i++;
            j++;
        }
    }
    while(i < m){
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    while(j < n){
        arr3[k] = arr2[j];
        k++;
        j++;
    }
    for(int i = 0; i < m + n; i++){
        cout << arr3[i] << " ";
    }
}