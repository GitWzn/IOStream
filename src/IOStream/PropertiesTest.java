package IOStream;

import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Properties;

//读写properties配置文件
public class PropertiesTest {
	public static void main(String[] args) {
		try {
			//创建Properties结集合流
			Properties properties = new Properties();
			//使用集合流加载配置文件    结合快捷流进行文件加载
			properties.load(new FileReader("source/testData.properties"));
			//获取指定的key的数据
			System.out.println("username = " + properties.getProperty("username"));
			System.out.println("password = " + properties.getProperty("password"));
			System.out.println("phone = " + properties.getProperty("phone"));
			System.out.println("age = " + properties.getProperty("age"));
			//修改配置文件中的key的值     这里只是将数据存储在缓存中    并没有写入到文件中
			properties.setProperty("password", "987654321");
			System.out.println("password = " + properties.getProperty("password"));
			//将修改的数据写入到配置文件中  参数二是写入修改的说明注释
			properties.store(new FileWriter("source/testData.properties"), "aaa");
			System.out.println("password = " + properties.getProperty("password"));
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
}
