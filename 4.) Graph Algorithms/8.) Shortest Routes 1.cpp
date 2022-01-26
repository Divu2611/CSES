/***************Shortest Routes I***************/
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

ll findMin(vector<ll> arr,bool vs[]){
    ll min = INT_MAX;
    ll ans;

    loop(i,arr.size(),0){
        if(!vs[i] && arr[i]<min){
            min = arr[i];
            ans = i;
        }
    }

    return ans;
}

void shortestPath(ll n,vector<vector<ll>> adj[]){
    ll s = 0;
    vector<ll> ans(n,INT_MAX);
    bool vs[n] = {false};

    ans[s] = 0;

    loop(i,n,0){

        ll u = findMin(ans,vs);
        vs[u] = true;

        loop(j,adj[u].size(),0){
            ll v = adj[u][j][0];
            ll w = adj[u][j][1];

            if(!vs[v] && ans[v]>ans[u]+w){
                ans[v] = ans[u]+w;
            }
        }
    }

    loop(i,ans.size(),0){
        cout<<ans[i]<<" ";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m;    cin>>n>>m;
    vector<vector<ll>> adj[n];

    loop(i,m,0){
        bool alreadyPresent = false;
        ll a,b;    cin>>a>>b;
        ll c;   cin>>c;

        b--;
        a--;

        vector<ll> e1;
        e1.push_back(b);
        e1.push_back(c);
        loop(e,adj[a].size(),0){
            if(adj[a][e][0] == b){
                alreadyPresent = true;
                if(adj[a][e][1] > c){
                    adj[a][e][1] = c;
                }
                break;
            }
        }

        if(!alreadyPresent){
            adj[a].push_back(e1);
        }
    }

    shortestPath(n,adj);
    return 0;
}