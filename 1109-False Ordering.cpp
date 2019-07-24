/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   20.07.19   |
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
#define mx 100000002
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


bool vis[1010];
vector<int> v;
vector< pair<int,int> > p;

void sv()
{
	for(int i=2;i<=1008;i+=2) vis[i]=1;
	vis[2]=0;
	
	for(int i=3;i*i<=1008;i+=2)
	{
		if(!vis[i])
		{
			for(int j=i*i;j<=1008;j+=i) vis[j]=1;
		}
	}

	for(int i=2;i<=1008;++i)
	{
		if(!vis[i])
		{
			v.pb(i);
		}
	}
}

int divcnt(int n)
{
	int sz=v.size();
	int res=1;
	
	for(int i=0;i<sz;++i)
	{
		int cnt=1;


		if(n%v[i]==0)
		{
			
			while(n%v[i]==0)
			{
				n/=v[i];
				++cnt;
			}
		}

		res*=cnt;
	}

	return res;
}

bool cmp(const pair<int,int> &a, const pair<int,int> &b)
{
	if(a.second==b.second) return a.first>b.first;
	return a.second<b.second;
}

int main()
{
	
   //freopen("in.txt","r",stdin);
   //freopen("out.txt","w",stdout);

    flash

   	sv();

   	p.pb({1,1});

   	for(int i=2;i<=1000;++i)
   	{
   		if(vis[i]) p.pb({i,divcnt(i)});
   		else p.pb({i,2});
   	}

   	sort(p.begin(),p.end(),cmp);

   	int tc;
   	scanf("%d",&tc);

   	for(int c=1;c<=tc;++c)
   	{
   		int x;
   		scanf("%d",&x);
   		printf("Case %d: %d\n",c,p[x-1].first);
   	}

    return 0;
}
