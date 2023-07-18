/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decode(int* encoded, int encodedSize, int* returnSize){
    int x=0,t=0;
    for(int i=0;i<encodedSize;i+=2)
    {
        x^=encoded[i];
    }
    for(int i=1;i<=encodedSize+1;i++)
    {
        t^=i;
    }
    int *arr=(int*)malloc(sizeof(int)*encodedSize+10);
    int ele=x^t;
    arr[encodedSize]=ele;
    for(int i=encodedSize-1;i>=0;i--)
    {
        arr[i]=encoded[i]^ele;
        ele=arr[i];
    }
    *returnSize=encodedSize+1;
    return arr;

}