int findUnique(int *arr, int size)
{
    int a= arr[0];
    for(int i=1;i<size;i++){
        a=a^arr[i];
    }
    return a;
}