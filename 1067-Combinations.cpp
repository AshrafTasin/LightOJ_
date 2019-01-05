/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   20.09.18   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define M it=m.begin(),it!=m.end(),it++
#define db double
#define mx 1000010
#define MOD 1000003
#define show for(int i=0;i<v.size();i++) cout << v[i] << " ";
using namespace std;


ll fact[1000006];

ll bigmod(ll n, ll pow, ll mod)
{
    if(pow==0) return 1;
    if(pow==1) return n;

    if(pow%2==0)
    {
        ll ret=bigmod(n,pow/2,mod)%mod;
        return (ret*ret)%mod;
    }

    return ((n%mod)*(bigmod(n,pow-1,mod)%mod))%mod;
}


int main()
{

    fact[0]=fact[1]=1;

    for(int i=2;i<=1000002;i++) fact[i]=(fact[i-1]%MOD * i%MOD)%MOD;

    int tc;
    scanf("%d",&tc);

    for(int i=1;i<=tc;i++)
    {
        ll n,r;
        scanf("%lld%lld",&n,&r);

        ll ans=fact[r]*fact[n-r];
        ans%=MOD;

        ans=bigmod(ans,MOD-2,MOD);

        printf("Case %d: %lld\n",i,(fact[n]*ans)%MOD);
    }

    return 0;
}
