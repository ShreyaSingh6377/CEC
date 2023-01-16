//Shreya Singh Raghuvanshi
//CST_SPL1
//2017038
#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        int i,j,temp,pos,maxi=0;
        for(i=0;i<n;i++)
        {
            pos=i;
            for(j=i+1;j<n;j++)
            {
                if(end[j]<end[pos])
                {
                    pos=j;
                }
            }
            if(i!=pos)
            {
                temp=end[i];
                end[i]=end[pos];
                end[pos]=temp;
                
                temp=start[i];
                start[i]=start[pos];
                start[pos]=temp;
            }
        }
        i=-1;
        for(j=0;j<n;j++)
        {
            if(start[j]>i)
            {
                i=end[j];
                maxi++;
                
            }
            
        }
        return maxi;
    }
};
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> start(n), end(n);
        cout<<"start values"<<endl;
        for(int i=0;i<n;i++)
            cin>>start[i];
            cout<<"finish values"<<endl;
        for(int i=0;i<n;i++)
            cin>>end[i];
        Solution ob;
        //function call
        cout<<"answer"<<endl;
        cout << ob.activitySelection(start, end, n) << endl;
    }
    return 0;
}

