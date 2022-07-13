#include <iostream>
#include <vector>

void print(std::vector <int> &vec){
    for(int i = 0; i < vec.size(); i++){
        std::cout << "[" << vec[i] << "] ";
    };
    std::cout << std::endl;
};

void bubbleSort(std::vector <int> &vec){
    for(int i = 0; i < vec.size() - 1; ++i){
        for(int j = 0; j < vec.size() - i - 1; ++j){
            if(vec[j] > vec[j + 1]){
                std::swap(vec[j], vec[j + 1]);
            };
        };
    };
};

void jumpBinarySearch(std::vector <int> &vec, int num){
        int k = 0;
        for(int i = vec.size() / 2; i >= 1; i /= 2){
                while(k + i < vec.size() && vec[k + i] <= num){
                        k += i;
                };
        };
        if(vec[k] == num){
                std::cout << "YES" << std::endl;
        } else {
                std::cout << "NO" << std::endl;
        };
};


int main(){
        int input;
        std::vector <int> vec;
        while(std::cin >> input){
                vec.push_back(input);
        };
        print(vec);
        bubbleSort(vec);
        print(vec);
        jumpBinarySearch(vec, 4);
        return 0;
};
