#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    cin>>n;
    while(n--)
    {
        cnt=0;
        char ch='a';
        //cout<<ch;
        int p,q;
        cin>>p>>q;
        for(int j=0;j<q;j++)
        {
            //cout<<ch;
            for(int k=0;k<(p/q);k++)
            {
               // cout<<"fuck";
               cout<<ch;
                cnt++;
            }
            ch++;
        }
        if(cnt<p)
        {
          for(int x=0;x<abs(p-cnt);x++)
            cout<<'a';
        }
        cout<<endl;
    }
}
