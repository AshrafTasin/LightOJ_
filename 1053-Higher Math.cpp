/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   15.10.19   |
/----------------------*/
 
#include<bits/stdc++.h>
#define ll long long
#define sfi(a) scanf("%d",&a);
#define sflll(a,b,c) scanf("%lld%lld%lld",&a,&b,&c);
#define fread freopen("in.txt","r",stdin);
#define fwrite freopen("out.txt","w",stdout);
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
        ll a,b,c;
        sflll(a,b,c);

        printf("Case %d: ",t);
        if(a*a+b*b==c*c or b*b+c*c==a*a or c*c+a*a==b*b) printf("yes\n");
        else printf("no\n");
    }

	return 0;
}