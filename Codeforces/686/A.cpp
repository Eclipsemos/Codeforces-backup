#include <iostream>
using namespace std;

//
int main()
{
    int amount;
    cin>>amount;
    while(amount!=0)
    {
        int size;
        cin>>size;
        if(size%2==0)
        {
            while(size!=0)
            {
                cout<<size<<" ";
                size--;
            } 
            cout<<endl;
        }
        else
        {
            int copy = size;
            while(size!=0)
            {
                if(size==copy/2+1)
                {
                    cout<<1<<" ";
                    size--;
                }
                else if ( size==1)
                {
                    cout << copy/2+1<<" ";
                    size--;
                }
                else
                {
                    cout<<size<<" ";
                    size--;
                }
            }
            cout<<endl;
        }
        
        



        amount--;
    }
    return 0;
}