
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,next = 0;
    cin>>n>>a;

    vector< int>scores;
    for(int i = 0;i < n;i++)
    {
        cin >> b;
        scores.push_back(b);
    }

    for(int i = 0; i < n;i++)
    {
        if(scores[i] >= scores[a-1] && scores[i]>0)
        {
            next++;
        }
    }
    cout <<next <<endl;

    return 0;
}
