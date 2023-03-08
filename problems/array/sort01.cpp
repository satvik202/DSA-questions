void sortZeroesAndOne(int *input, int size)
{
    int i=0,j= size-1;
    while(i<j){
        while(input[i]==0 && i<j)
            i++;
        while(input[j]==1 && j>i)
            j--;
        if(i<j){
            input[i]=0;
            input[j]=1;
            i++;
            j--;
        }
    }
}