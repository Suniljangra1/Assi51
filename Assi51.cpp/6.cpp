// emplace() Function
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_multiset<int> m;
    m.insert(5);
    m.insert(6);
    m.insert(16);
    m.insert(61);
    m.insert(54);
    m.insert(63);
    // without emplace function
    for(auto it: m)
    {
        cout<<it<<" ";
    }
    cout<<"\n";
    // emplace function
    m.emplace(56);
    for(auto it: m)
    {
        cout<<it<<" ";
    }
}