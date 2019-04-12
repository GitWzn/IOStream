package IOStream;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;

//输入输出流的超类    流是文件与文件之间的通道     ---->   节点流
public class InputStreamAndOutputStream {
	public static void main(String[] args) {
		try {
			//创建输入流
			FileInputStream inputStream = new FileInputStream(new File("C:\\Users\\吴宗宁\\Desktop\\java\\java笔记.c"));
			//创建输出流
			File file = new File("source");
			file.mkdirs();
			FileOutputStream outputStream = new FileOutputStream(file.getPath() + "/" + "hhh.c"); 
			//cp文件之前的时间
			long startTime = System.currentTimeMillis();
			//方式一：
			/*int value = inputStream.read();   //一次只读一个字节
			while (value != -1){
				outputStream.write(value);   //将数据写入绑定的文件中
				value = inputStream.read();  //再读就会自动将光标往下移动一个字节
			}*/
			//方式二：
			/*int value = 0;
			while ((value = inputStream.read()) != -1){
				outputStream.write(value);
			}*/
			//方式三：
			byte[] arr = new byte[1024];
			int value = 0;
			while ((value = inputStream.read(arr)) != -1){   //读取到规定数组长度的字节缓存到数组中
				outputStream.write(arr, 0, value);	//将缓存的数组写入到绑定的文件中
			}
			//cp文件后的时间
			long endTime = System.currentTimeMillis();
			System.out.println("cp文件所要的时间：" + (endTime - startTime) + "毫秒");
			//释放流资源
			outputStream.close();
			inputStream.close();
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
}
