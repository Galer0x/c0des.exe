// ALUNO : MARCOS ANDRE MARQUES CELESTINO
// CURSO : CIENCIA DA COMPUTACAO - CIN02S1 / NOTURNO
// MATRICULA : 19184301 



package newpackage;
import java.util.Scanner;

public class MaiorMenor {
    
   public static void main (String [] args){
       
  double n1,n2;
  
  Scanner leitor = new Scanner(System.in);
  System.out.println("DIGITE UM NUMERO");
  n1=leitor.nextDouble();
  System.out.println("DIGITE OUTRO NUMERO");
  n2=leitor.nextDouble();
  if (n1 > n2){
     
      System.out.println("O NUMERO N1 EH MAIOR QUE N2");
      System.out.println("NUMERO N1: "+n1);
      System.out.println("NUMERO N2: "+n2);
      
  }else{
      
      System.out.println("O NUMERO N2 EH MAIOR QUE N1");
      System.out.println("NUMERO N2: "+n2);
      System.out.println("NUMERO N1: "+n1);
  }
      
      
  }
  
  
}


  
   
