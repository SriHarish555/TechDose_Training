class SelectionSort{

    static private void sort(int [] arr){
        int len=arr.length;

        for(int i=0;i<len;i++){
            int left=i;
            for(int z=i+1;z<len;z++){
                if(arr[left]>arr[z]){
                    left=z;
                }
            }
            int t=arr[i];
            arr[i]=arr[left];
            arr[left]=t;
        }
    
    }
    public static void main(String[] args) {
        int []arr={1,0,9,55,6,2,5};
        sort(arr);
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
    }
}