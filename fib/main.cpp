#include <iostream>
using namespace std;

int fibbonachi(int N){
    int ticker = 0;
    int a = 0, b = 1, nextTerm;
    cout << "Ryad numbers of Fibbonachi do " << N << " iterations: "<< std::endl;

    for(int i = 1; i <= N; i++){
        if(ticker == 3){
            cout << a << std::endl;
            ticker = 0;
        }
        nextTerm = a + b;
        a = b;
        b = nextTerm;
        ticker++;
    }
    return 0;
}

int main() {
    int iteration = 0;
    cout << "Input number iterations N: ";
    cin >> iteration;
    fibbonachi(iteration);
}
