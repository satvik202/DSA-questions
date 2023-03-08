void arrange(int *arr, int n)
{
    //Write your code here
    int i,j,m=1,x;
    if(n%2==0){
        x=n;
    }
    else
        x= n-1;
    for(i=0;i<n;i++){
        if(i<(n+1)/2){
            arr[i]=m;
            m=m+2;
        }
        else{
            arr[i]=x;
            x=x-2;
        }
    }
        
}