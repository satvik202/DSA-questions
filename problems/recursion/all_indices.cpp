#include<iostream>
using namespace std;

/*Given an array of length N and an integer x, you need to find all the indexes where x is present in the input array.
Save all the indexes in an array (in increasing order).
Do this recursively. Indexing in the array starts from 0.*/

int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    int *output = new int[n];
    
    int size = allIndexes(input, n, x, output);
    for(int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }
    
    delete [] input;
    
    delete [] output;
    

}

void findindexes(int input[], int currindx, int size, int x, int output[], int &k){
if(currindx==size){
  return;
}
if(input[currindx]==x){
  output[k]=currindx;
  k++;
}
findindexes(input, currindx+1, size, x, output, k);


}
int allIndexes(int input[], int size, int x, int output[]) {
  
  int k=0;
  findindexes(input, 0,size, x, output, k);
  return k;
}
