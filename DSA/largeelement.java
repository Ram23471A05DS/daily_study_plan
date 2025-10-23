class largeelement{
    public static void main(String []args){
        
        int arr[]={1,2,3,4,5,6};
        for(int i=arr.length-1;i>arr.length/2;i--){
            int temp=arr[i];
            arr[i]=arr[arr.length-i-1];
            arr[arr.length-i-1]=temp;
        }
        for(int i=0;i<6;i++)
        System.out.println(arr[i]);

        
    }
}