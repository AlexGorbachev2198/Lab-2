long double Sum(double x,int y)
{
    return x+y;
}
long double *Dev(double x,int y)
{
    if (y != 0){
        long double buf = x/y;
        long double *p = &buf;
        return p;
    }
    else return nullptr;
 }
long double Mult(double x,int y)
{
    return x*y;
}
long double Sub(double x,int y)
{
    return x-y;
}
long double Pow1(double x,int y)
{
    float buff;
    int i;
    buff = 1;
    for (i = 1; i <= y; i++) {
        buff *= x;
    }
    return buff;
}
long double Sqrt3(double x)
{
    double pu =1; double y;
    int i=0;
    while(1) {
        y=pu;
        pu=0.5*(pu+x/pu);
        if (pu>=y) {
            i++; if (i>1);
            break;
        }
    }
    return(pu);
}
