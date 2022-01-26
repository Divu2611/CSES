/***************Towers***************/
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

    int n;	cin>>n;
    vector<int> x;

    loop(i,n,0){
    	ll k;	cin>>k;
    	int l=0,h=x.size();
    	while(l<h){
    		int m=(l+h)/2;
    		if(x[m]>k)	h=m;
    		else	l=m+1;
    	}
    	if(l==x.size())	x.push_back(k);
    	else	x[l]=k;
    }

    cout<<x.size();
    return 0;	
}