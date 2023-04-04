#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int startLastWord = 0;
        for(unsigned int i = 0; i < s.length(); i++){
            if(((s[i] == ' ') && (s[i+1] != '\0')) && (s[i+1] != ' ')){
                startLastWord = i + 1;
            }
        }
        for(unsigned int i = startLastWord; i < s.length(); i++){
            if(s[i] == ' '){
                return (i - startLastWord);
            }
        }
        return (s.length() - startLastWord);
    }
};

int main() {
    Solution a;
    string s = "   fly me   to   the moon  ";
    cout << a.lengthOfLastWord(s);
    return 0;
}
