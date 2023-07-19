import java.util.*;
class Main {
  public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
	  String s=sc.nextLine();
	  String arr[]=s.split(" ");
	  int m=0;
	  String p=" ";
	  for(String i:arr){
		  m=Math.max(m,i.length());
		  p=i;
	  }
	  System.out.println("So the longest word is "+p+" of length "+m);
  }
}
