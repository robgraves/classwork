/**************************************************
 *
 * Matthew Page
 * 01/28/2015
 * CSCS2330S15
 *
 * color5.java  -color java, not really.
 *
 *************************************************/

class color5 {
    String color;

    public static void main(String[] args) {
        color5 anObject = new color5();
        System.out.println("My favorite color is " + anObject.color + "." );
        anObject.changeColor();
        System.out.println("My favorite color is not " + anObject.color + "." );
    }

    public color5() {
        color = new String("green");
    }

    public void changeColor() {
        color = new String("blue");
    }
}
