/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   25.09.18   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define M it=m.begin(),it!=m.end(),it++
#define sz 20009
#define db double
#define show for(int i=0;i<v.size();i++) cout << v[i] << " ";
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

vector<int> v[sz];
int color[sz];
bool vis[sz];
int blac,whit;

enum {unvis,black,white};


void dfs(int src)
{
    if(vis[src]) return;
    vis[src]=1;

    int s=v[src].size();
    for(int i=0;i<s;i++)
    {
        int x=v[src][i];

        if(color[src]==unvis)
        {
            color[src]=black;
            blac++;
        }

        if(color[src]==black and color[x]==unvis)
        {
            color[x]=white;
            whit++;
        }

        if(color[src]==white and color[x]==unvis)
        {
            color[x]=black;
            blac++;
        }

        dfs(x);
    }
}

int main()
{
    int tc;
    scanf("%d",&tc);

    for(int t=1;t<=tc;t++)
    {
        int n;
        scanf("%d",&n);

        for(int i=0;i<sz;i++) v[i].clear();
        memset(color,0,sizeof color);
        memset(vis,0,sizeof vis);

        for(int i=0;i<n;i++)
        {
            int a,b;
            scanf("%d%d",&a,&b);
            v[a].pb(b);
            v[b].pb(a);
        }

        int res=0;

        for(int i=0;i<sz;i++)
        {
            if(!v[i].empty() && color[i]==unvis)
            {

                blac=0,whit=0;
                dfs(i);
                res+=max(whit,blac);
            }
        }

        printf("Case %d: %d\n",t,res);
    }

    return 0;
}


