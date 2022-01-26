/***************Sum of Divisors***************/
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

    ll n,ans=0;   cin>>n;

    loop(i,n+1,1){
        for(int j=1;j*j<=i;j++){
            if(i%j==0){
                if(i/j==j){
                    ans = (ans%m + j%m)%m;
                }else{
                    ans = (ans%m + j%m + (i/j)%m)%m;    
                }
            }
        }
    }

    cout<<ans;

    return 0;   
}