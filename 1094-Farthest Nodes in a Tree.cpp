
/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   28.07.19   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define flash ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define db double
#define endl "\n"
#define mnm pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>
#define show for(int i=0;i<v.size();i++) cout << v[i] << " ";
#define eps 1e-6
#define mx 100004
using namespace std;


/*King  Moves

int dx[]={-1,1,-1,0,1,-1,0,1};
int dy[]={0,0,-1,-1,-1,1,1,1};    */

/*Knight Moves

int dx[] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int dy[] = { 1, 2, 2, 1, -1, -2, -2, -1 }; */

/*Normal Moves

int x[] = {0, 1, 0, -1};
int y[] = {-1, 0, 1, 0}; */

vector< pair<int,int> > v[30009];
bool vis[30009];
ll cost,start;


void dfs(int node,int w)
{
    if(cost<w)
    {
        cost=w;
        start=node;
    }

    vis[node]=1;
    int sz=v[node].size();

    for(int i=0;i<sz;++i)
    {
        int x=v[node][i].first;
        int y=v[node][i].second;

        if(!vis[x]) dfs(x,w+y);
    }

}

int main()
{
    int tc;
    scanf("%d",&tc);

    for(int c=1;c<=tc;++c)
    {
        int n;
        scanf("%d",&n);

        for(int i=1;i<=n-1;++i)
        {
            int u,v1,w;
            scanf("%d%d%d",&u,&v1,&w);
            v[u].pb({v1,w});
            v[v1].pb({u,w});
        }

        cost=INT_MIN;
        memset(vis,0,sizeof vis);

        dfs(0,0);
        memset(vis,0,sizeof vis);

        dfs(start,0);

        printf("Case %d: %lld\n",c,cost);

        for(int i=0;i<n;++i) v[i].clear();
    }

    return 0;
}

