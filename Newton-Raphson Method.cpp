#include<iostream>
#include<cmath>
using namespace std;
double equ(double x){
    return x*x*x*x-x-10;
}
double dereq(double x){
    return 4*x*x*x-1;
}
int main(){
    double xr,xi,fa,fda,fx,a,i,avg,p;
    cout<<"Enter the first initial point :";
    cin>>a;
    cout<<"decimal place :";
    cin>>p;
    cout<<"Initial points : "<<a<<endl;
    for(i=0;i<=3;i++){
        fa=round(equ(a)*pow(10,p))/pow(10,p);
        fda=round(dereq(a)*pow(10,p))/pow(10,p);
        xr=a-fa/fda;
        xi=round(xr*pow(10,p))/pow(10,p);
        fx=equ(xi);
        a=xi;
        cout<<"Iteration"<<i+1<<":"<<xi<<"  f(x)="<<fa<<" f("<<i+1<<"):"<<fda<<endl;
    }
}