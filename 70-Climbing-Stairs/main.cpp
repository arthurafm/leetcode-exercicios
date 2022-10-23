#include <iostream>

class Solution {
public:
    int climbStairs(int n) {
        if(n <= 2){
            return n;
        }
        int arranjo[n];
        arranjo[0] = 1;
        arranjo[1] = 1;
        for(unsigned int i = 2; i < n; i++){
            arranjo[i] = arranjo[i - 1] + arranjo[i - 2];
        }
        return (arranjo[n - 1] + arranjo[n - 2]);
    }
};

using namespace std;

int main() {
    Solution a;
    int n = 1;
    cout << a.climbStairs(n);
    return 0;
}
