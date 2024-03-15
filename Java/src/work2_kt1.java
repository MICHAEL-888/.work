import java.util.Scanner;
import java.util.Arrays;

public class work2_kt1 {
    public static void main(String[] args) {
        System.out.printf("Ques:");
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        if (num == 1)
            One();
        else if (num == 2)
            Two();
        else if (num == 3)
            Three();
    }

    public static void One() {
        int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int sum = 0;
        Arrays.sort(arr);
        for (int i = 0; i < arr.length; i++)
            sum += arr[i];
        System.out.printf("MAX_VALUE = %d\n", arr[arr.length - 1]);
        System.out.printf("MIN_VALUE = %d\n", arr[0]);
        System.out.printf("AVR = %.2f\n", (double) sum / 10.0);
        System.out.printf("SUM = %d\n", sum);

    }

    public static void Two() {
        int arr[] = new int[10];
        System.out.printf("Input Data:\n");
        for (int i = 0; i < arr.length; i++) {
            Scanner input = new Scanner(System.in);
            arr[i] = input.nextInt();
        }
        int sum = 0;
        Arrays.sort(arr);
        for (int i = 0; i < arr.length; i++)
            sum += arr[i];
        System.out.printf("MAX_VALUE = %d\n", arr[arr.length - 1]);
        System.out.printf("MIN_VALUE = %d\n", arr[0]);
        System.out.printf("AVR = %.2f\n", (double) sum / 10.0);
        System.out.printf("SUM = %d\n", sum);
    }

    public static void Three() {
        System.out.printf("Input Count of Students:\n");
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int sum = 0, temp = 0;
        int arr[] = new int[n];
        System.out.printf("Input Students' Marks:\n");
        //分数校验部分
        for (int i = 0; i < arr.length; i++) {
            temp = input.nextInt();
            while (temp < 0 || temp > 100) {
                System.out.printf("Invalid value,Please re-enter[0~100]：\n");
                temp = input.nextInt();
            }
            arr[i] = temp;
        }
        int max = 0, min = 99;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] >= max)
                max = arr[i];
            if (arr[i] <= min)
                min = arr[i];
        }
        for (int i = 0; i < arr.length; i++)
            sum += arr[i];
        Arrays.sort(arr);
        System.out.printf("MAX_MARKS = %d\n", arr[arr.length - 1]);
        System.out.printf("MIN_MARKS = %d\n", arr[0]);
        System.out.printf("AVR_MARKS = %.2f\n", (double) sum / (double) n);
        for (int i = 0; i < arr.length; i++)
            System.out.printf("MARKS%d = %d\n", i + 1, arr[i]);

    }
}
