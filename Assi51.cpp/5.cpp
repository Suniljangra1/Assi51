// count Frequency 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[]={6,4,2,7,3,3,1,1,1};
    unordered_multiset<int> m(ar,ar+9);
    int r;
    cout<<"Enter the number for frequency ";
    cin>>r;
    cout<<"Frequency of this number is "<<m.count(r);
   
}