// 编写一个程序，它使用3个用户定义的函数（包括main()），
// 输出如下内容
// Three blind mice
// Three blind mice
// See how they run
// See how they run
// 其中一个函数要调用两次，该函数生成前两行，
// 另一个函数也被调用两次，并生成其余输出

#include<iostream>
using namespace std;

void cout_a();
void cout_b();

int main(){

    cout_a();
    cout_a();

    cout_b();
    cout_b();
    return 0;
}

void cout_a(){
    cout << "Three blind mice." << endl;
}

void cout_b(){
    cout << "See how they run." << endl;
}