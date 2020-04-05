// MY SOLUTION TO PARENTING PARTNERING PROBLEM
// https://codingcompetitions.withgoogle.com/codejam/round/000000000019fd27/000000000020bdf9

#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,pair<int,int>>i1, pair<int,pair<int,int>>i2)
{
    return (i1.second.first < i2.second.first);
}

int main()
{
    int t;
    cin>>t;
    int te=0;
    while(t--)
    {
        int n;
        cin>>n;
        vector<pair<int,pair<int,int>>>v;
        //unordered_map<int,int>up;
        vector<int>ans;
        for(int i = 0;i<n;i++)
        {
            pair<int,pair<int,int>>p;
            cin>>p.second.first;
            cin>>p.second.second;
            p.first = i;
            //cout<<p.first<< " "<<p.second<<" "<<up[p.second]<<endl;
            v.push_back(p);
        }
        sort(v.begin(),v.end(),compare);
        vector<char>res;
        char arr[n];

        int c_end = 0;
        int j_end = 0;
        int i=0;
        while(i<n)
        {
            if(v[i].second.first<c_end && v[i].second.first<j_end)
            {
                //cout<<"IMPOSSIBLE"<<endl;
                break;
            }

            if(v[i].second.first>=c_end)
            {
                res.push_back('C');
                int index = v[i].first;
                arr[index] = 'C';
                c_end = v[i].second.second;
                i++;
            }

            else{
                res.push_back('J');
                int index = v[i].first;
                arr[index] = 'J';
                j_end = v[i].second.second;
                i++;
            }
        }
        int l =res.size();
        cout<<"Case #"<<te+1<<": ";
        if(l!=n)
        {
            cout<<"IMPOSSIBLE"<<endl;
            te++;
            continue;
        }
        res.push_back('\0');
        for(int i = 0;i<n;i++)
        {
            cout<<arr[i];
        }
        cout<<endl;
        /*for(int i =0;i<res.size();i++)
        {
            cout<<res[i];
        }
        cout<<endl;*/
        te++;
    }
}


// SANGEETA JHA
