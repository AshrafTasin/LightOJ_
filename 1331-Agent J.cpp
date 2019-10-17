/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   31.08.19   |
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
#define sfd(a) scanf("%lf",&a);
#define sfdd(a,b) scanf("%lf%lf",&a,&b);
#define sfddd(a,b,c) scanf("%lf%lf%lf",&a,&b,&c);
#define fread freopen("in.txt","r",stdin);
#define fwrite freopen("out.txt","w",stdout);
#define mx 1000005
using namespace std;



int main()
{
    fread
    fwrite
    flash

    int tc;
    sfi(tc);

    for(int t=1;t<=tc;++t)
    {
        double x,y,z;
        sfddd(x,y,z);
        
        x*=1.00;
        y*=1.00;
        z*=1.00;

        double a=x+y;
        double b=y+z;
        double c=z+x;

        double s=a+b+c;
        s/=2.00;

        double area=sqrt( s*(s-a)*(s-b)*(s-c) );
        double angleA=acos( (b*b+c*c-a*a)/(2.00*b*c) );
        double angleB=acos( (c*c+a*a-b*b)/(2.00*c*a) );
        double angleC=acos( (a*a+b*b-c*c)/(2.00*a*b) );

        double minu=(0.5*z*z*angleA)+(0.5*x*x*angleB)+(0.5*y*y*angleC);
        area-=minu;
        area*=1.00;

        printf("Case %d: %.10lf\n",t,area);
    }

    return 0;
}