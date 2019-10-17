    /*----------------------|
    / Author : Ashraf Tasin |
    / Date   :   26.08.19   |
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
     
    vector<int> v[160];
    bool vis[160];
    int match[160];
     
    struct Person
    {
        int h,a,d;
    };
     
    Person man[160],woman[160];
     
    bool bpm(int person)
    {
        int sz=v[person].size();
     
        for(int i=0;i<sz;++i)
        {
            int woman=v[person][i];
     
            if(!vis[woman])
            {
                vis[woman]=1;
     
                if(match[woman]==-1 or bpm(match[woman]))
                {
                    match[woman]=person;
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
      //  flash
     
        int tc;
        sfi(tc);
     
        for(int t=1;t<=tc;++t)
        {
            int m,w,ans=0;
            sfii(m,w);
           
            for(int i=1;i<=m;++i) sfiii(man[i].h,man[i].a,man[i].d);
            for(int i=1;i<=w;++i) sfiii(woman[i].h,woman[i].a,woman[i].d);
     
            for(int i=1;i<=m;++i)
            {
                for(int j=1;j<=w;++j)
                {
                    if(abs(man[i].h-woman[j].h)<=12 and abs(man[i].a-woman[j].a)<=5 and (man[i].d==woman[j].d)) v[i].pb(j);
                }
            }
     
            memset(match,-1,sizeof match);
     
            for(int i=1;i<=m;++i)
            {
                //if(v[i].empty()) continue;
                memset(vis,0,sizeof vis);
     
                if(bpm(i)) ++ans;
     
            }
     
            printf("Case %d: %d\n",t,ans);
     
            for(int i=0;i<=160;++i) v[i].clear();
           // memset(man,0,sizeof man);
            //memset(woman,0,sizeof woman);
        }
       
        return 0;
     }

