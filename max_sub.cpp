#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    
    int arr[8]={-2,-3,4,-1,-2,1,5,-3};
    int max_here,total_max=INT16_MIN;
    /*for (int i = 0; i < 8; i++)
    {
        
        cin>>arr[i];
    }*/
    clock_t tstart=clock();
    for (int i = 0; i < 8; i++)
    {  
        max_here+=arr[i];
        if (max_here>total_max)
        {
            /* code */
            total_max=max_here;
        }
        if (max_here<0)
        {
            /* code */
            max_here=0;
        }
    }
    cout<<total_max<<endl;
    cout<<"time taken is "<<fixed<<(double)(clock()-tstart)/CLOCKS_PER_SEC<<setprecision(5);
    
    
}