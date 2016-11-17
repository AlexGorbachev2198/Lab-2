long double Sum(double x,int y)
{
    return x+y;
}
long double *Dev(double x,int y)
{
    if (y != 0) {
		long double *buf = new long double;
		*buf = x / y;
		return buf;
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
    double buff;
    int i;
    buff = 1;
    for (i = 1; i <= y; i++) {
        buff *= x;
    }
    return buff;
}
long double Sqrt3(double x)
{
    float xn = 1.0;
    float xn1 = 2.0;
    if ( x != 1 && x != 0 )
    {
        while ( (xn1 - xn) > 0.000001 || (xn1 - xn) < -0.000001  )
        {
            xn = xn1;
            xn1 = (float)(xn + (float)x/xn)/2;
        }
    }
    else if ( x == 1 ) xn1 = 1;
    else if ( x == 0 ) xn1 = 0;
    return xn1;
}
