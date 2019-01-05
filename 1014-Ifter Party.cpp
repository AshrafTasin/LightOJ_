/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   13.09.18   |
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
        set<ll> s;
        set<ll> :: iterator it;
        ll p,l;
        scanf("%lld%lld",&p,&l);

        ll d=p-l;

        if(d<=l) printf("Case %d: impossible\n",i);

        else
        {
            for(ll j=1;j*j<=d;j++)
            {
                if(d%j==0)
                {
                    s.insert(j);
                    s.insert(d/j);
                }
            }

            printf("Case %d:",i);

            for(it=s.begin();it!=s.end();it++)
            {
                if(*it>l) printf(" %lld",*it);
            }

            printf("\n");
        }

    }


   return 0;
}
