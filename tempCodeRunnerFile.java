class largeelement{
    public static void main(String []args){
        int []arr={13,45,1,23,45,34,56,11};
        int max=arr[0];
        for(int i=0;i<arr.length;i++){
            if(arr[i]>max){
                max=arr[i];
            }
        
        }
        System.out.println(max);
    }
}