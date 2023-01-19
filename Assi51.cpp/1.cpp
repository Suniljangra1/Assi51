// unordered multiset 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_multiset<int> u;
    u.insert(10);
    u.insert(20);
    u.insert(30);
    u.insert(40);
    u.insert(50);
    u.insert(60);
    for(auto it : u)
    {
        cout<<it<<" ";
    }
}