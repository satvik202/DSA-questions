#include <iostream>
using namespace std;

// Change in the given string itself. So no need to return or print anything

void solve(char arr[], int start) {
    if(arr[start]=='\0')
    return;
    if(arr[start]=='x'){
        int i=start;
        while(arr[i]!='\0'){
            arr[i]=arr[i+1];
            i++;
        }
        if(arr[start]=='x')
        start=start-1;
    }
    solve(arr, start+1);
}

void removeX(char input[]) {
    // Write your code here
    solve(input,0);
}


int main() {
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}
