#include <iostream>

unsigned long fibonachi(unsigned long n){
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return fibonachi(n - 1) + fibonachi(n - 2);
};

int main(){
    int n;
    std::cout << "Введите номер числа Фибоначчи" << std::endl;
    std::cin >> n;
    std::cout << n << "-ое число Фибоначии это " << fibonachi(n) << std::endl;
    return 0;
};
