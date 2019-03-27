/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   13.02.19   |
/----------------------*/

#include<bits/stdc++.h>
#define mx 1000
#define endl "\n"
using namespace std;


string s1,s2;
int len_s1,len_s2;
string str[200][200];


string lcs()
{
    for(int i=1;i<=len_s1;i++)
    {
        for(int j=1;j<=len_s2;j++)
        {
            if(s1[i-1]==s2[j-1]) str[i][j] = str[i-1][j-1] + s1[i-1];
            else if(str[i-1][j].size() == str[i][j-1].size()) str[i][j]=min(str[i-1][j],str[i][j-1]);
            else str[i][j] = max(str[i - 1][j],str[i][j - 1]);
        }
    }

    return str[len_s1][len_s2];
}


int main()
{
    int tc;
    cin >> tc;

    for(int i=1;i<=tc;++i)
    {
        cin >> s1 >> s2;
        len_s1=s1.size();
        len_s2=s2.size();

        for(int ii = 0; ii<200; ++ii) for(int j = 0; j<200; ++j) str[ii][j] = "";

        string s = lcs();

        cout << "Case " << i << ": ";

        if(s.empty()) printf(":(");
        else cout << s;

        cout << endl;
    }

    return 0;
}



