//Problem description
/*
 WAP to merge two sorted array into a single sorted array:
*/


#include<iostream>
using namespace std;


class Solution {
    public:
        void mergeSortedArray(int arr1[], int m, int arr2[], int n, int arr3[]){
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
        }
};


int main(){
    Solution s;
    int m, n;
    cout << "Enter the size of the first array: \n";
    cin >> m;
    int arr1[m];
    cout << "Enter the elements of the first array: \n";
    for(int i = 0; i < m; i++){
        cin >> arr1[i];
    }

    cout << "Enter the size of the second array: \n";
    cin >> n;
    int arr2[n];
    cout << "Enter the elements of the second array: \n";
    for(int i = 0; i < n; i++){
        cin >> arr2[i];
    }


    int arr3[m+n];
    s.mergeSortedArray(arr1, m, arr2, n, arr3);
    cout << "The merged sorted array is: ";
    for(int i = 0; i < (m+n); i++){
        cout << arr3[i] << " ";
    }


    cout << endl;
    return 0;
}

//Time complexity: O(m + n) where m and n are the sizes of the two input arrays. We traverse both arrays once to merge them.
//Space complexity: O(m + n) for the output array that holds the merged result.