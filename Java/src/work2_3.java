import java.util.Arrays;
import java.util.Random;

public class work2_3 {
    public static void main(String[] args) {
        int ans = 0;
        Random r = new Random();
        int[] arr = new int[100];
        for (int i = 0; i < 100; i++) {
            arr[i] = r.nextInt(100);
        }
        Arrays.sort(arr);
        for (int i = 0; i < 100; i++) {
            if (arr[i] > 50) {
                ans = 100 - i;
                break;
            }
        }
        System.out.printf("最大值：%d 最小值：%d 大于50整数个数：%d", arr[99], arr[0], ans);
    }
}
