package bin;

public class P1 {

    public static void main(String[] args) {
        int i = 0;
        int sum = 0;

        for (i = 0; i < 1000; i++) {
            sum += (i % 3 == 0 || i % 5 == 0) ? i : 0;
        }

        System.out.println(sum);
    }

}