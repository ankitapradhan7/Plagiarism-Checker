#include <iostream>

using namespace std;

int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int res=1;
    int i=0;
    while(i<n2){
        res = res*n1;
    }
    
    cout<<res;
    return 0;
}