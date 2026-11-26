#include<iostream>
using namespace std;
int main()
{
    int num, sum=0,rem,temp;
    cout<<"enter the three digit number"<<endl;
    cin>>num;
    temp=num;
    while(num!=0)
        {
            rem=num%10;
            sum=sum+(rem*rem*rem);
            num/=10;
        }
        if(sum==temp)
        {
            cout<<"it is an armstrong number"<<endl;
        }
        else
        {
           cout<<"it is not an armstrong number"<<endl;
        }
        return 0;
}