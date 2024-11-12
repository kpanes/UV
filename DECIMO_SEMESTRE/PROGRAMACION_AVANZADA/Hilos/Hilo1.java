

public class Hilo1 extends Thread {


    public Hilo1 (String xnombre){
      super(xnombre);
    }


    public void run(){

        for (int i=0; i <=100 ; i ++){

          try{
          System.out.println("numero" + i + Thread.currentThread().getName());

          Thread.sleep(10);
        } catch (InterruptedException e ){
          System.out.println(e.getMessage());
        }

        }


    }


}
