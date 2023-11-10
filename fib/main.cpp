#include <iostream>
using namespace std;
int main() {
int N;
cout << "Введите количество итераций N: ";
cin >> N;
int a = 0, b = 1, nextTerm;
cout << "Ряд чисел Фибоначчи до " << N << " итераций: " << std::endl;
for (int i = 1; i < N; ++i) {
if(i % 2 == 1){
cout << a << std::endl;
}
nextTerm = a + b;
a = b;
b = nextTerm;
}
return 0;
}
