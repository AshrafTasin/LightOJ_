/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   29.12.18   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define M it=m.begin(),it!=m.end(),it++
#define flash ios :: sync_with_stdio(false); cin.tie(NULL);
#define db double
#define endl "\n"
#define mnm pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>
#define show for(int i=0;i<v.size();i++) cout << v[i] << " ";
using namespace std;


/*King  Moves

int dx[]={-1,1,-1,0,1,-1,0,1};
int dy[]={0,0,-1,-1,-1,1,1,1};    */

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

    for(int c=1;c<=tc;++c)
    {
        double a,b;
        scanf("%lf%*c%*c%*c%lf",&a,&b);

        double rad=sqrt(a*a+b*b)/2.0;
        double X=acos((rad*rad+rad*rad-b*b)/(2.0*rad*rad));
        double s=rad*X;
        double ans=400.0/(2.0*s+2.0*a);

        printf("Case %d: %.8lf %.8lf\n",c,ans*a,ans*b);
    }

    return 0;
}
