#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p=1;
    cin>>n;
    while(n>=1)
    {
        if(n!=3){
        for(int i=1; i<=ceil((double)n/(double)2); i++)
        {
            cout<<p<<' ';
        }
        }
        //f(n==1) cout<<"1"<<endl;
        //else if(n==2) cout<<"1"<<' '<<"2";
        if(n==3)
        {
            cout<<p<<' '<<p<<' '<<3*p<<endl;
            break;
        }
        p=p*2;
        n=(n/2);
    }
}

