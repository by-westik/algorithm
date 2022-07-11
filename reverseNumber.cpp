#include <iostream>

int reverse(int n){
    int res = 0;
    while(n > 0){
        res = res * 10 + n % 10;
        n /= 10;
    };
    return res;
};

int main(){
    int n;
    std::cout << "Введите число" << std::endl;
    std::cin >> n;
    std::cout << "Обратное к данному числу число - " << reverse(n) << std::endl;
    return 0;
};
