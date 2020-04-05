// MY SOLUTION TO NESTING DEPTH PROBLEM
// https://codingcompetitions.withgoogle.com/codejam/round/000000000019fd27/0000000000209a9f

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,te;
    cin>>t;
    te = 0;
    string res;
	getline(cin, res);
    while(t--)
    {
        string s;
		getline(cin, s);
        int n = s.length();
        vector<int>temp(n,0);
        for(int i = 0;i<n;i++)
        {
            temp[i] = int(s[i]) - 48;
        }

        string ans("");
        int rem = 0;
        for(int i =0;i<n;i++)
        {
            if(temp[i]==0)
            {
                ans+=s[i];
            }
            if(temp[i]>0)
            {
                for(int k=0;k<temp[i];k++)
                {
                    ans+='(';
                }
                ans+=s[i];
                int tmp =temp[i];
                for (int j = i; j < n; j++)
					temp[j] -= tmp;
				rem += tmp;
            }
            if (temp[i] < 0)
			{
				for (int j = 0; j < -temp[i]; j++)
					ans += ')';
				ans += s[i];
				int shift = temp[i];
				for (int j = i; j < n; j++)
					temp[j] -= shift;
				rem += shift;
			}
        }
        for (int j = 0; j < rem; j++)
			ans += ')';

		cout << "Case #" << te + 1 << ": " << ans << endl;
		te++;
    }
}


// SANGEETA JHA
