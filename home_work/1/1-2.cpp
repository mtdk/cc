// 编写一个程序，它要求用户输入一个以long为单位的距离，
// 然后将它转换为码（1long等于220码）

#include<iostream>
using namespace std;
int anslong(int);

int main(){

    int longa;
    cout << "请输入一个long值:";
    cin >> longa;
    int ans;
    ans = anslong(longa);
    cout << "转换后的值为:" << ans << endl;

    return 0;
}

int anslong(int l){
    //return l * 220;
    int tmp;
    tmp = l * 220;
    return tmp;
}