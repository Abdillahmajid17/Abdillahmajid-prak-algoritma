#include <iostream>
using namespace std;

int main() {

	int bil1,bil2,pil;
	float hasil;
	string operasi;
	
	cout<<"PILHAN OPERATOR "<<endl;
	
	cout<<"1.Penjumlahan "<<endl;
	cout<<"2.pengurangan "<<endl;
	cout<<"3.perkalian "<<endl;
	cout<<"4.pembagian"<<endl;
	cout<<endl;
	
	cout<<"Masukkan pilihan : ";
	cin>>pil;
	cout<<"Masukkan bilangan pertama : ";
	cin>>bil1;
	cout<<"Masukkan bilangan kedua : ";
	cin>>bil2;
	
	switch(pil){
		case 1 : hasil = bil1 + bil2;
		operasi = '+';
		break;
		
		case 2 : hasil = bil1 - bil2;
		operasi = '-';
		break;
		
		case 3 : hasil = bil1 * bil2;
		operasi = '*';
		break;
		
		case 4 : hasil = bil1 / bil2;
		operasi = '/';
		break;
		
		default :
			cout <<"salah masukan operator"<<endl;
			
	}
	cout<<"----------------------------------"<<endl;
	cout<<"		"<<bil1<<operasi<<bil2<<"="<<hasil<<endl;
	return 0;
}
