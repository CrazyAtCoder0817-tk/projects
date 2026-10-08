#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a; int b;
    cin>>a>>b;
    string s="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string ans="";
    bool is_negative=(a<0);
    if(a==0) cout<<0;
    else{
      while(a != 0){
        ans=s[abs(a%b)]+ans;
        a /= b;
      }
      if(is_negative) ans="-"+ans;
      cout<<ans;
    }
}
