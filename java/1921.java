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
    long soma,n,i,j=0;
		Scanner ler = new Scanner(System.in);
		n = ler.nextLong();
		if(n==3){
			System.out.println("0");
		}
		else if (n == 4){
			System.out.println("2");
		}
		else {
			for(i=2;i<n-1;i++){
				soma=i+j;
				j=soma;
			}
			System.out.println(j);
		}	
 
    }
 
}