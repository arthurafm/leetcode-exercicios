#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int qnt_casas = 0;
        string s = to_string(x);
        if(x < 0){
            return false;
        }
        if(x == 0){
            return true;
        }
        int inicio = 0, final = s.length() - 1;
        while(inicio < final){
            if(s[inicio] == s[final]){
                inicio++;
                final--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution a;
    int x = 1233321;
    cout << (a.isPalindrome(x) ? "True" : "False");
    return 0;
}
