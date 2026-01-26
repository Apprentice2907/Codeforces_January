#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        // If n is odd, no configuration is possible
        if (n % 2 != 0) {
            cout << 0 << "\n";
        } else {
            // Number of valid (chickens, cows) pairs
            cout << (n / 4) + 1 << "\n";
        }
    }
 
    return 0;
}