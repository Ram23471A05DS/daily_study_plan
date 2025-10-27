import java.util.ArrayList;
import java.util.Arrays;
class arraylist{
    public static void main(String[] args) {

  ArrayList<Integer>name=new ArrayList<>();
  name.addAll(Arrays.asList(1,2,3,4,5,6));
  name.add(1);
  name.add(2);
  name.add(3);
  name.set(1,55);
  name.remove(1);
  name.add(1,77);
  name.remove(2);
  System.out.print(name);
  System.out.println(name.get(0));
  System.out.println(name.isEmpty());
  System.out.println(name.size());


    }
}