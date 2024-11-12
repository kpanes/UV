public class Principal {

  public static void main (String arg[]){

    /*Hilo1 h1 = new Hilo1(" ->hilo 1");
    Hilo2 h2 = new Hilo2(" ->hilo 2");
    h1.start();
    h2.start(); */


    Hilo3 h3 = new Hilo3();
    Hilo4 h4 = new Hilo4();

    Thread t1 = new Thread(h3," Runnable 1");
    Thread t2 = new Thread(h4," Runnable 2");

    t1.start();
    t2.start();

    char n = 64;
    System.out.println(n);

  }


}
