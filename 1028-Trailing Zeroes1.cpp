/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   16.09.18   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define M it=m.begin(),it!=m.end(),it++
#define db double
#define mx 1001110
#define show for(int i=0;i<v.size();i++) cout << v[i] << " ";
using namespace std;

bool prime[mx+100];
vector<ll> v;
ll sz;

void seive()
{
    for(ll i=4;i<=mx;i+=2) prime[i]=1;

    ll s=sqrt(mx);

    for(ll i=3;i<=s;i+=2)
    {
        if(prime[i]==0)
        {
            for(ll j=i*i;j<=mx;j+=i*2) prime[j]=1;
        }
    }

    prime[1]=1;
    prime[0]=1;

    for(ll i=2;i<mx;i++)
    {
        if(prime[i]==0) v.pb(i);
    }

    sz=v.size();


}



int main()
{
    seive();

    int tc;
    scanf("%d",&tc);

    for(ll j=1;j<=tc;j++)
    {
       ll n;
       cin >> n;

       ll ans=1;

       for(ll i=0;i<sz && (v[i]*v[i])<=n;i++)
       {
           ll cnt=0;

           if(n%v[i]==0)
           {
               while(n%v[i]==0)
               {
                   n/=v[i];
                   cnt++;
               }
           }

           ans*=(cnt+1);
       }

       if(n!=1) ans*=2;
       cout << "Case " << j <<": "<< ans-1 << endl;
    }

    return 0;
}
