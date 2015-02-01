/**************************************************
 *
 * Matthew Page
 * 01/28/2015
 * CSCS2330S15
 *
 * javaargs.java  -command line arguments in java
 *
 *************************************************/

class javaargs {
    public static void main (String[] args) {
        if (args.length < 1) {
            System.out.println("There were no arguments passed to this program");
        } else {
            System.out.println("The first argument was " + args[0] );
        }
    }
}
