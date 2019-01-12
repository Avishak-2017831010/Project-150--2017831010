#include<bits/stdc++.h>
using namespace std;
vector<int>arr[100005];
vector<int>vr;
vector<int>vc;
int prime(int n)

{
    bool flag=true;
    if(n==1)
    {
        flag=false;
    }
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            flag=false;
            break;
        }
    }
    if(flag)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int r,c,p,q;
    cin>>r>>c;
    for(int i=0; i<r; i++)
    {

        for(int j=0; j<c; j++)
        {
            cin>>p;
            arr[i].push_back(p);
        }
    }
    for(int i=0;i<r;i++){
            int cntr=0;
        for(int j=0;j<c;j++){
            if(prime(arr[i][j])==1)
            cntr++;
        }
        //cout<<cntr<<endl;
        vr.push_back(c-cntr);
    }
    for(int j=0;j<c;j++)
    {
        int cntc=0;
        for(int i=0;i<r;i++)
        {
            if (prime(arr[i][j])==1)
            {
                cntc++;
            }
        }
        //cout<<cntc<<endl;
        vc.push_back(r-cntc);
    }
    sort(vr.begin(),vr.end());
    sort(vc.begin(),vc.end());
    cout<<min(vr[0],vc[0]);
}


