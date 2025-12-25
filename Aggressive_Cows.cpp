#include<iostream>
using namespace std;

int main() {

    int stall[] = {1,2,8,4,9};
    int C = 3;
    int n = 5;

    int size = sizeof(stall) / sizeof(stall[0]);
    for(int i = 0;i < size; i++) {
        for(int j = i + 1;j < size; j++) {
            if(stall[i] > stall[j]) {
                swap(stall[i] , stall[j]);
            }
        }
    }
    // for(int k = 0; k < size; k++) {
    //     cout << stall[k] << " ";
    // }
    int low = 0;
    int high = stall[size - 1] - stall[0];
    int ans = 0;
    
    while(low <= high) {
        int mid = low + (high - low) / 2;
        int count = 1;
        int lastPos = stall[0];
        for(int i = 0; i < n; i++) {
            if(stall[i] - lastPos >= mid) {
                count++;
                lastPos = stall[i];
            }
        }

            if(count >= C) {
                ans = mid;
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
    cout << ans << " ";
    return 0;
}
