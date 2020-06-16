#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    vector<int> v;
    int value;
    cout<<"Enter elements\n";
    while (cin>>value && value!=-72)
    {
        v.push_back(value);
        /* code */
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    
    
    sort(v.begin(),v.end());
    for(auto i=v.begin();i!=v.end();++i)
    {
        cout<<*i<<endl;
    }


    
    
    
    
    
    
    
    
    return 0;
}