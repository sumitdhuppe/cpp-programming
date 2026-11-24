#include<iostream>
using namespace std;
int main()
{
    float bpr,hra,ta,pf,gs,tos,netpay;
    cout<<"enter the basic pay:-";
    cin>>bpr;
    hra=(bpr*9)/100;
    cout<<"house rent allowance :"<<hra<<endl;
    ta=(bpr*5)/100;
    cout<<"travelling allowance :"<<ta<<endl;
    gs=hra+bpr+ta;
    cout<<"gross salary :"<<gs<<endl;
    pf=(bpr*10)/100;
    cout<<"proffesional tax :"<<pf<<endl;
    tos=gs+pf;
    cout<<"total salary :"<<tos<<endl;
    netpay=gs-pf;
    cout<<"net pay :"<<netpay<<endl;
    return 0;
    
}