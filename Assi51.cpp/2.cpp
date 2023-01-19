// Delete all copies from an unordered_multiset.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_multiset<int> m={6,4,2,7,3,3,1,1,1};
    unordered_set<int>s;
    // Before 
    for(auto it : m)
    {
        s.insert(it);
        cout<<it<<" ";
    }
    cout<<"\n";
    // After 
    for(auto i:s)
    {
        cout<<i<<" ";
    }
    
}