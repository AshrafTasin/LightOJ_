/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   14.09.18   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define M it=m.begin(),it!=m.end(),it++
#define db double
#define show for(int i=0;i<v.size();i++) cout << v[i] << " ";
using namespace std;


int main()
{
    int tc;
    scanf("%d",&tc);

    for(int i=1;i<=tc;i++)
    {
        ll in;
        scanf("%lld",&in);

        if(in==0) return 0;

        ll x=ceil(sqrt(in));
        ll y=in-(x-1)*(x-1);

        if(x&1==1)
        {
            if(y<x) printf("Case %d: %lld %lld\n",i,x,y);
            else printf("Case %d: %lld %lld\n",i,x*x-in+1,x);
        }

        else
        {
            if(y>x) printf("Case %d: %lld %lld\n",i,x,1+x*x-in);
            else printf("Case %d: %lld %lld\n",i,y,x);
        }

    }



   return 0;
}
