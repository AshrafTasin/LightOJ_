/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   29.07.19   |
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
ll cost,start,en;
ll level[30009];
ll level1[30009];

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

void dfs2(int node)
{
    if(vis[node]) return;

    vis[node]=1;
    int sz=v[node].size();

    for(int i=0;i<sz;++i)
    {
        int x=v[node][i].first;
        int y=v[node][i].second;

        if(!vis[x])
        {
            ll z=level[node]+y;
            level[x]=max(level[node],z);
            dfs2(x);
        }
    }
}

void dfs3(int node)
{
    if(vis[node]) return;

    vis[node]=1;
    int sz=v[node].size();

    for(int i=0;i<sz;++i)
    {
        int x=v[node][i].first;
        int y=v[node][i].second;

        if(!vis[x])
        {
            ll z=level1[node]+y;
            level1[x]=max(level1[node],z);
            dfs3(x);
        }
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

        memset(level,0,sizeof level);
        memset(vis,0,sizeof vis);
        cost=INT_MIN;
        dfs(0,0);
        int dia1=start;

        memset(vis,0,sizeof vis);
        cost=INT_MIN;
        dfs(start,0);
        int dia2=start;

        memset(vis,0,sizeof vis);
        level[dia1]=0;
        dfs2(dia1);

        memset(vis,0,sizeof vis);
        level1[dia2]=0;
        dfs3(dia2);

        printf("Case %d:\n",c);

        for(int i=0;i<n;++i) printf("%lld\n",max(level1[i],level[i]));

        for(int i=0;i<n;++i) v[i].clear();

    }

    return 0;
}

