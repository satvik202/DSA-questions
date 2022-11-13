#include <iostream>
using namespace std;

// Change in the given string itself. So no need to return or print the changed string.
void solve(char arr[], int start, int end){
    if(arr[start]=='\0' || arr[start+1]=='\0')
    return;
    if(arr[start]==arr[start+1]){
        int i;
        for(i=end;i>=start+1;i--){
            arr[i+1]=arr[i];
        }
        arr[1]='*';
        end++;
    }
    solve(arr+1,start,end-1);
}
void pairStar(char input[]) {
    // Write your code here
    int len=0;
    for(int i=0;input[i]!='\0';i++)
    len++;
    solve(input,0,len);

}


int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}
