/***************Static Range Minimum Queries***************/
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

    int n,q;    cin>>n>>q;
    ll x[n];
    vector<vector<ll>> v;
    
    loop(i,n,0){ 
        cin>>x[i];
    }

    loop(i,n,0){
        vector<ll> v1;
        loop(j,n,i){
            if(j!=i && x[j]>v1[v1.size()-1]){
                v1.push_back(v1[v1.size()-1]);
            }else{
                v1.push_back(x[j]);    
            }
        }
        v.push_back(v1);
    }
    
    loop(i,q,0){
        int a,b;    cin>>a>>b;
        cout<<v[a-1][b-a]<<endl;
    }
    return 0;   
}