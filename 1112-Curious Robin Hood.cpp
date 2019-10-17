/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   05.09.19   |
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
#define sfd(a) scanf("%lf",&a);
#define sfdd(a,b) scanf("%lf%lf",&a,&b);
#define sfddd(a,b,c) scanf("%lf%lf%lf",&a,&b,&c);
#define fread freopen("in.txt","r",stdin);
#define fwrite freopen("out.txt","w",stdout);
#define mx 100090
#define pi acos(-1)
using namespace std;

int ar[mx];
int tree[4*mx];
int n,q,z;

void build(int node,int left,int right)
{
    if(left==right)
    {
        tree[node]=ar[left];
        return;
    }

    int mid=(left+right)/2;

    build(node*2,left,mid);
    build(node*2+1,mid+1,right);

    tree[node]=tree[node*2]+tree[node*2+1];
}

void update1(int node,int left,int right,int index)
{
    if(left>index or right<index) return;

    if(left==index and right==index)
    {
        z=tree[node];
        tree[node]=0;
        return;
    }

    int mid=(left+right)/2;

    update1(node*2,left,mid,index);
    update1(node*2+1,mid+1,right,index);

    tree[node]=tree[node*2]+tree[node*2+1];
}

void update2(int node,int left,int right,int index,int val)
{
    if(left>index or right<index) return;

    if(left==index and right==index)
    {
        tree[node]+=val;
        return;
    }

    int mid=(left+right)/2;

    update2(node*2,left,mid,index,val);
    update2(node*2+1,mid+1,right,index,val);

    tree[node]=tree[node*2]+tree[node*2+1];
}

int query(int node,int left,int right,int qleft,int qright)
{
    if(qleft>right or qright<left) return 0;
    
    if(qleft<=left and qright>=right) return tree[node];

    int mid=(left+right)/2;

    int x=query(node*2,left,mid,qleft,qright);
    int y=query(node*2+1,mid+1,right,qleft,qright);

    return x+y;
}

int main()
{
    fread
    fwrite
    flash

    int tc;
    sfi(tc);


    for(int t=1;t<=tc;++t)
    {
        sfii(n,q);

        for(int i=1;i<=n;++i)
        {
            int x;
            sfi(x);
            ar[i]=x;
        }

        build(1,1,n);

        printf("Case %d:\n",t);

        while(q--)
        {
            int x;
            sfi(x);

            if(x==1)
            {
                int y;
                sfi(y);

                update1(1,1,n,y+1);
                printf("%d\n",z);
            }

            else if(x==2)
            {
                int y,z;
                sfii(y,z);

                update2(1,1,n,y+1,z);
            }

            else if(x==3)
            {
                int i,j;
                sfii(i,j);

                printf("%d\n",query(1,1,n,i+1,j+1));
            }
        } 

    }

    return 0;
}