/**************************************************
 *
 * Matthew Page
 * 01/28/2015
 * CSCS2330S15
 *
 * loop.java  -loops in java
 *
 *************************************************/

class loop {
    public static void main (String[] args) {
        for (Integer i=0; i<args.length; i++) {
            System.out.println("Argument " + i + ": " + args[i]);
        }
    }
}
