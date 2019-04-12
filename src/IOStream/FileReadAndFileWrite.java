package IOStream;

import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

import IOStream.IOUtil.StreamCloseUtil;

//快捷流   就是将字符流的InputStreamRead进行封装
public class FileReadAndFileWrite {
	public static void main(String[] args) {
		try {
			//创建快捷流  输入流
			FileReader fileReader = new FileReader("source/hhh.c");
			//输出流
			FileWriter fileWriter = new FileWriter("source/ggg.c");
			//输入输出
			int b = 0;
			char[] arr = new char[5];
			while ((b = fileReader.read(arr)) != -1){
				fileWriter.write(arr, 0, b);
			}
			//使用关闭流工具关闭所有流
			StreamCloseUtil.closeAllStream(fileReader, fileWriter);
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
