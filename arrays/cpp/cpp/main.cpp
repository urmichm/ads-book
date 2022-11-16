//
//  main.cpp
//  cpp
//
//  Created by Michael Urmich
//

#include <iostream>
#include <array>

int my_search(const int arr[], const unsigned int N, const int a);
bool two_sum(const int arr[], const unsigned int N, const int target);
int addition(const int a, const int b);
void min_max(const int arr[], const unsigned int N);

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

void min_max(const int arr[], const unsigned int N){
    int min = INT_MAX;
    int max = INT_MIN;
    for(unsigned int i=0; i < N; i++){
        if(arr[i] > max)
            max = arr[i];
    }
    for(unsigned int i=0; i < N; i++){
        if(arr[i] < min)
            min = arr[i];
    }
    std::cout << "min: " << min << '\n';
    std::cout << "max: " << max << std::endl;
    return;
}

int addition(const int a, const int b){
    int result = a + b;
    return result;
}

bool two_sum(const int arr[], const unsigned int N, const int target){
    for(unsigned int i=0; i < N; i++){
        for(unsigned int j=i+1; j < N; j++){
            int sum = arr[i] + arr[j];
            if(target == sum){
                return true;
            }
        }
    }
    return false;
}

int my_search(const int arr[], const unsigned int N, const int a){
    for(unsigned int i=0; i < N; i++){
        if(arr[i] == a){
            return i;
        }
    }
    return -1;
}
