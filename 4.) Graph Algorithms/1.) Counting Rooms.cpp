/***************Counting Rooms***************/
//author: @Divyesh Chhabra

#pragma GCC optimize("Ofast")

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
const unsigned long int max=1e9+7;
#define loop(i,n,k) for(int i=k;i<n;i++)
#define revl(i,n,k) for(int i=n;i>k;i--)
#define test ll t; cin>>t; while(t--)

int n,m;
char maps[1001][1001];
int visited[1001][1001];
int neighbourX[4] = {0,0,1,-1};
int neighbourY[4] = {1,-1,0,0};

bool isValid(int x,int y){
    if(x>=n || y>=m || x<0 || y<0 || maps[x][y]=='#')    return false;
    return true;
}

void DFS(int x,int y){
    visited[x][y] = 1;
    loop(i,4,0){
        int newX = x + neighbourX[i];
        int newY = y + neighbourY[i];
        if(isValid(newX,newY) && !visited[newX][newY]){
            DFS(newX,newY);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>m;
    int answer=0;

    loop(i,n,0){
        loop(j,m,0){
            cin>>maps[i][j];
            visited[i][j] = 0;
        }
    }

    loop(i,n,0){
        loop(j,m,0){
            if(maps[i][j]=='.' && !visited[i][j]){
                DFS(i,j);
                answer++;
            }
        }
    }

    cout<<answer;
    return 0;
}