/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   09.09.18   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ull unsigned long long
#define all v.begin(),v.end()
#define M it=m.begin(),it!=m.end(),it++
#define db double
#define show for(int i=0;i<v.size();i++) cout << v[i] << " ";
#define b 5000002
using namespace std;

ull phi[b];

int main()
{

    for(ull i=1;i<=b;i++) phi[i]=i;

    for(ull i=2;i<=b;i++)
    {
        if(phi[i]==i)
        {
            phi[i]=i-1;

            for(ull j=i*2;j<=b;j+=i) phi[j]=(phi[j]/i)*(i-1);
        }
    }

    for(ull i=2;i<=b;i++)
    {
        phi[i]*=phi[i];
        phi[i]+=phi[i-1];
    }

    int t;
    scanf("%d",&t);

    for(int i=1;i<=t;i++)
    {
        ull a,bb;
        scanf("%llu%llu",&a,&bb);

        printf("Case %d: %llu\n",i,phi[bb]-phi[a-1]);

    }

    return 0;
}
