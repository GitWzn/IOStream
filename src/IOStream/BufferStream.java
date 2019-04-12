package IOStream;

import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;

//缓存流(处理流)     相当于使用字节流读取和写入时自定义缓存数组
public class BufferStream {
	public static void main(String[] args) {
		try {
			//创建输入缓存流
			BufferedInputStream bis = new BufferedInputStream(new FileInputStream("C:\\Users\\吴宗宁\\Desktop\\java\\java笔记.c"));
			//创建输出缓存流
			BufferedOutputStream bos = new BufferedOutputStream(new FileOutputStream("source/aaa.c"));
			//读取写入
			int value = 0;
			while ((value = bis.read()) != -1){
				bos.write(value);
			}
			//释放
			bos.close();		//节点流会自动跟着释放
			bis.close();

		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
}
