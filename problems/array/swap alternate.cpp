void swapAlternate(int *arr, int size)
{
    int i=0;
    for(i=0;i<size-1;i=i+2){
        int temp= arr[i];
        arr[i]= arr[i+1];
        arr[i+1]= temp;
    }
}