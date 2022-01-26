/***************Static Range Sum Queries***************/
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

    int n,q;	cin>>n>>q;
    ll x[n],s[n],sum=0;

    loop(i,n,0){
    	cin>>x[i];
    	sum += x[i];
    	s[i] = sum;
    }

    loop(i,q,0){
    	int a,b;	cin>>a>>b;
    	cout<<s[b-1]-s[a-1]+x[a-1]<<endl;
    }
    return 0;
}