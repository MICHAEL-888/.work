package work5_1.work5_1_worker;

public class Worker {
    String Name;
    String Gender;
    String WorkerID;
    String Department;

    public Worker(String name, String gender, String workerID, String department) {
        Name = name;
        Gender = gender;
        WorkerID = workerID;
        Department = department;
    }

    public String getName() {
        return Name;
    }

    public void setName(String name) {
        Name = name;
    }

    public String getGender() {
        return Gender;
    }

    public void setGender(String gender) {
        Gender = gender;
    }

    public String getWorkerID() {
        return WorkerID;
    }

    public void setWorkerID(String workerID) {
        WorkerID = workerID;
    }

    public String getDepartment() {
        return Department;
    }

    public void setDepartment(String department) {
        Department = department;
    }
}
