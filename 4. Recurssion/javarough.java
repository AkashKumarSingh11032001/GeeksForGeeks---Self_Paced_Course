import java.util.Scanner;

public class MyClass {
    public static void main(String args[]) {
      Scanner scn = new Scanner(System.in);
	  int n = scn.nextInt();
	  
	  if(n == 1){
	      System.out.print("1");
	  }
	  
	  for(int i = 1; i < n; i++){
	      System.out.print(" ");
	  }
	  
	  System.out.print("1");
	  System.out.println();
	  
	  //upper
	  
	  for(int i = 2; i <= (n + 1) / 2; i++){
	      for(int j = 1; j <= n - (2 * i - 1); j++){
	          System.out.print(" ");
	      }
	      
	      for(int j = 1; j >= 1; j--){
	          System.out.print(j);
	          System.out.print(" ");
	      }
	      
	      for(int j = 1; j <= 2 * (i - 1) - 1; j++){
	          System.out.print(" ");
	      }
	      
	      for(int j = 1; j < i + 1; j++){
	          System.out.print(j);
	          System.out.print(" ");
	      }
	      
	      System.out.println();
	  }
	  
	  //lower
	  for(int i = 1; i < (n - 1) / 2; i++){
	      for(int j =  1; j < 2 * i; j++){
	          System.out.print(" ");
	      }
	      
	      int k = (n - 1)/2;
	      for(int j = (k - i) + 1; j >= 1; j--){
	          System.out.print(j);
	          System.out.print(" ");
	      }
	      
	      for(int j = n / 2 + 1; j >= 2 * i; j--){
	          System.out.print(" ");
	      }
	      
	      for(int j = 1; j <= (k - i) + 1; j++){
	          System.out.print(j);
	          System.out.print(" ");
	      }
	      
	      System.out.println();
	      
	  }
	  
	  for(int i = 1; i < n; i++){
	      System.out.print(" ");
	  }
	  
	  System.out.print("1");
	  System.out.println();
	  
	  
    }
}