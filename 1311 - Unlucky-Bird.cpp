#include<bits/stdc++.h>
using namespace std;

int main()
{
    double v1,v2,v3,a1,a2,t1,t2,d,a;
    int n;

    cin >> n;

    for(int i=1;i<=n;i++)
    {
        cin >> v1 >> v2 >> v3 >> a1 >> a2;
        t1=v1/a1;
        t2=v2/a2;
        a=max(t1,t2)*v3;
        d=(v1*t1-.5*a1*t1*t1)+(v2*t2-.5*a2*t2*t2);

        cout << "Case " << i << ": " << fixed << setprecision(9) << d << " " << fixed << setprecision(9) << a << endl;
    }

    return 0;
}
