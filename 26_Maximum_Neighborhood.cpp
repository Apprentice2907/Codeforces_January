// Consider an n×n
//  grid filled with numbers as follows:

// the first row contains integers from 1
//  to n
//  from left to right;
// the second row contains integers from (n+1)
//  to 2n
//  from left to right;
// this pattern continues until the n
// -th row, which contains integers from (n2−n+1)
//  to n2
//  from left to right.
// Let's define the cost of a cell as its value plus the sum of its neighboring cells' values. Two cells are considered neighboring if they share a side.

// Your task is to calculate the maximum cost among all cells in the grid.

// The grid for n=4
//  and the optimal answer for it. The yellow cell has the maximum possible cost; the green cells are its neighbors. The cost of the cell is 15+11+14+16=56
// .
// Input
// The first line contains a single integer t
//  (1≤t≤100
// ) — the number of test cases.

// The only line of each test case contains a single integer n
//  (1≤n≤100
// ).

// Output
// For each test case, print a single integer — the maximum cost among all cells in the grid.

// Example
// InputCopy
// 5
// 1
// 2
// 3
// 4
// 5
// OutputCopy
// 1
// 9
// 29
// 56
// 95
// Note
// In the first example, there is only 1
//  cell with the cost 1
// .

// In the second example, the cell with value 4
//  has the maximum cost: 4+2+3=9
// .

// In the third example, the cell with value 8
//  has the maximum cost: 8+5+7+9=29
// .

// In the fourth example, the cell with value 15
//  has the maximum cost: 15+11+14+16=56
// .

// In the fifth example, the cell with value 19
//  has the maximum cost: 19+14+18+20+24=95
// .







// my solution

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n == 1) {
            cout << 1 << '\n';
        } else if (n == 2) {
            cout << 9 << '\n';
        } else if (n == 3) {
            cout << 29 << '\n';
        } else if (n == 4) {
            cout << 56 << '\n';
        } else {
            cout << 5LL * n * n - 5LL * n - 5 << '\n';
        }
    }
    return 0;
}








// ChatGPT solution

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> grid(n, vector<int>(n));
        int val = 1;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                grid[i][j] = val++;
            }
        }

        int maxCost = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int cost = grid[i][j];

                if (i > 0) cost += grid[i - 1][j];     
                if (i < n - 1) cost += grid[i + 1][j]; 
                if (j > 0) cost += grid[i][j - 1];    
                if (j < n - 1) cost += grid[i][j + 1]; 

                maxCost = max(maxCost, cost);
            }
        }

        cout << maxCost << '\n';
    }

    return 0;
}
