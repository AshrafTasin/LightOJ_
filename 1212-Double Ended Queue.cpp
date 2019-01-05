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
        deque<int> dq;
        int sz,cmd;
        cin >> sz >> cmd;

        while(cmd--)
        {
            string a;
            cin >> a;

            if(a=="pushLeft")
            {
                int x;
                cin >> x;

                if(dq.size()==sz) cout << "The queue is full" << endl;

                else
                {
                    dq.push_front(x);
                    cout << "Pushed in left: " << x << endl;
                }
            }

            else if(a=="pushRight")
            {
                int x;
                cin >> x;

                if(dq.size()==sz) cout << "The queue is full" << endl;

                else
                {
                    dq.push_back(x);
                    cout << "Pushed in right: " << x << endl;
                }
            }

            else if(a=="popLeft")
            {
                if(dq.size()==0) cout << "The queue is empty" << endl;

                else
                {
                    cout << "Popped from left: " << dq.front() << endl;
                    dq.pop_front();
                }
            }

            else if(a=="popRight")
            {
                if(dq.size()==0) cout << "The queue is empty" << endl;

                else
                {
                    cout << "Popped from right: " << dq.back() << endl;
                    dq.pop_back();
                }
            }
        }
    }
}
