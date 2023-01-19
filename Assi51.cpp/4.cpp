// swap data one to another multiset
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_multiset<int> k;
    k.insert(15);
    k.insert(65);
    k.insert(55);
    k.insert(35);
    k.insert(98);
    k.insert(78);
    unordered_multiset<int> m;
    m.insert(45);
    m.insert(8);
    m.insert(47);
    m.insert(23);
    m.insert(12);
    m.insert(25);
    m.swap(k);
    for(auto it: m)
    {
        cout<<it<<" ";
    }

}