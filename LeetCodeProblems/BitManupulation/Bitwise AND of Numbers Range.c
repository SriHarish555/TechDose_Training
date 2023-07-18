int rangeBitwiseAnd(int left, int right){
    int t1=left,t2=right,count=0;
    while(t1!=t2)
    {
        t1=t1>>1;
        t2=t2>>1;
        count++;
    }
    return t1<<count;
}