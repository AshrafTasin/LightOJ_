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

bool p[104];

int main()
{
    vector<int> v;

    for(int i=2;i*i<=100;i++)
    {
        if(p[i]==0)
        {
          for(int j=i*2;j<=100;j+=i) p[j]=1;
        }
    }

    for(int i=2;i<=100;i++)
    {
        if(p[i]==0) v.pb(i);
    }

    int tc;
    scanf("%d",&tc);

    for(int i=1;i<=tc;i++)
    {
        vector<int> v1;
        int x,prime=0;
        scanf("%d",&x);
        int cp=x;

        for(int j=0;j<v.size();j++)
        {
            if(v[j]>x) break;
            else prime++;
        }

        prime--;

        for(int j=0;j<=prime;j++)
        {
           cp/=v[j];
           v1.pb(cp);

           while(1)
           {
               cp/=v[j];
               if(cp==0) break;
               v1[j]+=cp;
           }
           cp=x;
        }

        printf("Case %d: %d = ",i,x);

        for(int j=0;j<v1.size();j++)
        {
            printf("%d (%d)",v[j],v1[j]);
            if(j!=v1.size()-1) printf(" * ");
        }

        printf("\n");

    }

   return 0;
}
