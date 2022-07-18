#include <iostream>
#include <vector>
#include <algorithm>

void merge(std::vector <int> &vec, int start, int end, int middle);

void print(std::vector <int> &vec){
        for(int i = 0; i < vec.size(); i++){
                std::cout << "[" << vec[i] << "] ";
        };
        std::cout << std::endl;
};

void mergeSort(std::vector <int> &vec, int start, int end){
        if(start < end){
                int middle  = (start + end) / 2;
                mergeSort(vec, start, middle);
                mergeSort(vec, middle + 1, end);
                merge(vec, start, end, middle);
        };
};

void merge(std::vector <int> &vec, int start, int end, int middle){
        int i = start, k = start, j = middle + 1;
        std::vector <int> tmp(vec.size());
        while(i <= middle && j <= end){
                if(vec[i] < vec[j]){
                        tmp[k] = vec[i];
                        k++;
                        i++;
                } else {
                        tmp[k] = vec[j];
                        j++;
                        k++;
                };
        };
        while(i <= middle){
                tmp[k] = vec[i];
                k++;
                i++;
        };
        while(j <= end){
                tmp[k] = vec[j];
                j++;
                k++;
        };
        for(i = start; i < k; i++){
                vec[i] = tmp[i];
        };
}

int main(){
        int input;
        std::vector <int> vec;
        while(std::cin >> input){
                vec.push_back(input);
        };
        print(vec);
        mergeSort(vec, 0, vec.size() - 1);
        print(vec);
        return 0;
};
Footer
© 2022 GitHub, Inc.
Footer navigation
Terms
Privacy
