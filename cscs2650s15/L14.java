/**************************************************
 *
 * Matthew Page
 * 01/28/2015
 * CSCS2330S15
 *
 * L14  -color java, not really.
 *
 *************************************************/

class L14 {
    public static void main(String[] args) {
        L14A anObject = new L14A();
        System.out.println("My favorite color is " + anObject.color + "." );
        anObject.changeColor();
        System.out.println("My favorite color is not " + anObject.color + "." );
    }
}
