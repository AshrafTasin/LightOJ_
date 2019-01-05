/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   17.09.18   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define M it=m.begin(),it!=m.end(),it++
#define db double
#define mx 1000010
#define show for(int i=0;i<v.size();i++) cout << v[i] << " ";
using namespace std;



int main()
{
    int tc;
    cin >> tc;
    ll j,sz,b,d;
    string a;

    for (int i=1;i<=tc;i++)
    {
        cin >> a;
        cin >> b;
        d=0;

        if (a[0]=='-') j=1;
        else j=0;

        sz=a.length();
        for (;j<sz;j++)
        {
            d=d*10+(a[j]-'0');
            d=d%b;
        }

        cout << "Case " << i << ": ";
        if (d!=0) cout << "not divisible" << endl;
        else cout << "divisible" << endl;

    }


    return 0;
}
