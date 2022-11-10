#include <iostream>
using namespace std;

// Change in the given string itself. So no need to return or print anything
void solve(char arr[], int start, int len){
    if(len==0 || len==1){
        return;
    }
    if(arr[start]=='p' && arr[start+1]=='i'){
        for(int i=len; i>=2; i--){
            arr[i+2]=arr[i];
        }
        arr[start]='3';
        arr[start+1]='.';
        arr[start+2]='1';
        arr[start+3]='4';
        len=len+2;
    }
    solve(arr+1, start, len-1);
}


void replacePi(char input[]) {
	// Write your code here
	int len=0;
	for(int i=0;input[i]!='\0';i++)
	len++;
	solve(input, 0,len);
	

}

int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}
