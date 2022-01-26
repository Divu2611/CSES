/***************Word Combinations***************/
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

    vector<string> d;
    string s,temp;   cin>>s;
    size_t v;
    int n;  cin>>n;

    loop(i,n,0){
        cin>>temp;
        
        v = s.find(temp);

        if(temp.length()>s.length() || v!=string::npos){
            continue;
        }

        d.push_back(temp);
    }

    for(auto i:d){
        cout<<i<<endl;
    }
    
    return 0;	
}