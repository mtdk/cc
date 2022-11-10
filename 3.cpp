#include<iostream>
int main(){
    int sum = 0;
    int val = 0;
    for (val = 0; val <= 10; val++)
    {
        sum += val;
    }
    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
    std::cout << val << std::endl;

    return 0;
}