#include<iostream>
using namespace std;

int main() {
    int arr[] ={5,3,8,4,6};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < n; i++) {
        for(int j = i + 1;j < n; j++) {
            // int temp = arr[i];
            int temp;
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int k = 0; k < n; k++) {
        cout<< arr[k] << " ";
    }
    return 0;
}