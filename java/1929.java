import java.io.IOException;
import java.util.Scanner;
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Main {
 
    public static void main(String[] args) throws IOException {
 Scanner ler = new Scanner(System.in);
		int a=0,b=0,c=0,d=0;
		a = ler.nextInt();
		b = ler.nextInt();
		c = ler.nextInt();
		d = ler.nextInt();
		if((a+b>c)&&(b+c>a)&& (a+c>b)){
			System.out.println("S");
		}
		else if ((a+c>d)&&(d+c>a)&& (a+d>c)){
			System.out.println("S");
		}
		else if ((c+b>d)&&(d+c>b)&& (d+b>c)){
			System.out.println("S");
		}
		else if ((a+b>d)&&(b+d>a)&& (d+a>b)){
			System.out.println("S");
		}
		else {
			System.out.println("N");
		}
 
    }
 
}