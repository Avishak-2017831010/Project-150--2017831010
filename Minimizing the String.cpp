#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=0;
    string s;
    cin>>n>>s;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]>s[i+1]){
            s.erase(s.begin()+i);
            cout<<s<<endl;
            flag=1;
            break;
        }

    }
    if(!flag){
        for(int i=0;i<s.size()-1;i++)
        cout<<s[i];
    }
}
