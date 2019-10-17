/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   21.08.19   |
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
using namespace std;
 
 
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);

    flash
    
    int tc;
    sfi(tc);

    for(int t=1;t<=tc;++t)
    {
        int n,m;
        sfii(n,m);

        vector< pair<int,int> > v[n+10];
        int cost[n+10];

        for(int i=0;i<n+2;++i) cost[i]=INT_MAX;

        for(int i=1;i<=m;++i)
        {
            int a,b,c;
            sfiii(a,b,c);

            v[a].pb({b,c});
            v[b].pb({a,c});
        }

        priority_queue<mnm> pq;
        pq.push({0,1});

        while(!pq.empty())
        {
            auto cur=pq.top();
            pq.pop();

            int u=cur.second;
            int w=cur.first;

            for(auto i: v[u])
            {
                int child=i.first;
                int dis=i.second;

                if(w+dis<cost[child])
                {
                    cost[child]=w+dis;
                    pq.push({cost[child],child});
                }
            }
        }

        printf("Case %d: ",t);

        if(cost[n]==INT_MAX) printf("Impossible\n");
        else printf("%d\n",cost[n]);
    }
    

    return 0;
}