#include <iostream>
#include <fstream>
using namespace std;

class Input{
	public:
		void cetak(){
			cout<<"PROGRAM UNTUK RUMAH MAKAN \n";
			cout<<"========================= \n";
			cout<<"Menu:"<<endl;
			cout<<"1. Ayam goreng = Rp. 17000"<<endl;
			cout<<"2. Ayam bakar = Rp. 25000"<<endl;
			cout<<"--------------------------------- \n";
			cout<<"Pesan ayam goreng = "; cin>>aym_gr;
			cout<<"Pesan ayam bakar = "; cin>>aym_bk;
		}
		void toFile() {
			tulis_data.open("api_data.txt");
			tulis_data<<aym_gr<<endl;
			tulis_data<<aym_bk<<endl;
			tulis_data.close();
		}
		
	private:
		ofstream tulis_data;
		int aym_gr, aym_bk;
};
