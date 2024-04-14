import java.util.Scanner;

public class work6_1 {
    public static void main(String[] args) {
        int n;
        System.out.print("Please input the amount of employees:\n");
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        Employee[] employee = new Employee[n + 1];
        for (int i = 0; i < n; i++) {
            System.out.printf("Please input the %dth employee's name id and salary:\n", i + 1);
            Employee emp = new Employee();
            employee[i] = emp;
            employee[i].setName(input.next());
            employee[i].setId(input.next());
            employee[i].setSalary(input.nextInt());
        }
        System.out.print("Please input the manager's name id salary level and bonus:\n");
        Manager manager = new Manager(input.next(), input.next(), input.nextInt(), input.nextInt(), input.nextInt());
        employee[n] = manager;
        for (int i = 0; i < n + 1; i++) {
            System.out.printf("%s %s %d\n", employee[i].getName(), employee[i].getId(), employee[i].getSalary());
        }

    }
}

class Employee {
    String Name;
    String Id;
    int Salary;

    public Employee(String name, String id, int salary) {
        Name = name;
        Id = id;
        Salary = salary;
    }

    public Employee() {

    }

    public String getName() {
        return Name;
    }

    public void setName(String name) {
        Name = name;
    }

    public String getId() {
        return Id;
    }

    public void setId(String id) {
        Id = id;
    }

    public int getSalary() {
        return Salary;
    }

    public void setSalary(int salary) {
        Salary = salary;
    }

    public int getTotal() {
        return Salary;
    }


}

class Manager extends Employee {

    int Level;
    int Bonus;

    public Manager(String name, String id, int salary, int level, int bonus) {
        super(name, id, salary);
        Level = level;
        Bonus = bonus;
        setTotal();
    }


    public int getLevel() {
        return Level;
    }

    public void setLevel(int level) {
        Level = level;
    }

    public int getBonus() {
        return Bonus;
    }

    public void setBonus(int bonus) {
        Bonus = bonus;
    }

    public int getTotal() {
        return Salary + Level * 10 + Bonus;
    }

    public void setTotal() {
        Salary = Salary + Level * 10 + Bonus;
    }
}
