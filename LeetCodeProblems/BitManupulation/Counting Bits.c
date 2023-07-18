/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize){

    int *arr=(int*)calloc(sizeof(int),n+2);
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",arr[i/2]+1);
            arr[i]=arr[i/2]+1;
        }
        else
        {
            printf("%d ",arr[i/2]);
            arr[i]=arr[i/2];
        }
    }
    *returnSize=n+1;
    return arr;


}