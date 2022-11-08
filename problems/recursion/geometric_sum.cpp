#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
/*1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k) */


double geometricSum(int k) {
    if(k==0){
        return 1;
    }
    double ans= geometricSum(k-1);
    return 1/pow(2,k) +ans;
}

int main() {
    int k;
    cin >> k;
    cout << fixed << setprecision(5);
    cout << geometricSum(k) << endl;   
}
