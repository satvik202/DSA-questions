#include <iostream>
using namespace std;

//You have been given a random integer array/list(ARR) of size N. 
//Write a function that rotates the given array/list by D elements(towards the left).
void rotate(int *arr, int d, int n)
{
    /*int i=1,j;
    while(i<=d){
        int key=arr[0];
        j=1;
        while(j<n){
            arr[j-1]=arr[j];
            j++;
        }
        arr[j-1]=key;
        i++;
    }*/
	int i=0,j=n-1;
    while(i<j){
        int temp= arr[i];
        arr[i]=arr[j];
        arr[j]= temp;
        i++;
        j--;
    }
    i=0,j=n-d-1;
    while(i<j){
        int temp= arr[i];
        arr[i]=arr[j];
        arr[j]= temp;
        i++;
        j--;
    }
    i=n-d,j=n-1;
    while(i<j){
        int temp= arr[i];
        arr[i]=arr[j];
        arr[j]= temp;
        i++;
        j--;
	}
}

int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		int d;
		cin >> d;

		rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		
		delete[] input;
		cout << endl;
	}

	return 0;
}