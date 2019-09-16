public class Cat{
 
    private String name;
    private int age;
    
    public Cat(String n, int a){
        name = n;
        age = a;
    }
    public int getAge(){
        return age;
    }
    public String getName(){
        return name;
    }
    public void incrementAge(){
        age = age+1;
    }
}
