/*------------------------|
/ Author :   Ashraf Tasin |
/ Date   :   22.09.18     |
/------------------------*/

#include<bits/stdc++.h>
#include<math.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define M it=m.begin(),it!=m.end(),it++
#define db double
#define mx 1000010
#define md 1000000007
#define show for(int i=0;i<v.size();i++) cout << v[i] << " ";
using namespace std;


ll last(ll num,ll power)
{
    if(power==0) return 1;

    if(power%2==0)
    {
        ll ret=last(num,power/2)%1000;
        return (ret*ret)%1000;
    }

    return ((num%1000)*(last(num,power-1)%1000))%1000;
}


ll first(ll num,ll power)
{
    double pro=power*log10(num);
    pro-=floor(pro);

    int ret=pow(10.0,pro)*100;

    return ret;
}

int main()
{
    int tc;
    scanf("%d",&tc);

    for(int i=1;i<=tc;i++)
    {
        ll num,power;
        scanf("%lld%lld",&num,&power);

        printf("Case %d: %lld %03lld\n",i,first(num,power),last(num,power));
    }

    return 0;
}
