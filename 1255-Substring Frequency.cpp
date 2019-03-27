/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   25.03.19   |
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

char tar[1100000];
char pat[1100000];
int table[1100000];


void piTable(char *pat)
{
    int sz=strlen(pat);
    int j;
    table[0]=-1;

    for(int i=1;i<=sz;++i)
    {
        j=table[i-1];

        while(j>=0)
        {
            if(pat[j]==pat[i-1]) break;
            else j=table[j];
        }

        table[i]=j+1;
    }
}


int kmp(char *tar,char *pat)
{
    int n=strlen(tar);
    int m=strlen(pat);

    piTable(pat);

    int i=0,j=0,cnt=0;

    while(i<n)
    {
        while(j>=0 and tar[i]!=pat[j]) j=table[j];

        i++;
        j++;

        if(j==m)
        {
            ++cnt;
            j=table[j];
        }
     }

    return cnt;
}



int main()
{
    flash

    int tc;
    scanf("%d",&tc);

    for(int i=1;i<=tc;++i)
    {
        scanf("%s %s",tar,pat);
        printf("Case %d: %d\n",i,kmp(tar,pat));
    }

    return 0;
}
