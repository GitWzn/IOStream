package IOStream.IOUtil;

import java.io.Closeable;
import java.io.IOException;

//关闭流的工具
public class StreamCloseUtil {
	public static void closeAllStream(Closeable... streams) {
		for (Closeable stream : streams) {
			if(stream != null){
				try {
					stream.close();
				} catch (IOException e) {
					e.printStackTrace();
				}
			}
		}
	}
}
