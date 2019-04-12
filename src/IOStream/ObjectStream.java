package IOStream;

import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;

import IOStream.Bean.User;
import IOStream.IOUtil.StreamCloseUtil;

//对象流    文件中输入输出java对象      
//当对象的属性是static/transient修饰的就不能进行序列化
public class ObjectStream {
	public static void main(String[] args) {
		try {
			//创建对象流   输出流    就是将java对象写入数据源中(文件) 叫序列化
			ObjectOutputStream oos = new ObjectOutputStream(new FileOutputStream("source/objectData.txt"));
			User userOut = new User("吴宗宁", "123456789", 18);
			//把对象写入到(序列化)文件中
			oos.writeObject(userOut);
			System.out.println("对象序列化成功!!");
			//创建对象流   输入流   就是从数据源中获取java对象   叫反序列化
			ObjectInputStream ois = new ObjectInputStream(new FileInputStream("source/objectData.txt"));
			//读取数据
			User userIn = (User) ois.readObject();
			System.out.println("从数据源中获取对象：" + userIn);
			StreamCloseUtil.closeAllStream(oos, ois);
		} catch (Exception e) {
			e.printStackTrace();
		}
	}
}
