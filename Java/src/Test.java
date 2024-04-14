import java.io.BufferedReader;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
public class Test {
    public static void main(String[] args) throws IOException {
        File file1=new File("F:\\javaTest\\a.txt");//1. 使用构造方法创建对象
        File file2=new File("F:/javaTest/a.txt");
        // 通过成员方法，使用对象
        System.out.println("可写吗？"+file1.canWrite());
        long size=file1.length();//读取文件容量，大小
        System.out.println("大小："+size+"字节Byte");
        String path=file1.getPath();
        System.out.println("path="+path);
        String parent=file1.getParent();
        System.out.println("parent="+parent);
        //创建File对象，指向目录（文件夹）
        File dir=new File("F:/javaTest");
        File dir1=new File("C:/");
        System.out.println("dir 是否是目录？"+dir.isDirectory());
        //查看目录中有哪些文件和文件夹
        String fileList[]=dir.list();
        File fileList1[]=dir.listFiles();
        if (fileList != null) {
            for(int i=0;i<fileList.length;i++) {
                if (fileList1 != null) {
                    System.out.println(fileList1[i]);
                }
            }//
        }
        // 从文件中读取数据
        FileReader reader1=new FileReader(file1);
        // 读数据 FileReader 只提供读单个字符的方法，为了读一行，采用缓冲流
        BufferedReader br=new BufferedReader(reader1);
        String line=br.readLine();
        while(line!=null) {
            System.out.println(line);
            line=br.readLine();
        }



    }// main方法
}//






