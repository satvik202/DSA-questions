#include <bits/stdc++.h>
using namespace std;
void intersection(int *input1, int *input2, int size1, int size2)
{
    int count;
    
    for(int i=0;i<size1;i++){
        int a= input1[i];
        count=0;
        for(int j=0;j<size2;j++){
            if(a==input2[j]){
                count=1;
                input2[j]= -10000000;
                break;
            }
        }
        if(count==1){
            cout<<input1[i]<<" ";
        }
    }
}