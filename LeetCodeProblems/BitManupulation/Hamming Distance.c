int hammingDistance(int x, int y){
    int count=0;
        while(x>0||y>0){
            
            if((x&1)!=(y&1)){
                count++;
            }
            if(x>0){
                x=x>>1;
            }
            if(y>0){
                y=y>>1;
            }
        }
        return count;  
}