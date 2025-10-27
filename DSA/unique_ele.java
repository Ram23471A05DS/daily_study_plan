import java.util.ArrayList;
class unique_ele{
    public static void main(String[] args) {
        int arr[]={1,1,2,3,3,3,4};
        ArrayList<Integer>res=new ArrayList<>();

       res.add(arr[arr.length-1]);
       for(int i=arr.length-2;i>=0;i--){
        if(arr[i]!=arr[i+1]) res.add(arr[i]);
       }

    System.out.print(res);


    }
}