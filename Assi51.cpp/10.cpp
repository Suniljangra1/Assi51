// reverse function
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_multiset<int> r={5,10,25,50,60};
    for(auto it: r)
    {
        cout<<it<<" ";
    }
    r.reserve(25);
    cout<<" \n";
    for(auto it: r)
    {
        cout<<it<<" ";
    }
}