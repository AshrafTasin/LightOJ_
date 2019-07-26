/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   26.07.19   |
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


int cnt2(int n)
{
    int cnt=0;
    int k=2;

    while(n/k)
    {
        cnt+=n/k;
        k*=2;
    }

    return cnt;
}

int cnt5(int n)
{
    int cnt=0;
    int k=5;

    while(n/k)
    {
        cnt+=n/k;
        k*=5;
    }

    return cnt;
}

int cnt22(int n)
{
    int cnt=0;

    while(n%2==0)
    {
        ++cnt;
        n/=2;
    }

    return cnt;
}

int cnt55(int n)
{
    int cnt=0;

    while(n%5==0)
    {
        ++cnt;
        n/=5;
    }

    return cnt;
}


int main()
{
    int tc;
    scanf("%d",&tc);

    for(int c=1;c<=tc;++c)
    {
        int n,r,p,q;
        scanf("%d%d%d%d",&n,&r,&p,&q);
        int ans=min(((cnt2(n)-(cnt2(r)+cnt2(n-r)))+(cnt22(p)*q)),((cnt5(n)-(cnt5(r)+cnt5(n-r)))+(cnt55(p)*q)));

        printf("Case %d: %d\n",c,ans);

    }

    return 0;
}

