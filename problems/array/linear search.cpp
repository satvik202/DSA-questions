int linearSearch(int *arr, int n, int x)
{
    //Write your code here
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==x)
            return i;
    }
    return -1;
}