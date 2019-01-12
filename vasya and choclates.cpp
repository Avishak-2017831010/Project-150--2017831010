#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int s,a,b,c,t;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>s>>a>>b>>c;
        double k=(c*a);
        double j=(a+b);
        long long int l=(j/k)*s;

        cout<<(l)<<endl;
    }
}
