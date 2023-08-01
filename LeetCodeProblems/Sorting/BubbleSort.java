public class BubbleSort {
    private static void sort(int []arr){
        int len=arr.length;
        Boolean swap=false;
        for(int i=0;i<len-1;i++){
            swap=false;
            for(int z=0;z<len-i-1;z++){
                if(arr[z]>arr[z+1]){
                    swap=true;
                    int t=arr[z];
                    arr[z]=arr[z+1];
                    arr[z+1]=t;
                }
            }
            if(!swap){
                break;
            }
        }
    }
    public static void main(String[] args) {
        int []arr={99,100,4,1,55,3,1};
        sort(arr);
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
    }
    
}
