
package NumeroPar;
import java.util.Scanner;

public class VerificacaoNumeroPar {
    
    public static void main(String[] args){
        
        
        int num;
        Scanner leitor = new Scanner(System.in);
        
        
        System.out.println("DIGITE UM NUMERO QUALQUER: ");
        num=leitor.nextInt();
        
        if (num % 2 == 0){
        
        System.out.println("ESSE NUMERO EH PAR!!!");
        
    }else{
            
        System.out.println("ESSE NUMERO EH IMPAR!!!");
            }
        
        
        
    }
    
    
}
