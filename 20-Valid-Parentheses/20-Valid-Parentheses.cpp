#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        int chaves = 0, parenteses = 0, colcheias = 0;
        vector<int> ordem;
        for(unsigned int i = 0; i < s.length(); i++){
            if(((chaves < 0) || (parenteses < 0)) || (colcheias < 0)){
                return false;
            }
            switch(s[i]){
                case '(':
                    parenteses++;
                    ordem.push_back(2);
                    break;
                case ')':
                    parenteses--;
                    if((chaves > 0) || (colcheias > 0)){
                        if((ordem[ordem.size() - 1] % 2) != 0){
                            return false;
                        }
                    }
                    if(ordem.size() != 0){
                        ordem.pop_back();
                    }
                    else{
                        return false;
                    }
                    break;
                case '{':
                    chaves++;
                    ordem.push_back(3);
                    break;
                case '}':
                    chaves--;
                    if((parenteses > 0) || (colcheias > 0)){
                        if((ordem[ordem.size() - 1] % 3) != 0){
                            return false;
                        }
                    }
                    if(ordem.size() != 0){
                        ordem.pop_back();
                    }
                    else{
                        return false;
                    }
                    break;
                case '[':
                    colcheias++;
                    ordem.push_back(5);
                    break;
                case ']':
                    colcheias--;
                    if((chaves > 0) || (parenteses > 0)){
                        if((ordem[ordem.size() - 1] % 5) != 0){
                            return false;
                        }
                    }
                    if(ordem.size() != 0){
                        ordem.pop_back();
                    }
                    else{
                        return false;
                    }
                    break;
                default:
                    break;
            }
        }
        if(((chaves == 0) && (parenteses == 0)) && (colcheias == 0)){
            return true;
        }
        else{
            return false;
        }
    }
};

int main() {
    Solution a;
    string s = "([([)]])";
    cout << (a.isValid(s) ? "True" : "False");
    return 0;
}
