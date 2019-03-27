/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   27.03.19   |
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

    for(int i=1;i<=tc;++i)
    {
        double a,b,c,r;
        scanf("%lf%lf%lf%lf",&a,&b,&c,&r);
        double ra=r/(r+1);

        double ans=sqrt(ra);
        double n=ans;
        ans+=ra-n*n;
        ans*=a;
        printf("Case %d: %.8lf\n",i,ans);
    }

    return 0;

}
