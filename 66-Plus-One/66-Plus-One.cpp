#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int posicao = digits.size() - 1;
        while(posicao >= 0){
            digits[posicao]++;
            if(digits[posicao] < 10){
                break;
            }
            else{
                digits[posicao] = 0;
                posicao--;
            }
        }
        if(digits[0] == 0){
            digits[0] = 1;
            digits.push_back(0);
        }
        return digits;
    }
};

int main() {
    Solution a;
    vector<int> digits = {9, 9, 9};
    a.plusOne(digits);
    return 0;
}
