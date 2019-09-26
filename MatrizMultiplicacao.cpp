// DESENVOLVIDO POR: MARCOS ANDRE 

#include <iostream>
#include <stdlib.h>

using namespace std;


int main(){
	
	int LinA,ColA,LinB,ColB;

	cout << "MATRIZ A: LINHA" << endl;
	cin >> LinA;
	cout << "MATRIZ A: COLUNA" << endl;
	cin >> ColA;
	cout << "MATRIZ B: LINHA" << endl;
	cin >> LinB;
	cout << "MATRIZ B: COLUNA" << endl;
	cin >> ColB;
	
	if(ColA == LinB){
		cout << "ESSA MATRIZ PODE SER MULTIPLICADA! " << endl;
	}else{
		cout << "ESSA MATRIZ NAO PODE SER MULTIPLICADA!" << endl;
		return 0; 
	}
	float matrizA[LinA][ColA];
	float matrizB[LinB][ColB];
	
	for (int i=0;i<LinA;i++){
		for (int j=0;j<ColA;j++){
			cout << "DIGITE O VALOR DO INDICE " << i+1 << "x" << j+1 << endl;
			cin >> matrizA[i][j];
}			
}
		for (int i=0;i<LinB;i++){
			for (int j=0;j<ColB;j++){
			cout << "DIGITE O VALOR DO INDICE " << i+1 << "x" << j+1 << endl;
			cin >> matrizB[i][j];
}
}
		for (int i=0;i<LinB;i++){
			for (int j=0;j<ColB;j++){
		cout << matrizA[i][j] * matrizB[i][j] << "  "; 
}
cout << endl; 
}
		
}
