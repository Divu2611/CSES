/***************Subordinates***************/
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

    int employees;  cin>>employees;
    int subordinates[employees-1];
    Map<int,int> map;

    loop(i,employees-1,0){
        cin>>subordinates[i];
    }


    return 0;
}