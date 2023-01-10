// Randomword.java
// javac -cp algs4.jar Randomword.java
// java -cp algs4.jar:. Randomword


import edu.princeton.cs.algs4.StdIn;
import edu.princeton.cs.algs4.StdOut;
import edu.princeton.cs.algs4.StdRandom;

class Randomword
{
  public static void main(String args[])
  {
    // StdOut.println("hello");
    Integer cnt = 0;
    String word = "";
    while (!StdIn.isEmpty()) {
      String str = StdIn.readString();
      cnt++;
      double p = 1.0 / cnt;
      if (StdRandom.bernoulli(p)) {
        // StdOut.println("String = " + str);
        word = str;
      }
    }
    StdOut.println(word);
  }
}
