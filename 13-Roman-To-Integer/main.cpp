#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define I 1
#define V 5
#define X 10
#define L 50
#define C 100
#define D 500
#define M 1000

class Solution {
public:
    int romanToInt(string s) {
        int valor = 0;
        vector<int> array;
        for(unsigned int i = 0; i < s.length(); i++){
            switch(s[i]){
                case 'I':
                    array.push_back(I);
                    break;
                case 'V':
                    array.push_back(V);
                    break;
                case 'X':
                    array.push_back(X);
                    break;
                case 'L':
                    array.push_back(L);
                    break;
                case 'C':
                    array.push_back(C);
                    break;
                case 'D':
                    array.push_back(D);
                    break;
                case 'M':
                    array.push_back(M);
                    break;
                default:
                    break;
            }
        }
        for(unsigned int i = 0; i < array.size() - 1; i++){
            if(array[i] < array[i+1]){
                valor -= array[i];
            }
            else{
                valor += array[i];
            }
        }
        valor += array[array.size() - 1];
        return valor;
    }
};

int main() {
    Solution a;
    string s = "MCMXCIV";
    cout << a.romanToInt(s);
    return 0;
}
