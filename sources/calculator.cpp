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
long double Pow1(double x,int y)
{
    if(y<0) return 1/ Pow1(x,-y);
    else if(y ==0) return 0;
    else if(y ==1)return x;
    else return x*Pow1(x,y-1);
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
