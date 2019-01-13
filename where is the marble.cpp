#include<bits/stdc++.h>
using namespace std;
int main()
{
        vector<int>v;

        int n,q,cnt=0,flag=0,d;
        cin>>n>>q;
        while(n!=0 && q!=0){
        cnt++;
        cout<<"CASE# "<<cnt<<":"<<endl;
        for(int i=0;i<n;i++){
            int j;
            cin>>j;
            v.push_back(j);
        }
        sort(v.begin(),v.end());
        for(int a=0;a<q;a++){
            int b;
            cin>>b;
            for(int c=0;c<v.size();c++){
                if(b==v[c]){
                flag=1;
                d=c+1;
                cout<<d<<endl;
                break;
                }
            }
            if(flag==0){
               // cout<<b<<' '<<"not found"<<endl;
            }

        }

     v.clear();
        flag=0;
}

}
