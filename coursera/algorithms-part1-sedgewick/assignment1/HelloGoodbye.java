// HelloGoodbye.java
// javac HelloGoodbye.java
// java HelloGoodbye

class HelloGoodbye
{
  public static void main(String args[])
  {
    String name0 = "Nobody";
    String name1 = "Noone";
    if (args.length > 0) {
      name0 = args[0];
    }
    if (args.length > 1) {
      name1 = args[1];
    }
    System.out.println("Hello " + name0 + " and " + name1);
    System.out.println("Goodbye " + name1 + " and " + name0);
  }

}
