/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   22.08.19   |
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
#define fread freopen("in.txt","r",stdin);
#define fwrite freopen("out.txt","w",stdout);
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
    fread
    fwrite

    flash

    int tc;
    sfi(tc);

    for(int i=1;i<=tc;++i)
    {
        int n,q;
        sfii(n,q);

        int ar[n+10];

        for(int j=0;j<n;++j) sfi(ar[j]);
        
        printf("Case %d:\n",i);

        while(q--)
        {
            int a,b;
            sfii(a,b);
            auto x1=lower_bound(ar,ar+n,a)-ar;
            auto x2=upper_bound(ar,ar+n,b)-ar;

            printf("%d\n",x2-x1);

        }
    }

    return 0;
}