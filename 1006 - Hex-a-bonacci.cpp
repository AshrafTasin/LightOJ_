#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;

    for(int i=0;i<a.length();i++)
    {
        if(a[i]=='1' && a[i+1]=='1'&& a[i+2]=='1'&& a[i+3]=='1'&& a[i+4]=='1'&& a[i+5]=='1'&& a[i+6]=='1') return (cout << "YES" << endl,0);
        else if(a[i]=='0' && a[i+1]=='0'&& a[i+2]=='0' && a[i+3]=='0'&& a[i+4]=='0'&& a[i+5]=='0'&& a[i+6]=='0') return (cout << "YES" << endl,0);
    }

    cout << "NO" << endl;

    return 0;

}
