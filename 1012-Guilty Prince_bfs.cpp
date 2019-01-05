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
#define db double
#define show for(int i=0;i<v.size();i++) cout << v[i] << " ";
using namespace std;


/*King  Moves

int dx[]={-1,1,-1,0,1,-1,0,1};
int dy[]={0,0,-1,-1,-1,1,1,1};    */

/*Knight Moves

int dx[] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int dy[] = { 1, 2, 2, 1, -1, -2, -2, -1 }; */

/*Normal Moves*/

int dx[] = {0, 1, 0, -1};
int dy[] = {-1, 0, 1, 0};

int r,c,sr,sc,cnt;

char grid[30][30];
bool vis[30][30];

void bfs()
{
    queue<int> rq;
    queue<int> cq;

    rq.push(sr);
    cq.push(sc);

    vis[sr][sc]=1;
    cnt=1;

    while(!rq.empty())
    {
        int cr=rq.front();
        int cc=cq.front();
        rq.pop();
        cq.pop();

        for(int i=0;i<4;i++)
        {
            int nr=cr+dx[i];
            int nc=cc+dy[i];

            if(nr>=0 and nc>=0 and nr<r and nc<c and vis[nr][nc]==0)
            {
                vis[nr][nc]=1;
                cnt++;
                rq.push(nr);
                cq.push(nc);
            }
        }
    }
}


int main()
{
    int tc;
    scanf("%d",&tc);

    for(int t=1;t<=tc;t++)
    {
        scanf("%d%d",&c,&r);
        memset(vis,0,sizeof vis);

        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                char x;
                cin >> x;

                if(x=='@')
                {
                    sr=i;
                    sc=j;
                }

                if(x=='#') vis[i][j]=1;
            }
        }

        bfs();

        printf("Case %d: %d\n",t,cnt);

    }

    return 0;
}
