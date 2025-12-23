#include<iostream>
using namespace std;
int main() {
    // int low = 0;
    int arr[] = {2,0,2,1,1,0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int low = 0;
    int high = n - 1;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        for(int i = 0; i < n; i++) {
            int temp = arr[i];
            if(arr[mid] == arr[i])
            {
                temp = arr[mid];
                arr[mid] = arr[low + 1];
                arr[low + 1] = temp;
                low++;
            }
            for(int k = 0; k < n; k++) {
            cout << arr[k] << " ";
             }
            cout << endl;
            high--;
            for(int j = i; j < n; j++) {
                int min = i;
                if(arr[min] > arr[j])
                {
                    min = j;
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
                else if(arr[min] == arr[j]) {
                    continue;
                }
                // else { arr[min] < arr[j] }
            }
        }
        // for(int k = 0; k < n; k++) {
        //     cout << arr[k] << " ";
        // }
        // cout << endl;
        // high--;
    }
return 0;
}