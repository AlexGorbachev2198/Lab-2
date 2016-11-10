#include <iostream>
#include "calculator.hpp"

using namespace std;

int main() {
    double a;
    unsigned int b;
    cin >> a;
    cin >> b;
    cout << "Cумма " << Sum(a, b)<< endl;
    long double *buf = Dev(a,b);
    if (buf) cout << "Частное: " << *buf << endl;
    else cout << "Ошибка. Ноль в знаменателе" << endl;
    cout << "Умножение " << Mult(a, b)<< endl;
    cout << "Разность " << Sub(a, b)<< endl;
    cout << "Степень " << Pow1(a, b)<< endl;
    cout << "Корень " << Sqrt3(a)<< endl;
    cin >> a;
    return 0;
}
