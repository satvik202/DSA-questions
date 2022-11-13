#include <iostream>
using namespace std;

void merge(int arr[],int start,int end){
	int mid= (start+end)/2;
	int len1= mid-start+1;
	int len2= end-mid;
	int first[len1];
	int sec[len2];
	int k=start;
	for(int i=0;i<len1;i++){
		first[i]=arr[k++];
	}
	k=mid+1;
	for(int i=0;i<len2;i++){
		sec[i]=arr[k++];
	}
	int index1=0;
	int index2=0;
	k=start;
	while(index1<len1 && index2<len2){
		if(first[index1]>sec[index2]){
			arr[k++]=sec[index2++];
		}
		else{
			arr[k++]=first[index1++];
		}
	}
	while(index1<len1){
		arr[k++]=first[index1++];
	}
	while(index2<len2){
		arr[k++]=sec[index2++];
	}

}
void mergesort(int arr[], int start,int end){
	if(start>=end)
	return;
	int mid=(start+end)/2;
	mergesort(arr,start,mid);
	mergesort(arr,mid+1,end);
	merge(arr,start,end);

}




void mergeSort(int arr[], int size){
	// Write your code here
	mergesort(arr,0,size-1);
        
}


int main() {
  int length;
  cin >> length;
  int* input = new int[length];
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}