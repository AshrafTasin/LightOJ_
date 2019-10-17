/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   27.08.19   |
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
#define fread freopen("input.txt","r",stdin);
#define fwrite freopen("output.txt","w",stdout);
#define maxn 1010
using namespace std;
 
vector<ll> v[200];
bool vis[200];
int match[200];

bool bpm(int num)
{
    int sz=v[num].size();

    for(int i=0;i<sz;++i)
    {
        int x=v[num][i];

        if(!vis[x])
        {
            vis[x]=1;

            if(match[x]==-1 or bpm(match[x]))
            {
                match[x]=num;
                return true;
            }
        }
    }

    return false;
}

int main()
{
  //  fread
   // fwrite
   // flash

    int tc;
    sfi(tc);

    for(int t=1;t<=tc;++t)
    {
        ll num1[200],num2[200];
        int n,m;
        sfi(n);

        for(int i=0;i<n;++i) scanf("%lld",&num1[i]);

        sfi(m);

        for(int i=0;i<m;++i) scanf("%lld",&num2[i]);

        for(int i=0;i<n;++i)
        {
            for(int j=0;j<m;++j)
            {
                if(num2[j]%num1[i]==0) v[i].pb(j);
            }
        }

        memset(match,-1,sizeof match);

        int ans=0;

        for(int i=0;i<n;++i)
        {
            if(v[i].empty()) continue;

            memset(vis,0,sizeof vis);

            if(bpm(i)) ++ans;
        }

        printf("Case %d: %d\n",t,ans);

        for(int i=0;i<=200;++i) v[i].clear();
    }

    return 0;
}