#include<iostream>
using namespace std;
/*Given an array of length N and an integer x, you need to find and return the first index of integer x present in the array.
 Return -1 if it is not present in the array.
First index means, the index of first occurrence of x in the input array.
Do this recursively. Indexing in the array starts from 0.*/
int a=0;
int firstIndex(int arr[], int n, int x) {
  if(n==0)
  return -1;
  else if(arr[0]==x){
    return a;
  }
  else{
    a++;
    return firstIndex(arr+1,n-1, x);
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
    
    cout << firstIndex(input, n, x) << endl;

}


