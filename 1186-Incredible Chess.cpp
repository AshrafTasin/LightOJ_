/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   18.09.19   |
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
#define sfl(a) scanf("%lld",&a);
#define sfll(a,b) scanf("%lld%lld",&a,&b);
#define sflll(a,b,c) scanf("%lld%lld%lld",&a,&b,&c);
#define sfd(a) scanf("%lf",&a);
#define sfdd(a,b) scanf("%lf%lf",&a,&b);
#define sfddd(a,b,c) scanf("%lf%lf%lf",&a,&b,&c);
#define fread freopen("in.txt","r",stdin);
#define fwrite freopen("out.txt","w",stdout);
#define mx 100090
#define pi acos(-1)
#define art cout << "PP" << endl;
using namespace std;


bool cmp(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.first<=b.first;
}

int main()
{
    #ifndef ONLINE_JUDGE
        fread
        fwrite
    #endif

    int tc;
    sfi(tc);

    for(int t=1;t<=tc;++t)
    {
        int n;
        sfi(n);

        map<int,vector<int> >m;

        int k=0;

        for(int i=0;i<n;++i)
        {
            int x;
            sfi(x);
            m[i].pb(x);
        }

        for(int i=0;i<n;++i)
        {
            int x;
            sfi(x);
            m[i].pb(x);
        }

        int ans=0;

        for(auto it=m.begin();it!=m.end();++it)
        {
            //cout << it->second[0] << " " << it->second[1] << abs(it->second[0] - it->second[1])-1 << endl;
            ans^=abs(it->second[0] - it->second[1])-1;
        }

        printf("Case %d: ",t);
        //cout << ans << endl;
        if(ans>0) printf("white wins\n");
        else printf("black wins\n"); 
    }

    return 0;
}