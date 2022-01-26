/***************Tower of Hanoi***************/
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

void algorithm(int src,int dest,int help,int disk){
    if(disk == 1){
        cout<<src<<" "<<dest<<endl;
        return;
    }
    algorithm(src,help,dest,disk-1);
    algorithm(src,dest,help,1);
    algorithm(help,dest,src,disk-1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;  cin>>n;
    ll ans = pow(2,n)-1;

    cout<<ans<<endl;
    algorithm(1,3,2,n);

    return 0;   
}