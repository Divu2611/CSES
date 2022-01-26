/***************Sum of Two Values***************/
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
 
    int n,pos1,pos2,flag=0;
    ll x;	cin>>n>>x;
    ll a[n];
    map<ll,int> m;
 
    loop(i,n,0){
    	cin>>a[i];
    	if(a[i]<x){
    		int num=x-a[i];
    		if(m.count(num)!=0){
    			flag=1;
    			pos1=i+1;
    			pos2=m[num];
    			break;
    		}
    		m[a[i]]=i+1;
    	}
    }
 
    if(flag==0)	cout<<"IMPOSSIBLE";
    else	cout<<pos1<<" "<<pos2;

    return 0;
}
    