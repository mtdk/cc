// 编写一个程序，让用户输入其年龄，
// 然后显示该年龄包含多少个月
// 公式：1年=12个月

#include<iostream>
using namespace std;

int ans_month(int);

int main(){

    cout << "请输入您的年龄：";
    int ages;
    cin >> ages;
    int ans;
    ans = ans_month(ages);

    cout << "一共是： " << ans << " 个月。" << endl;

    return 0;
}

int ans_month(int a){

    int months;
    months = a * 12;
    return months;
}