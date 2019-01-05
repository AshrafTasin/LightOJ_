#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;++i)
    {
        long long int a,b,c;
        scanf("%lld%lld%lld",&a,&b,&c);
        if((a*a==b*b+c*c) || (b*b==a*a+c*c) || (c*c==b*b+a*a)) printf("Case %d: yes\n",i);
        else printf("Case %d: no\n",i);
    }


    return 0;

}
