class arraysorting{
    public static void main(String []args){
        int arr[]={1,2,7,40,5};
        int oddsum=0;
        int evensum=0;
        for(int i=0;i<5;i++){
            if(i%2==1){
                oddsum=oddsum+arr[i];

            }
            else{
               evensum=evensum+arr[i]; 
            }
        }
        
        System.out.println(evensum);
        System.out.println(oddsum);


    }

}     
