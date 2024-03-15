import static java.lang.Math.sqrt;

public class work2_2 {
    public static void main(String[] args) {
        int[] arr = new int[100];
        for (int i = 2; i < 100; i++) {
            if (arr[i] == 0) {
                for (int j = 2; j <= sqrt(i); j++) {
                    if (i % j == 0) {
                        arr[i]++;
                        break;
                    }
                }
                //浅浅学习一下埃拉托斯特尼算法
                //质数的倍数是合数
                if (arr[i] == 0) {
                    for (int j = 2; i * j < 100; j++) {
                        arr[i * j]++;
                    }
                }
            }
        }
        int count = 1;
        for (int i = 2; i < 100; i++) {
            if (arr[i] == 0) {
                if (count < 5) {
                    System.out.printf("%d\t", i);
                    count++;
                } else {
                    System.out.printf("%d\n", i);
                    count = 1;
                }
            }
        }
    }
}
