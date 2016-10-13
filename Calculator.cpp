#include <iostream>

using namespace std;
long double Sum(double x,int y)
{
    return x+y;
}
long double Dev(double x,int y)
{
    if(y!= 0)return x/y;
    else return 0;
}
long double Mult(double x,int y)
{
    return x*y;
}
long double Sub(double x,int y)
{
    return x-y;
}
long double Pow(double x,int y)
{
    if(y<0) return 1/ Pow(x,-y);
    else if(y ==0) return 0;
    else if(y ==1)return x;
    else return x*Pow(x,y-1);
}
long double Sqrt3(double x)
{
    double start = 1;
    int i =1;
    for(i;i< x;i++)
    {
        if (Pow(start,2) == x) break;
        else start = 0.5*(start + x/start);
    }
    return start;
}
int main() {
    double a = 6.25;
    unsigned int b = 4;
    cout << "Cумма " << Sum(a, b)<< endl;
    cout << "Частное " << Dev(a, b)<< endl;
    cout << "Умножение " << Mult(a, b)<< endl;
    cout << "Разность " << Sub(a, b)<< endl;
    cout << "Степень " << Pow(a, b)<< endl;
    cout << "Корень " << Sqrt3(a)<< endl;
    cin >> a;
    return 0;
}