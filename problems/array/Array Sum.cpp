#include<iostream>
using namespace std;

int main(){
    /* Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n;
    cin>>n;
    int sum=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum= sum+arr[i];
    }
    cout<<sum<<endl;
    
}