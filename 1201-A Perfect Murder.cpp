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
     
     
    vector<int> v[1010];
    vector<int> v1,v2;
    bool vis[1010];
    int match[1010];
    int color[1010];
    int n,m;
     
    enum {unvis,black,white};
     
    bool bpm(int n)
    {
        int sz=v[n].size();
     
        for(int i=0;i<sz;++i)
        {
            int x=v[n][i];
     
            if(!vis[x])
            {
                vis[x]=1;
     
                if(match[x]==-1 or bpm(match[x]))
                {
                    match[x]=n;
                    return true;
                }
            }
        }
     
        return false;
    }
     
    void bfs()
    {
        for(int i=0;i<=n;++i)
        {
            if(!v[i].empty() and color[i]==unvis)
            {
                 queue<int> q;
                 q.push(i);
                 color[i]=black;
                 v1.pb(i);
     
                 while(!q.empty())
                 {
                    int cur=q.front();
                    q.pop();
     
                    int sz=v[cur].size();
     
                    for(int i=0;i<sz;++i)
                    {
                        int x=v[cur][i];
     
                        if(color[x]==unvis)
                        {
                            q.push(x);
     
                            if(color[cur]==white)
                            {
                                 color[x]=black;
                                 v1.pb(x);
                            }
                           
                            else
                            {
                                color[x]=white;
                                v2.pb(x);
                            }
                        }
                    }
                 }
            }
        }
    }
     
    int main()
    {
        //fread;
        //fwrite;
        //flash;
     
        int tc;
        sfi(tc);
     
        for(int t=1;t<=tc;++t)
        {
            sfii(n,m);
     
            for(int i=0;i<m;++i)
            {
                int a,b;
                sfii(a,b);
     
                v[a].pb(b);
                v[b].pb(a);
            }
     
            memset(match,-1,sizeof match);
            bfs();
     
            int ans=0;
            int sz=v1.size();
     
            for(int i=0;i<sz;++i)
            {
                if(v[v1[i]].empty()) continue;
     
                memset(vis,0,sizeof vis);
     
                if(bpm(v1[i])) ++ans;
            }
     
            printf("Case %d: %d\n",t,n-ans);
     
            // for(int i=0;i<v1.size();++i) cout << v1[i] << " ";
            //     cout << endl;
            // for(int i=0;i<v2.size();++i) cout << v2[i] << " ";
            //     cout << endl;
     
            for(int i=0;i<1010;++i) v[i].clear();
            v1.clear();
            v2.clear();
            memset(color,0,sizeof color);
        }
    }
