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
