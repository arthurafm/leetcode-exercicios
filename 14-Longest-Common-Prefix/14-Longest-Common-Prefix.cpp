#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = "";
        int menorStringSize = 200;
        for(unsigned int i = 0; i < strs.size(); i++){
            if(strs[i].length() < menorStringSize){
                menorStringSize = strs[i].length();
            }
        }
        for(unsigned int i = 0; i < menorStringSize; i++){
            for(unsigned int j = 0; j < strs.size(); j++){
                if(strs[0][i] != strs[j][i]){
                    return s;
                }
            }
            s.push_back(strs[0][i]);
        }
        return s;
    }
};

int main() {
    Solution a;
    vector<string> strs;
    strs.push_back("dog");
    strs.push_back("racecar");
    strs.push_back("car");
    cout << a.longestCommonPrefix(strs);
    return 0;
}
