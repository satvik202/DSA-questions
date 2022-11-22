#include <iostream>
#include <algorithm>
using namespace std;

int pairSum(int *a, int n, int k)
{
	//Write your code here
	sort(a,a+n);
  int i=0,j=n-1,count=0;
  while(i<j){
    if (a[i] == a[j] && a[i] + a[j] == k) {
      int c=0;
      for (int m = j; m >= i; m--) {
        if(a[m]==a[j])
        c++;
      }
      for(int x=c-1;x>0;x--){
        count+=x;
      }
      return count;
    }
     else if (a[i] + a[j] == k) {
      int counti = 1, countj = 1;
      for (int x = i + 1;; x++) {
        if (a[x] == a[i])
          counti++;
        else
          break;
      }
      for (int x = j - 1;; x--) {
        if (a[x] == a[j])
          countj++;
        else
          break;
      }
      count = count + counti * countj;
      i = i + counti;
      j = j - countj;
    } else if (a[i] + a[j] > k) {
      j--;
    } else
      i++;
    }
  return count;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int size;
		int x;
		cin >> size;
		int *input = new int[size];
		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}
		cin >> x;
		cout << pairSum(input, size, x) << endl;
		delete[] input;
	}	
	return 0;
}