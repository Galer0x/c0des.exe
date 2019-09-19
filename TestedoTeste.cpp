#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	string nome [4]= {"LUCAS","CAIO","MARCOS","EFRAIM"};
		for (int i=0;i<4;i++){
		cout << nome[i] << endl;
}

	string aux;
	string ordem [4];
	
	for (int i=0;i<4;i++){
	ordem[i]=nome[i];
}

	for (int i=0;i<4;i++){
		for (int j=i;j<4;j++){
			if (ordem[i] > ordem[j] ){
			
			aux=ordem[j];
			ordem[j]=ordem[i];
			ordem[i]=aux;
			
		}
}
}

	for (int i=0;i<4;i++){
		
		cout << "ORDEM ALFABETICA " << ordem[i] << endl;
		
}
		
		


}
