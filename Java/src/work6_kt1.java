public class work6_kt1 {
    public static void main(String[] args) {
        StudentTicket stu = new StudentTicket(100, "202331607119", "2024年4月1日", "CN");
        System.out.printf("%.2f %s %s %s", stu.calPrice(), stu.getId(), stu.getTime(), stu.getCity());
    }
}

class Ticket {
    int Price;
    String Id;
    String Time;

    public Ticket(int price, String id, String time) {
        Price = price;
        Id = id;
        Time = time;
    }

    public int getPrice() {
        return Price;
    }

    public String getId() {
        return Id;
    }

    public String getTime() {
        return Time;
    }
}

class StudentTicket extends Ticket {
    String City;

    public StudentTicket(int price, String id, String time, String city) {
        super(price, id, time);
        City = city;
    }


    public String getCity() {
        return City;
    }

    public double calPrice() {
        return Price * 0.75;
    }
}