/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   01.08.19   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define flash ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define db double
#define endl "\n"
#define mnm pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>
#define show for(int i=0;i<v.size();i++) cout << v[i] << " ";
#define eps 1e-6
#define mx 100008
#define mod 1000000007
#define mod1 1000003
using namespace std;

/*King Moves
int dx[]={-1,1,-1,0,1,-1,0,1};
int dy[]={0,0,-1,-1,-1,1,1,1}; */

/*Knight Moves

int dx[] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int dy[] = { 1, 2, 2, 1, -1, -2, -2, -1 }; */

/*Normal Moves

int x[] = {0, 1, 0, -1};
int y[] = {-1, 0, 1, 0}; */

int main()
{
    int tc;
    scanf("%d",&tc);

    for(int i=1;i<=tc;++i)
    {
       double l,w;
       scanf("%lf%lf",&l,&w);
       double a=12.00;
       double b=-4*(l+w);
       double c=l*w;

       double h=(-b-sqrt(b*b-4*a*c))/(2.0*a);
       printf("Case %d: %.10lf\n",i,(l-2*h)*(w-2*h)*h);
    }

    return 0;
}
