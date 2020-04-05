//My Solution to Vestigium problem
// https://codingcompetitions.withgoogle.com/codejam/round/000000000019fd27/000000000020993c


#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,te;
    cin>>t;
    te = t;
    vector<int>row;
    vector<int>col;
    vector<int>trace;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n][n];
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<n;j++)
            {
                cin>>arr[i][j];
            }
        }
        int k=0;
        for(int i = 0;i<n;i++)
        {
            k+=arr[i][i];
        }

        unordered_map<int,int>freq;
        int r=0;
        for(int i = 0;i<n;i++)
        {
            freq.clear();
            for(int j = 0;j<n;j++)
            {

                freq[arr[i][j]]++;
                if(freq[arr[i][j]]>1)
                {
                    r++;
                    break;
                }
            }
        }

        int c=0;
        for(int i = 0;i<n;i++)
        {
            freq.clear();
            for(int j = 0;j<n;j++)
            {

                freq[arr[j][i]]++;
                if(freq[arr[j][i]]>1)
                {
                    c++;
                    break;
                }
            }
        }
        row.push_back(r);
        col.push_back(c);
        trace.push_back(k);
    }
    for(int i = 0;i<te;i++)
    {
        cout<<"Case #"<<i+1<<": "<<trace[i]<<" "<<row[i]<<" "<<col[i]<<endl;
    }

}
