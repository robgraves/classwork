/**************************************************
 *
 * Matthew Page
 * 01/28/2015
 * CSCS2330S15
 *
 * color4.java  -color java, not really.
 *
 *************************************************/

class color4 {
    String color;

    public static void main(String[] args) {
        color4 anObject = new color4();
        System.out.println("My favorite color is " + anObject.color + "." );
    }

    public color4() {
        color = new String("green");
    }
}
