#include <iostream>

void isPalindrome(int n){
    int num = n, rev = 0;
    while(num > 0){
        rev = rev * 10 + num % 10;
        num /= 10;
    };
    if(n == rev){
        std::cout << "Число является палиндромом" << std::endl;
    } else {
        std::cout << "Число не является палиндромом" << std::endl;
    };
};

int main(){
    int n;
    std::cout << "Введите число для проверки" << std::endl;
    std::cin >> n;
    isPalindrome(n);
    return 0;
};
