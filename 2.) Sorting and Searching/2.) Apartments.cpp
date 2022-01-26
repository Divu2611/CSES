/***************Apartments***************/
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

    int n,m,c=0;
    ll k;	cin>>n>>m>>k;
    ll a[n],b[m];
    loop(i,n,0)	cin>>a[i];
    loop(i,m,0)	cin>>b[i];

    sort(a,a+n);
    sort(b,b+m);

    int i=0,j=0;

    while(i<n&&j<m){
    	if(abs(b[j]-a[i])<=k){
    		i++;
    		j++;
    		c++;
    	}else if(b[j]>a[i]){
    		i++;
    	}else{
    		j++;
    	}
    }

    cout<<c;
    return 0;	
}