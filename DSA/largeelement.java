
class largeelement{
    public static void main(String []args){

       

        
        int arr[]={1,2,3,4,5,6,99};
        // for(int i=arr.length-1;i>arr.length/2;i--){
        //     int temp=arr[i];
        //     arr[i]=arr[arr.length-i-1];
        //     arr[arr.length-i-1]=temp;
        // }

        int p1=0;
        int p2=arr.length-1;
        while(p1<p2){
            int temp=arr[p1];
            arr[p1]=arr[p2];
            arr[p2]=temp;
            p1++;
            p2--;

        }
    for(int i=0;i<arr.length;i++)
        System.out.println(arr[i]);
        
    }
}