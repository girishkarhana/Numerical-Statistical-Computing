#include<iostream>
#include<cmath>
using namespace std;
double equ(double x){
    return x*log10(x)-1.2;
}
int main(){
    double x,xi,fa,fb,fx,a,b,i,avg;
    cout<<"Enter the first initial point :";
    cin>>a;
    cout<<"Enter the second initial point :";
    cin>>b;
    for(i=0;i<=10;i++){
        fa=equ(a);
        fb=equ(b);
        xi=a-(b-a)/(fb-fa)*fa;
        fx=equ(xi);
        if(fx>0){
            b=xi;
        }
        else if(fx<0){
            a=xi;
        }
       else {
            break;
        }
        cout<<"Iteration"<<i+1<<":"<<xi<<"  a="<<a<<",b="<<b <<" f("<<i+1<<"):"<<fa<<", f("<<i+2<<"):"<<fb<<endl;
    }
}