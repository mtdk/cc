// 编写一个程序，其main()调用一个用户自定义函数
// （以光年值为参数，并返回对应天文单位的值）。
// 该程序按下面的格式要求用户输入光年的值，并显示结果。
// Enter the number of light years:4.2
// 4.2 light years = 265608 astronomical units.
// 转换公式为：1光年=63240天文单位

#include<iostream>
using namespace std;

double astronomical_units(double);

int main(){

    double lys, ans;
    cout << "Enter the number of light years:";
    cin >> lys;
    ans = astronomical_units(lys);
    cout << lys << " light years = " << ans << " astronomical units." << endl;
    return 0;
}

double astronomical_units(double an){
    double tmp;
    tmp = an * 63240;
    return tmp;
}