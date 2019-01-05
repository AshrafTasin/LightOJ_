/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   05.01.19   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define M it=m.begin(),it!=m.end(),it++
#define flash ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define db double
#define endl "\n"
#define mnm pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>
#define show for(int i=0;i<v.size();i++) cout << v[i] << " ";
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


int main()
{
    int tc;
    cin >> tc;

    for(int i=1;i<=tc;i++)
    {
        cout << "Case " << i << ":" << endl;
        stack<string> s1,s2;

        s1.push("http://www.lightoj.com/");

        string x;
        while(cin >> x)
        {
            if(x=="QUIT") break;

            else if(x=="VISIT")
            {
                string s;
                cin >> s;
                cout << s << endl;
                s1.push(s);

                while(!s2.empty()) s2.pop();
            }

            else if(x=="BACK")
            {
                if(s1.size()==1) cout << "Ignored" << endl;
                else
                {
                    s2.push(s1.top());
                    s1.pop();
                    cout << s1.top() << endl;
                }
            }

            else if(x=="FORWARD")
            {
                if(s2.empty()) cout << "Ignored" << endl;
                else
                {
                    s1.push(s2.top());
                    s2.pop();
                    cout << s1.top() << endl;
                    //s2.pop();
                }
            }
        }

    }
}
