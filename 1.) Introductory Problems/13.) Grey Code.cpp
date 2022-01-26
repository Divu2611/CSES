/***************Grey Code***************/
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

    int n;
    cin>>n;

    for(int i=0;i<pow(2,n);i++){
    	int val = i ^ (i>>1);
    	bitset<32> b(val);

        string s=b.to_string();
    	cout<<s.substr(32-n)<<endl;
    }

    return 0;	
}