/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   13.08.18   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;

bool vis[505][505];
int r,c,q,sr,sc,er,ec,ase=0,baki=1;
int dr[]={1,-1,0,0};
int dc[]={0,0,1,-1};

int bfs(vector<char> v[])
{
    int cnt=0;
    queue<int> rq;
    queue<int> cq;

    rq.push(sr);
    cq.push(sc);
    vis[sr][sc]=1;

    while(!rq.empty())
    {
        int cr=rq.front();
        int cc=cq.front();
        rq.pop();
        cq.pop();

        if(v[cr][cc]=='C') cnt++;

        for(int i=0;i<4;i++)
        {
            int nr=cr+dr[i];
            int nc=cc+dc[i];

            if((nr>=0 && nc>=0) && (nr<=r && nc<=c) && vis[nr][nc]==0)
            {
                rq.push(nr);
                cq.push(nc);
                vis[nr][nc]=1;
            }
        }
    }

    return cnt;
}


int main()
{
    int tc;
    scanf("%d",&tc);

    for(int i=1;i<=tc;i++)
    {
        vector<int> v1;
        scanf("%d%d%d",&r,&c,&q);
        er=r-1;
        ec=c-1;
        memset(vis,0,sizeof(vis));
        vector<char> v[505];

        for(int j=0;j<r;j++)
        {
            for(int k=0;k<c;k++)
            {
                char a;
                cin >> a;
                v[j].pb(a);

                if(a=='#') vis[j][k]=1;

            }
        }

        for(int p=0;p<q;p++)
        {
            scanf("%d%d",&sr,&sc);
            sr--;
            sc--;

            v1.pb(bfs(v));
        }

        printf("Case &d:\n",i);

        for(int p=0;p<q;p++) printf("%d\n",v1[p]);
    }

    return 0;
}
