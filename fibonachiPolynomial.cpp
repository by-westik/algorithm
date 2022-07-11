#include <iostream>
#include <vector>

unsigned long fibonachi(int n){
    if(n == 0)
        return 0;
    std::vector<unsigned long> vec(n + 1);
    vec[0] = 0;
    vec[1] = 1;
    for(int i = 2; i <= n; i++){
        vec[i] = vec[i - 1] + vec[i - 2];
    };
    return vec[n];
};


int main(){
    int n;
    std::cout << "Введите номер числа Фибоначчи" << std::endl;
    std::cin >> n;
    std::cout << n << "-ое число Фибоначии это " << fibonachi(n) << std::endl;
    return 0;
};
