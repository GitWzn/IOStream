package IOStream;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

import IOStream.IOUtil.StreamCloseUtil;

//封装字符流的缓存流    之前节点流使用数组的形式进行输入输出信息    
//而缓存流就是将这功能进行封装   自动创建数组进行数据输入输出
public class BufferReadWrite {
	public static void main(String[] args) {
		try {
			//创建缓存流   输入流
			BufferedReader bufferedReader = new BufferedReader(new FileReader("source/hhh.c"));
			//输出流
			BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter("source/lll.c"));
			//输入输出
			String value = "";
			while ((value = bufferedReader.readLine()) != null){
				bufferedWriter.write(value);
				bufferedWriter.newLine();     //使用字符流的缓存流要有结束符(\r  \n) 或使用添加分隔符才会将数据写到指定流中
			}
			//关闭流
			StreamCloseUtil.closeAllStream(bufferedReader, bufferedWriter);
			System.out.println("文件复制成功!!");
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
}
