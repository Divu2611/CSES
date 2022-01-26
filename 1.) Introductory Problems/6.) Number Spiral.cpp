/***************Number Spiral***************/
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
        // Y - Row
        // X - Column
        ll y,x; cin>>y>>x;
        ll ans;

        if(x>y){
            if(x%2==0){
                ans = (x-1)*(x-1)+y;
            }else{
                ans = x*x-(y-1);
            }
        }else if(y>x){
            if(y%2==0){
                ans = y*y-(x-1);
            }else{
                ans = (y-1)*(y-1)+x;
            }
        }else{
            ans = x*(x-1) + 1;
        }

        cout<<ans<<endl;
    }

    return 0;	
}