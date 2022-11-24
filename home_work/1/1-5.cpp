// 编写一个程序，其中main()调用一个用户自定义的函数
// （以摄氏温度值为参数，并返回相应的华氏温度值）。
// 该程序按下面的格式要求用户输入摄氏温度值，并显示结果：
// Please enter a Celsius value:20
// 20 degrees Celsius is 68 degrees Fahrenheit.
// 转换公式为：华氏温度=1.8×摄氏温度+32.0

#include<iostream>
using namespace std;

double celsius(double);

int main(){

    cout << "Please enter a Celsius value:";
    double ce, de;
    cin >> ce;
    de = celsius(ce);
    cout << ce << " degrees Celsius is " << de << " degrees Fahrenheit." << endl;
    return 0;
}

double celsius(double c){
    double tmp;
    tmp = 1.8 * c + 32.0;
    return tmp;
}