#include <iostream>
#include <stdlib.h>

using namespace std;


int main(){
	
	int a[5];
	int aux;
	
	for (int i=0;i<5;i++){	
		cout << "DIGITE O VALOR DE A" << i << endl;
		cin >> a[i];			
	}
	
	// ORDEM CRESCENTE // 
	
	for (int i=0;i<5;i++){
		for (int j=i+1;j<5;j++){
	if( a[i] > a[j] ){	
		aux=a[i];
		a[i]=a[j];
		a[j]=aux;	
	}
	}
	}	
		for (int i=0;i<5;i++){	
		cout << "\n";
		cout << " ORDEM CRESCENTE \n"; 
		cout << a[i] << endl; 
}
	
// FIM DO FOR PARA ORDEM CRESCENTE ! // 
	

	// ORDEM DECRESCENTE // 
		
		cout << "\n\n";
		
		for (int i=0;i<5;i++){
		for (int j=i+1;j<5;j++){
	if( a[i] < a[j] ){	
		aux=a[i];
		a[i]=a[j];
		a[j]=aux;	
	}
	}
	}	
		for (int i=0;i<5;i++){	
	
		cout << "\n\n";	
		
		cout << " ORDEM DECRESCENTE \n"; 
		cout << a[i] << endl; 
}
	// FIM DO FOR PARA ORDEM DECRESCENTE //
	
	
	

	
	
}
