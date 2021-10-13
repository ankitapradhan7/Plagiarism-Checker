#include <iostream>

using namespace std;

int main()
{
    int n1,n2,res=1;
    cin>>n1>>n2;
    
    for(int i=0;i<n2;i++)
    {
        res = res*n1;
    }
    
    
    for(int i=0;i<n2;i++)
    {
        res = res*n1;
    }
    
    cout<<res;
    return 0;
}