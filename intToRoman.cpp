#include <iostream>
#include <vector>

std::string intToRoman(unsigned int num){
    std::vector<std::pair<unsigned int, const char*>> roman = {
        {1, "I"}, {4, "IV"}, {5, "V"}, {9, "IX"}, {10, "X"},
        {40, "XL"}, {50, "L"}, {90, "XC"}, {100, "C"},
        {400, "CD"}, {500, "D"}, {900, "CM"}, {1000, "M"}
    };
    std::string res;
    for(int i = 12; i >= 0; i--){
        std::pair<unsigned int, const char*> tmp = roman[i];
        while(num >= tmp.first){
            res += tmp.second;
            num -= tmp.first;
        };
    };
    return res;
};


int main(){
    unsigned int num;
    std::cout << "Введите число" << std::endl;
    std::cin >> num;
    std::string str = intToRoman(num);
    std::cout << "Число " << num << " в Римской записи - " << str << std::endl;
    return 0;
};
