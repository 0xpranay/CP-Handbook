#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    
    int arr[8];
    int sum,best;
    for (int i = 0; i < 8; i++)
    {
        /* code */
        cin>>arr[i];
    }
    clock_t tstart=clock();
    for (int i = 0; i < 8; i++)
    {
        for (int j = i; j < 8; j++)
        {
            sum=0;
            for (int k = i; k <=j; k++)
            {
                /* code */
                sum+=arr[k];
            }
            best=max(sum,best);
            
        }
        
    }
    cout<<best;
    cout<<"time taken is "<<fixed<<(double)(clock()-tstart)/CLOCKS_PER_SEC<<setprecision(5);
    
    
}