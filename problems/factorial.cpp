#include <iostream>

using namespace std;
// finding factorial using recursion

int fact(int n){
    if(n==1|| n==0)
    return 1;
    else{
        return n*fact(n-1);
    }
}

int main()
{
    int n;
    cin>>n;
    int ans= fact(n);
    cout<<ans<<endl;
    
    return 0;
}