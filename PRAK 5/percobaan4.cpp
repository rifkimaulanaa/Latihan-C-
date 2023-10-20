#include <iostream>
using namespace std;


// untuk mengecek apakah ada bilangan bulat positif 1 - yang di input oleh si user
int ambil(int bil, int i){ 
	if (i == 1) { 
		return 1; 
	} 
	else if (bil % i == 0) { 
		return 1 + ambil(bil, --i); 
		} else { 
		return 0 + ambil(bil, --i); 
	} 
}
// untuk mengecek apakah bilangan prima atau bukan
int cek(int bil){ 
	if (bil > 1) { 
		return (ambil(bil, bil) == 2);
	} 
	else 
		return false; 
}

int main(){
	
	int bil;
	cout<<"Masukan Bilangan : ";
	cin>>bil;

	if (cek(bil)){
		cout<<"Bilangan Prima"<<endl;
	}else {
		cout<<"Bukan Bilangan Prima"<<endl;
	}
	return 0;
} 