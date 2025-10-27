class frequency_of_char{
    public static void main(String[] args) {
        String str="aabababdfbchfdbdbkjkdnd"; 

        int arr[]=new int[26];
 
        for(int i=0;i<str.length();i++){
            arr[str.charAt(i)-'a']=arr[str.charAt(i)-'a']+1;
        }
        for(int i=0;i<26;i++){
            System.out.println((char)('a'+i)+"="+arr[i]);
        }

      
       
    }
}