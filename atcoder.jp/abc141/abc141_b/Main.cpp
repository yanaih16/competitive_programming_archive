#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(i%2==0 && s[i]=='L'){
            cout<<"No"<<endl;
            return 0;
        } 
        else if(i%2==1&&s[i]=='R'){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}
