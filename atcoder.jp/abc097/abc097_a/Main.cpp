#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(abs(a-c)<=d)cout<<"Yes"<<endl;
    else if(abs(a-b)<=d&&abs(b-c)<=d)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}