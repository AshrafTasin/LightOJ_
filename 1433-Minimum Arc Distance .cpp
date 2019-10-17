/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   02.09.19   |
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

struct Point
{
    double x,y;
};

double dis(Point A,Point B)
{
    return sqrt((A.x-B.x)*(A.x-B.x)+(A.y-B.y)*(A.y-B.y));
}

int main()
{
    fread
    fwrite
    flash

    int tc;
    sfi(tc);

    for(int t=1;t<=tc;++t)
    {
       Point O,A,B;
       
       sfdd(O.x,O.y);
       sfdd(A.x,A.y);
       sfdd(B.x,B.y);

       double a=dis(O,A);
       double b=dis(O,B);
       double c=dis(A,B);

       double angle=acos( ((a*a+b*b-c*c)/(2*a*b)) );
       double ans=a*angle;

       printf("Case %d: %.6lf\n",t,ans*1.00);
    }

    return 0;
}