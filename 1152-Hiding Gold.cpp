/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   29.08.19   |
/----------------------*/
 
#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define flash ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define db double
#define endl "\n"
#define mnm pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>
#define show for(int i=0;i<v.size();i++) cout << v[i] << " ";
#define eps 1e-6
#define sfi(a) scanf("%d",&a);
#define sfii(a,b) scanf("%d%d",&a,&b);
#define sfiii(a,b,c) scanf("%d%d%d",&a,&b,&c);
#define fread freopen("in.txt","r",stdin);
#define fwrite freopen("out.txt","w",stdout);
#define maxn 1010
using namespace std;

int dx[] = {0, 1, 0, -1};
int dy[] = {-1, 0, 1, 0};

int m,n;
vector<int> v[3000];
int match[3000];
bool vis[3000];

bool bpm(int node)
{
    int sz=v[node].size();

    for(int i=0;i<sz;++i)
    {
        int x=v[node][i];

        if(!vis[x])
        {
            vis[x]=1;

            if(match[x]==-1 or bpm(match[x]) )
            {
                match[x]=node;
                return true;
            }
        }
    }

    return false;
}

int main()
{
    fread
    fwrite
    flash 

    int tc;
    cin >> tc;

    for(int t=1;t<=tc;++t)
    {
        cin >> m >> n;

        int grid[m+10][n+10];
        int k=0;

        for(int i=0;i<m;++i)
        {
            for(int j=0;j<n;++j)
            {
                char x;
                cin >> x;
                if(x=='*') grid[i][j]=++k;
                else grid[i][j]=0;
            }
        }

        for(int i=0;i<m;++i)
        {
            for(int j=0;j<n;++j)
            {
                if(grid[i][j])
                {
                    int x=grid[i][j];

                    for(int ii=0;ii<4;++ii)
                    {
                        int nr=i+dx[ii];
                        int nc=j+dy[ii];
                        int y=grid[nr][nc];

                        if(nr>=0 and nc>=0 and nr<m and nc<n and y)
                        {
                            v[x].pb(y);
                            v[y].pb(x);

                           // cout << i << " " << j << " " << nr << " " << nc << " " << x << " " << grid[nr][nc] << endl;
                        }
                    }
                }
            }
        }

        // for(int i=0;i<m;++i)
        // {
        //     for(int j=0;j<v[i].size();++j) cout << v[i][j] << " ";
        //         cout << endl;
        // }
        memset(match,-1,sizeof match);
        int ans=0;

        for(int i=1;i<=k;++i)
        {
            memset(vis,0,sizeof vis);

            if(bpm(i)) ++ans;
        }

        cout << "Case " << t << ": " << k-(ans/2) << endl;

        for(int i=0;i<3000;++i) v[i].clear();
    }    
    
    return 0;
}
