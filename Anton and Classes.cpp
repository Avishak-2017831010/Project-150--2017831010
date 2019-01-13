#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    vector<int>v4;
    cin>>n;
    for(int i=0;i<n;i++){
        int j,k;
        cin>>j>>k;
        v2.push_back(k);
        v1.push_back(j);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    cin>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        v3.push_back(x);
        v4.push_back(y);
    }
    sort(v3.begin(),v3.end());
    sort(v4.begin(),v4.end());
   int u=-v2[0]+v3[v3.size()-1];
   int v=-v4[0]+v1[v1.size()-1];
   //cout<<max(u,v)<<endl;
   if(max(u,v)<0){
    cout<<"0";
   }
   else{
    cout<<max(u,v)<<endl;
   }
}
