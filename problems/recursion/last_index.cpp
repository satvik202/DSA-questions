#include<iostream>
using namespace std;
/*Given an array of length N and an integer x, you need to find and return the last index of integer x present in the array. 
Return -1 if it is not present in the array.
Last index means - if x is present multiple times in the array, return the index at which x comes last in the array.
You should start traversing your array from 0, not from (N - 1).
Do this recursively. Indexing in the array starts from 0.*/
int lastIndex(int arr[], int n, int x) {
  if(n==0){
    return -1;
  }
  else if(arr[n-1]==x){
    return n-1;
  }
  else{
    int ans= lastIndex(arr,n-1, x);
    return ans;
  }

}


int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    cout << lastIndex(input, n, x) << endl;

}