import java.util.Scanner;

public class begin{

  public static void main (String[]args){
    //Data types, I'm not sure if you wanted to print anything
    System.out.println("Hi");
    String a = "This is a string";
    int b = 4;
    double c = 4.32;
    boolean d = false;
    int [] array1 = {1,2,3,4,5};
    int [][] array2 = {{1,2,3},{4,5,6},{7,8,9}};

    //Not sure if you want to teach this on the first day. 
    //Getting input in Java means you have to import stuff;
    Scanner scan = new Scanner(System.in);

    System.out.println("Enter your string:");
    String e = scan.nextLine();
    System.out.println(e);

    //if statements (not taking user input)

    int number = 5;
    if(number>3){
      System.out.println("The number is greater than 3");
    }
    else{
      System.out.println("The number is less than 3");
    }

    //loops
    int numberOfTimes =5;
    for(int i = 0;i<numberOfTimes;i++){
      System.out.println(i);
    }
    //functions
    System.out.println(multiply(5,6));
    }
    
  public static int multiply(int l, int m){
    return l*m;
  }
  }

