/**************************************************
 *
 * Matthew Page
 * 01/23/2015
 * CSCS2650
 * 
 * inputoutput.java -   Attempting to write a basic
 *                      input/output program in 
 *                      java.
 *
 *************************************************/

public class inputoutput {
    public static void main (String[] args) {
        java.lang.System.out.println( "Say something: ");

        java.util.Scanner userinput;
        userinput = new java.util.Scanner( System.in );

        String platypus;
        platypus = userinput.nextLine( );

        java.lang.System.out.println( "You said: " + platypus );
    }
}
