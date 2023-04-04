#include <iostream>

long long int funcao(long long int estimativa, int x){
    return ((estimativa * estimativa) - x);
}

class Solution {
public:
    int mySqrt(int x) {
        int inicio = 0, fim = x, buffer = 0;
        long long int meio, resultado, aproximacao;
        bool troca = true;
        if((x == 0) || (x == 1)){
            return x;
        }
        while(troca){
            meio = (fim + inicio) / 2;
            resultado = funcao(meio, x);
            if(resultado == 0){
                return meio;
            }
            if(buffer == resultado){
                troca = false;
            }
            else{
                buffer = resultado;
                aproximacao = funcao(inicio, x);
                if(((aproximacao > 0) && (resultado > 0)) || ((aproximacao < 0) && (resultado < 0))){
                    inicio = meio;
                }
                else{
                    fim = meio;
                }
            }
        }
        return meio;
    }
};

using namespace std;

int main() {
    Solution a;
    int x = 8;
    cout << a.mySqrt(x);
    return 0;
}
