/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   13.09.18   |
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

bool a[10000002];


int main()
{

	vector <int> prime;

	a[0] = true;
	a[1] = true;

	for(int i=2;i<=10000002;i++)
    {
		if(a[i]==false)
		{
			prime.pb(i);
			for(int j=2*i;j<=10000002;j=j+i) a[j]=true;
		}
	}

    int t;
	scanf("%d",&t);

	for(int j=1;j<=t;j++)
    {
        int n;
		scanf("%d",&n);
		int cnt=0;

		for (int i=0;;i++)
        {
			int x=prime[i];
			int y=n-x;

			if(x > y) break;
			if(a[y]==0) cnt++;

		}

		printf("Case %d: %d\n", j, cnt);

	}

   return 0;
}
