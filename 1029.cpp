/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n = costs.size() / 2;

        sort(costs.begin(), costs.end(), [](vector<int>& a, vector<int>& b) {
            return (a[0] - a[1]) < (b[0] - b[1]);
        });

        int total = 0;

        // 前 n 個去 A
        for (int i = 0; i < n; i++) {
            total += costs[i][0];
        }

        // 後 n 個去 B
        for (int i = n; i < 2 * n; i++) {
            total += costs[i][1];
        }

        return total;
    }
};