#include <iostream>
using namespace std;

int main() {
    int stalls[] = {1, 2, 8, 4, 9};
    int Cows = 3;
    int totalStalls = 5;

    // Sorting the stalls
    for(int i = 0; i < totalStalls - 1; i++) {
        for(int j = i + 1; j < totalStalls; j++) {
            if(stalls[i] > stalls[j]) {
                swap(stalls[i], stalls[j]);
            }
        }
    }

    int low = 0;
    int high = stalls[totalStalls - 1] - stalls[0];
    int ans = 0;

    while(low <= high) {
        int mid = low + (high - low) / 2;
        int count = 1;
        int lastPos = stalls[0];

        for(int i = 1; i < totalStalls; i++) {
            if(stalls[i] - lastPos >= mid) {
                count++;
                lastPos = stalls[i];
            }
        }

        if(count >= Cows) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << ans << endl;
    return 0;
}

