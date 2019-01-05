#include<stdio.h>
#include<math.h>
#define pi 2 * acos (0.0)

int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        double a;
        scanf("%lf",&a);
        a=4*a*a-pi*a*a;
        printf("Case %d: %.2lf\n",i,a);
    }

    return 0;

}
