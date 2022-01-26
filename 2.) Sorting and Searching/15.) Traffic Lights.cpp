/***************Traffic Lights***************/
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

    int n,x;	cin>>x>>n;
    set<int> lights;
    multiset<int> distance;

    lights.insert(0);
    lights.insert(x);

    distance.insert(x);

    loop(i,n,0){
    	int p;	cin>>p;
    	auto it1 = lights.upper_bound(p), it2=it1;
    	it2--;

		lights.insert(p);

    	distance.erase(distance.find(*it1-*it2));
    	distance.insert(*it1-p);
    	distance.insert(p-*it2);

    	auto ans=distance.end();
    	ans--;

    	cout<<*ans<<" ";
    }
    return 0;
}