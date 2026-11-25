#include<iostream>
using namespace std;
int main()
{
    int phy ,ladc,apm,pps,ll;
    float agg,total;
    cout<<"enter the physics marks:-"<<endl;
    cin>>phy;
    cout<<"enter the ladc marks:-"<<endl;
    cin>>ladc;
    cout<<"enter the apm marks:-"<<endl;
    cin>>apm;
    cout<<"enter the pps marks:-"<<endl;
    cin>>pps;
    cout<<"enter the ll marks:-"<<endl;
    cin>>ll;
    total=phy+ladc+pps+apm+ll;
    agg=total/5;

    if(agg>=90)
    {
        cout<<"grade is o"<<endl;
    }
    else if(agg>=80 && agg<90)
    {
         cout<<"grade is a+"<<endl;
    }
    else if(agg>=70 && agg<80)
    {
        cout<<"grade is a"<<endl;
    }
    else
    {
        cout<<"grade is b"<<endl;
    }
    return 0;
}
