#include<iostream>
using namespace std;
double cos(double x,int n){
    static double p=1,f=1;
    double r;
    if(n==0){
        return 1;
    }
    r=cos(x,n-1);
    p=p*(-x*x);
    f=f*(2*n-1)*(2*n);
    return (r+p/f);
}
int main(){
    double r=cos(3.14/4,50);
    cout<<r;
}
