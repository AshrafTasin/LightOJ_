/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   25.09.18   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define M it=m.begin(),it!=m.end(),it++
#define sz 20009
#define db double
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

vector<int> v[sz];
int color[sz];

enum {unvis,black,white};


int main()
{
    int tc;
    scanf("%d",&tc);

    for(int t=1;t<=tc;t++)
    {
        int n;
        scanf("%d",&n);

        for(int i=0;i<sz;i++) v[i].clear();
        memset(color,0,sizeof color);

        for(int i=0;i<n;i++)
        {
            int a,b;
            scanf("%d%d",&a,&b);
            v[a].pb(b);
            v[b].pb(a);
        }

        int res=0;

        for(int i=0;i<sz;i++)
        {
            if(!v[i].empty() && color[i]==unvis)
            {
                queue<int> q;
                int blac=0,whit=0;
                q.push(i);
                color[i]=black;
                blac++;

                while(!q.empty())
                {
                    int cur=q.front();
                    q.pop();
                    int s=v[cur].size();

                    for(int j=0;j<s;j++)
                    {
                        int r=v[cur][j];

                        if(color[r]==unvis)
                        {
                            q.push(r);

                            if(color[cur]==black)
                            {
                                color[r]=white;
                                whit++;
                            }

                            if(color[cur]==white)
                            {
                                color[r]=black;
                                blac++;
                            }
                        }
                    }
                }

                res+=max(whit,blac);
            }
        }

        printf("Case %d: %d\n",t,res);
    }

    return 0;
}
