#include <iostream>
using namespace std;


void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}
int partition(int *arr, int start, int end) {

int pivot=arr[start];
int count=0;
for(int i=start+1;i<=end;i++){
	if(pivot>=arr[i])
	count++;
}
swap(&arr[start],&arr[start+count]);
int p= start+count;

int i=start,j=end;
while(i<p && p<j){
        while (arr[p] >= arr[i]) {
          i++;
        }
        while (arr[p] < arr[j]) {
          j--;
        }
        if(i<p && p<j){
			swap(&arr[i],&arr[j]);
			i++;
			j--;
		}
  }
  return p;
}

void Quicksort(int *arr, int start, int end) {
  if (start >= end)
    return;
  int pi = partition(arr, start, end);
  Quicksort(arr, start, pi - 1);
  Quicksort(arr, pi + 1, end);
}

void quickSort(int input[], int size) {
	Quicksort(input, 0, size - 1); 
 }

int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    
    delete [] input;
    return 0;
}
