#include <iostream>
#include <stdlib.h>

using namespace std;


int main(){
	
	
int a[10];
int i;



for (i=0;i<10;i++){
	
	cout << "DIGITE O VALOR DE A" << i << endl;
	cin >> a[i];
	
	
}

cout << "\n";

for (i=0;i<10;i++){
	
	if(a[i] % 2 == 0){
		
		cout << "MULTIPLOS DE 2: " << a[i] << endl;
		
}		
}

cout << "\n";


for (i=0;i<10;i++){
	
	if(a[i] % 3	== 0){
		
		cout << "MULTIPLOS DE 3: " << a[i] << endl;
		

}
}


cout << "\n";


for (i=0;i<10;i++){
	
	if(a[i] % 5 == 0){
		
		cout << "MULTIPLOS DE 5: " << a[i] << endl;
		
}
}



}
	
	

