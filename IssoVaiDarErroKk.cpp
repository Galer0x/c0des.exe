// DESENVOLVIDO POR: MARCOS ANDRE 

#include <iostream>
#include <stdlib.h>

using namespace std;


int main(){

	float matriz[2][2];
	float soma;
	float vetorA[2];
	float vetorB[2];
	
	for (int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			cout << "DIGITE O VALOR DO INDICE " << i+1 << "x" << j+1 << endl;
			cin >> matriz[i][j];
}			
}
	cout << "\n";
	for (int i=0;i<2;i++){
		for (int j=0;j<2;j++){
				cout << matriz[i][j] << "  "; 
}
cout << endl;
}
		for (int i=0;i<2;i++){
			for (int j=0;j<2;j++){
			 vetorA[j] += matriz[i][j];
       		 vetorB[i] += matriz[i][j];
}
}
		for (int j=0;j<2;j++){
			cout << "\n";
			cout << "SomaColuna" << j+1 << ": " <<  vetorA[j] << "  ";
}
			cout << endl; 
			for (int i=0;i<2;i++){
			cout << "\n";
			cout << "SomaLinha" << i+1 << ": " <<  vetorB[i] << "  ";
}

}
