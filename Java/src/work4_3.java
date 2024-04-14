import java.util.Scanner;

public class work4_3 {
    public static void main(String[] args) {
        System.out.print("请输入用户名，用户编号与充值金额：\n");
        Scanner input = new Scanner(System.in);
        Card card = new Card();
        card.setUsername(input.next());
        card.setId(input.next());
        card.setBalance(input.nextDouble());
        card.getCardInformation();
    }
}

class Card {
    static String Company = "猪猪乐园";
    String Username;
    String Id;
    double Balance;

    public void setUsername(String username) {
        Username = username;
    }

    public void setId(String id) {
        Id = id;
    }

    public void setBalance(double balance) {
        if (balance <= 300) {
            Balance += balance + balance / 100;
        } else if (balance > 300 && balance <= 1000) {
            Balance += balance + balance / 20;
        } else {
            Balance += balance + balance / 12.5;
        }
    }

    public String getUsername() {
        return Username;
    }

    public double getBalance() {
        return Balance;
    }

    public void getCardInformation() {
        System.out.printf("公司名称：%s 用户名：%s 用户编号：%s 余额：%.2f", Company, Username, Id, Balance);
    }
}