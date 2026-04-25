import java.io.*;
import java.util.*;

public class Main
{
	public static void main(String[] args) throws Exception
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int H1 = Integer.parseInt(br.readLine());
		int H2 = Integer.parseInt(br.readLine());
		System.out.println(H1 - H2);
	}
}
