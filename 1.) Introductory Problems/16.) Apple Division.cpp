/***************Apple Division***************/
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

ll ans(ll arr[], ll sum, int length){
    
    ll sub_sum, sub_sum2, min = INT_MAX, diff, size = pow(2,length);
    
    loop(i,size,1){
        
        sub_sum = 0;
        
        loop(j,length,0){
            if(i & (1<<j)){
                sub_sum += arr[j];            
            }
        }
        
        sub_sum2 = sum-sub_sum;
        diff = abs(sub_sum - sub_sum2);
        
        if(diff<min){
            min = diff;
        }
    }
    
    return min;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;  cin>>n;
    ll arr[n],sum=0;
    
    loop(i,n,0){
        cin>>arr[i];
        sum+=arr[i];
    }
    
    cout<<ans(arr,sum, n);
    return 0;   
}