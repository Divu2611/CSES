/***************Concert Tickets***************/
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

    int n,m;	cin>>n>>m;
    multiset<ll, greater<ll>> h;
    loop(i,n,0){
    	ll x;   cin>>x;
    	h.insert(x);
    }

    while(m--){
    	ll t;	cin>>t;
    	auto it = h.lower_bound(t);

    	if(it == h.end())	cout<<-1<<endl;
    	else{
    		cout<<*it<<endl;
    		h.erase(it);
    	}
    }
    return 0;	
}