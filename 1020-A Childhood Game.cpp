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
        int n;
        char s[8];
        scanf("%d",&n);
        scanf("%s",s);

        printf("Case %d: ",i);
        if(s[0]=='A')
        {
            if(n%3==1) printf("Bob\n");
            else printf("Alice\n");
        }

        else
        {
            if(n%3==0) printf("Alice\n");
            else printf("Bob\n");
        }
    }

    return 0;
}
