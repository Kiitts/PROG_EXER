#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int f, e, a, b, c, d, x1, x2;
    a=2;
    b=4;
    c=6;
    f=4*a*c;
    e=b*b;
    d=sqrt((b*b)-(4*(a*c)));
    x1=(-b+d)/(2*a);
    x2=(-b-d)/(2*a);
    cout<<"the value of (x1,x2) is ("<<x1<<","<<x2<<")";
    return 0;
}
