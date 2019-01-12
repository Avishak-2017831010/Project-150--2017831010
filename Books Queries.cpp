#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr1[1000000],x=0,y=0,f,cnt1=0,cnt2=0,j;
    cin>>n;
    while(n--)
    {
        char a;
        int b;

        cin>>a>>b;
        if(a=='L')
        else if(a=='R') q2.push_back(b);
        else{
            for(int i=0;i<q1.size();i++)
            {
                cnt1++;
                if(b==q1[i]){
                    x=1;
                    break;
                }
            }
            for(j=q2.size()-1;j>=0;j--)
                cnt2++;
            {
                if(b==q2[j])
                {
                    break;
                }
            }
            if(x){
                    int k=(q2.size()+(q1.size()-cnt1));
                cout<<min(cnt1,k)<<endl;
            }
            else{
                    int k=q1.size()+(q2.size()-cnt2);
                    cout<<min(cnt2,k)<<endl;
            }
    }
}
}
