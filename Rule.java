import java.util.Scanner;

public class DivisibleBy15 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int num = sc.nextInt();

        int temp = num;
        int digitSum = 0;

        while (temp != 0) {
            digitSum += temp % 10;
            temp /= 10;
        }

        boolean div3 = (digitSum % 3 == 0);
        boolean div5 = (num % 5 == 0);

        if (div3 && div5)
            System.out.println(num + " is divisible by 15");
        else
            System.out.println(num + " is not divisible by 15");
    }
}
