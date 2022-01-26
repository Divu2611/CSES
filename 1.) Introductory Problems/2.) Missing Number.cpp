/***************Missing Number***************/
//author - @Divyesh Chhabra

#pragma GCC optimize("Ofast") 

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const unsigned long int m=1e9+7;
#define loop(i,n,k) for(int i=k;i<n;i++)
#define revl(i,n,k) for(int i=n;i>k;i--)
#define test ll t; cin>>t; while(t--)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;	cin>>n;
    int a[n-1];
    int l=0,r=n-2,m=(l+r)/2;
    loop(i,n-1,0)	cin>>a[i];
    
    sort(a,a+(n-1));

    while(l+1<r){
    	if(a[m]>m+1){
    		r=m;
    	}else{
    		l=m;
    	}
    	m = (l+r)/2;
    }

    if(a[l]>l+1){
        cout<<a[l]-1;
    }else if(a[r]>r+1){
        cout<<a[l]+1;
    }else{
        cout<<a[r]+1;
    }
    return 0;	
}