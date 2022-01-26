/***************Playlist***************/
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

    int n,ans=0,current=0,j=0;  cin>>n;
    vector<ll> v;
    map<ll,bool> myMap;
    
    loop(i,n,0){
        ll k;   cin>>k;
        v.push_back(k);

        if(myMap[k] == false){
            myMap[k] = true;
            current++;
            ans = max(ans,current);
        }else{
            while(v[j]!=k){
                myMap[v[j]] = false;
                j++;
            }

            current = i-j;
            j++;
        }
    }

    cout<<ans;
    return 0;   
}