/***************Movie Festival***************/
//author: @Divyesh Chhabra

#pragma GCC optimize("Ofast") 

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
const unsigned long int m=1e9+7;
#define loop(i,n,k) for(int i=k;i<n;i++)
#define revl(i,n,k) for(int i=n;i>k;i--)
#define test ll t; cin>>t; while(t--)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,max=1;  cin>>n;
    vector<pair<ll,ll>> t;

    loop(i,n,0){
        ll st,et;
        cin>>st>>et;

        t.push_back(make_pair(et,st));
    }

    sort(t.begin(),t.end());

    ll cm = t[0].first;
    
    loop(i,n,1){
        if(t[i].second >= cm){
            cm = t[i].first;
            max++;
        }
    }
    
    cout<<max;
    return 0;   
}