#include <iostream>
#include <algorithm>

void print(std::vector <int> &vec){
    for(int i = 0; i < vec.size(); i++){
        std::cout << "[" << vec[i] << "] ";
    };
    std::cout << std::endl;
};

void bubbleSort(std::vector <int> &vec){
    for(int i = 0; i < vec.size() - 1; ++i){
        for(int j = 0; j < vec.size() - i - 1; ++j){
            if(vec[j] >= vec[j + 1]){
                std::swap(vec[j], vec[j + 1]);
            };
        };
    };
};

void binarySearch(std::vector <int> &vec, int start, int end, int num){
        if(end >= start){
                int middle = start + (end - start) / 2;
                if(vec[middle] > num){
                        binarySearch(vec, start, middle - 1, num);
                } else if (vec[middle] < num){
                        binarySearch(vec, middle + 1, end, num);
                } else {
                        std::cout << "YES" << std::endl;
                        return;
                };
        } else {
                std::cout << "NO" << std::endl;
                return;
        }
};


void recurBinarySearch(std::vector <int> &vec, int start, int end, int num){
        while(start <= end){
                int middle = (start + end) / 2;
                if(vec[middle] == num){
                        std::cout << "YES" << std::endl;
                        return;
                } else if (vec[middle] < num){
                        start = middle + 1;
                } else {
                        end = middle - 1;
                };
        };
        std::cout << "NO" << std::endl;
};

int main(){
        int input;
        std::vector <int> vec;
        while(std::cin >> input){
                vec.push_back(input);
        };
        bubbleSort(vec);
        print(vec);
        binarySearch(vec, 0, vec.size(), 4);
        recurBinarySearch(vec, 0, vec.size(), 4);
};
