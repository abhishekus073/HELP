//10. Write a program to implement Thread Priority
class X extends Thread{
    public void run() {
        System.out.println("Thread X Started");
        for(int i=1;i<5;i++) {
            System.out.println("Thread X :i="+i);
        }
        System.out.println("Exit from Thread A");
    }
}
class Y extends Thread{
    public void run() {
        System.out.println("Thread Y Started");
        for(int i=1;i<5;i++) {
            System.out.println("Thread Y :i="+i);
        }
        System.out.println("Exit from Thread B");
    }
}
class Z extends Thread{
    public void run() {
        System.out.println("Thread Z Started");
        for(int i=1;i<5;i++) {
            System.out.println("Thread Z :i="+i);
        }
        System.out.println("Exit from Thread C");
    }
}
class Lab_10 {
    public static void main(String[] arf) {
        X Threadx = new X();
        Y Thready = new Y();
        Z Threadz = new Z();
        Threadx.setPriority(Thread.NORM_PRIORITY);
        Thready.setPriority(Thread.MAX_PRIORITY);
        Threadz.setPriority(Thread.MIN_PRIORITY);
        System.out.println("Start THread X");
        Threadx.start();
        System.out.println("Start THread Y");
        Thready.start();
        System.out.println("Start THread Z");
        Threadz.start();
    }
}