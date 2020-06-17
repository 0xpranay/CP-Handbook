#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    vector<tuple<int,int,int>> v;
    int n,a,b,c;
    tuple<int,int,int> t;
    cout<<"Enter number of tuples\n";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<"Enter "<<i<<"th Tuple\n";
        cin>>a>>b>>c;
        t=make_tuple(a,b,c);
        v.push_back(t);
    }
    for(auto i:v)
    {
        cout<<get<0>(i)<<" "<<get<1>(i)<<" "<<get<2>(i)<<endl;
    }
    
    
    
    
    return 0;
}