/***************Counting Divisors***************/
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

    test{
    	int x,ans=0;	cin>>x;

    	for(int i=1;i*i<=x;i++){
    		if(x%i==0){
    			ans+=2;
    		}
    	}
    
        if(floor(sqrt(x))==ceil(sqrt(x)))
            ans--;
            
    	cout<<ans<<endl;
    }
    return 0;	
}