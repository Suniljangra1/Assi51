// load Factor
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_multiset<int> k;
    k.insert(5);
    k.insert(36);
    k.insert(58);
    k.insert(45);
    k.insert(78);
    // This function is give the load of unordered multiset
    cout<<"current load factor is "<<k.load_factor();
}