import java.util.Arrays;
import java.util.Scanner;

public class work2_1 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int[] arr = new int[3];
        for (int i = 0; i < 3; i++)
            arr[i] = input.nextInt();
        Arrays.sort(arr);
        System.out.printf("最大值为：%d 最小值为：%d", arr[2], arr[0]);
    }
}
