#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    vector<int> s;
    int value;
    for (int i = 0; i < 10; i++)
    {
        /* code */
        cin>>value;
        s.push_back(value);
    }
    sort(s.begin(),s.end());
    cout<<"Sorted order\n";
    for(auto a:s)
    {
        
        cout<<a<<" ";
    }
    cout<<"\n";
    random_shuffle(s.begin(),s.end());
    cout<<"Random order\n";
    for(auto a:s)
    {
        
        cout<<a<<" ";
    }
    cout<<"\n";
    reverse(s.begin(),s.end());
    cout<<"reversed order\n";
    for(auto a:s)
    {
        
        cout<<a<<" ";
    }
    cout<<"\n";
    sort(s.rbegin(),s.rend());
    cout<<"Reverse sorted order\n";
    for(auto a:s)
    {
        
        cout<<a<<" ";
    }

    return 0;
}