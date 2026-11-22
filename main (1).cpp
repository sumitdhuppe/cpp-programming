#include<iostream>
using namespace std;
int main()
{
    string you;
    cout<<"welcome to the cpp chat bot"<<endl;
    cout<<"write 'bye' for exist the chat bot"<<endl;
    
    while (true)
        {
            cout<<"\nyou:";
            getline(cin,you);
            if(you=="hello")
            {
                cout<<"bot: hi! how are you?";
                
            }
            else if (you=="how are you")
            {
                cout<<"bot: i'm fine ,thank's!"<<endl;
                
            }
            else if (you=="what is your name" )
            {
                cout<<"bot: my nme is cpp chat bot"<<endl;
                
            }

            else if (you=="bye")
            {
                cout<<"good bye!have a nice day "<<endl;
                break;
            }
            else
            {
                cout<<"sorry ! i don't understand"<<endl;
            }
        }
        return 0;
}
