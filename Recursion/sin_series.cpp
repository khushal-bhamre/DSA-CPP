#include<iostream>
using namespace std;

double sin(double x,int n){
    static double p=x,f=1;
    double r;
    static float sign;
    if(n==0){
        return x;
    }
    r=sin(x,n-1);
    p=p*(-x*x);
    f=f*(2*n)*(2*n+1);
    return (r+p/f);
}

int main()
{
    double angle=0.7854;
    int n=50;
    double re=sin(angle,n);
    cout<<re;
}
