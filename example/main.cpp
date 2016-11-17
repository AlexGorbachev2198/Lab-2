#include <iostream>
#include "calculator.hpp"

using namespace std;

int main() {
    double a;
    unsigned int b;
    cin >> a;
    cin >> b;
    if(cin){
    cout << "Cумма " << Sum(a, b)<< endl;
    long double *buf = Dev(a,b);
    if (buf) cout << "Частное: " << *buf << endl;
    else cout << "На ноль делить нельзя." << endl;
    cout << "Умножение " << Mult(a, b)<< endl;
    cout << "Разность " << Sub(a, b)<< endl;
    cout << "Степень " << Pow1(a, b)<< endl;
    cout << "Корень " << Sqrt3(a)<< endl;
    }
    else cout << "Неправильный ввод";
    system("pause");
}
