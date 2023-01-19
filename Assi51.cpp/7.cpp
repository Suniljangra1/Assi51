// find function
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_multiset<int> s={6,4,2,7,3,3,1,1,1};
    if(s.find(10)!=s.end())
    {
        cout<<"Element founded ";
    }
    else 
    cout<<"Element not found ";
}