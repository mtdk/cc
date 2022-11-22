#include <iostream>

// std::string global_str;
// int global_int;
int i = 42;


int main()
{
    int i, &ri = i;
    i = 5;
    ri = 10;
    std::cout << i << " " << ri << std::endl;
    return 0;
}