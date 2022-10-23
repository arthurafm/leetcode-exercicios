#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string output;
        bool carry = false;
        int a_pos = a.length() - 1, b_pos = b.length() - 1;
        while((a_pos >= 0) && (b_pos >= 0)){
            if(carry){
                if((a[a_pos] == '0') && (b[b_pos] == '0')){
                    carry = false;
                    output.insert(0, "1");
                }
                else{
                    if((a[a_pos] == '1') && (b[b_pos] == '1')){
                        output.insert(0, "1");
                    }
                    else{
                        output.insert(0, "0");
                    }
                }
            }
            else{
                if((a[a_pos] == '1') && (b[b_pos] == '1')){
                    carry = true;
                    output.insert(0, "0");
                }
                else{
                    if((a[a_pos] == '1') || (b[b_pos] == '1')){
                        output.insert(0, "1");
                    }
                    else{
                        output.insert(0, "0");
                    }
                }
            }
            a_pos--;
            b_pos--;
        }
        while(a_pos >= 0){
            if(carry){
                if(a[a_pos] == '0'){
                    output.insert(0, "1");
                    carry = false;
                }
                else{
                    output.insert(0, "0");
                }
            }
            else{
                while(a_pos != -1){
                    output.insert(0, 1, a[a_pos]);
                    a_pos--;
                }
            }
            a_pos--;
        }
        while(b_pos >= 0){
            if(carry){
                if(b[b_pos] == '0'){
                    output.insert(0, "1");
                    carry = false;
                }
                else{
                    output.insert(0, "0");
                }
            }
            else{
                while(b_pos != -1){
                    output.insert(0, 1, b[b_pos]);
                    b_pos--;
                }
            }
            b_pos--;
        }
        if(carry){
            output.insert(0, "1");
        }
        return output;
    }
};

int main() {
    Solution s;
    string a = "11", b = "1";
    cout << s.addBinary(a, b);
    return 0;
}
