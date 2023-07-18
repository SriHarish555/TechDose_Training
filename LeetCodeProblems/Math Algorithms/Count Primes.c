int countPrimes(int n){
    if (n==0||n==0)
    {
        return 0;    
    }
    bool arr[10000000]={false};
    int count=0;
    for (int i=2;i<=sqrt(n);i++)
    {
        if (arr[i]==false){
            for (int z=i*i;z<n;z+=i)
            {
                arr[z]=true;
            }
        }
    }
    for (int i=2;i<n;i++)
    {
        if (arr[i]==false)
        {
            count++;
        }
    }
    return count;
}