/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   15.10.19   |
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
#define eps 1e-9
#define sfi(a) scanf("%d",&a);
#define sfii(a,b) scanf("%d%d",&a,&b);
#define sfiii(a,b,c) scanf("%d%d%d",&a,&b,&c);
#define sfl(a) scanf("%ld",&a);
#define sfll(a,b) scanf("%ld%ld",&a,&b);
#define sflll(a,b,c) scanf("%ld%ld%ld",&a,&b,&c);
#define sfd(a) scanf("%lf",&a);
#define sfdd(a,b) scanf("%lf%lf",&a,&b);
#define sfddd(a,b,c) scanf("%lf%lf%lf",&a,&b,&c);
#define fread freopen("in.txt","r",stdin);
#define fwrite freopen("out.txt","w",stdout);
#define mx 1000005
#define pi acos(-1)
using namespace std;


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
        int x;
        sfi(x);

        if(__builtin_popcount(x)%2) printf("Case %d: odd\n",t);
        else printf("Case %d: even\n",t);
    }

	return 0;
}