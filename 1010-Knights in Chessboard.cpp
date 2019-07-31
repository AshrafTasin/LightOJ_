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
        int n,m;
        scanf("%d%d",&n,&m);

        printf("Case %d: ",i);

        if(n==1 or m==1) printf("%d",m*n);

        else if(n==2 or m==2)
        {
            int ans=n*m;
            ans/=4;
            if(ans%2) printf("%d",(((m*n)/8)+1)*4);
            if(ans%2==0 and (m*n)%4!=0) printf("%d",((((m*n)/8)+1)*4)-2);
            if(ans%2==0 and (m*n)%4==0) printf("%d",((((m*n)/8)*4)));

        }

        else
        {
            double ans=n*m;
            ans=ceil(ans/2);
            int x=ans;
            printf("%d",x);
        }

        printf("\n");
    }

    return 0;
}
