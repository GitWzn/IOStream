package IOStream;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.UnsupportedEncodingException;

import IOStream.IOUtil.StreamCloseUtil;

//字符流
public class ReadAndWrite {
	public static void main(String[] args) {
		try {
			//创建字符流    输入流
			InputStreamReader isr = new InputStreamReader(new FileInputStream("source/hhh.txt"), "utf-8");
			//创建输出流
			OutputStreamWriter osw = new OutputStreamWriter(new FileOutputStream("source/kkk.txt"), "utf-8");
			//输入输出
			int b = 0;
			char[] arr = new char[5];
			while ((b = isr.read(arr)) != -1){
				osw.write(arr, 0, b);
			}
			StreamCloseUtil.closeAllStream(isr, osw);
		} catch (UnsupportedEncodingException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
}
