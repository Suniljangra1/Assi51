// Bucket_function
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_multiset<int> l;
    l.insert(12);
    l.insert(13);
    l.insert(45);
    l.insert(56);
    l.insert(9);
    //  Return the total number of bucket(container) in unordered multiset
    cout<<"Bucket vlaue is "<<l.bucket_count();
}