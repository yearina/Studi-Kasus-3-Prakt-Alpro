#include <iostream>
#include <fstream>
using namespace std;

class Output{
	public :
	void cetak (){
		cout<< "\nSTRUCK PEMBELIAN KELOMPOK JERUK \n";
		cout<<"yang dibeli : \n";
		cout<<"ayam goreng -> "<<data_file[3]<<endl;
		cout<<"ayam bakar  -> "<<data_file[4]<<endl;
		cout<<"harga total Rp. "<<data_file[0]<<endl;
		cout<<"diskon      RP. "<<data_file[1]<<endl;
		cout<<"harga bayar RP. "<<data_file[2]<<endl;

	}
	void getdata(){
		ambil_data.open("api_data.txt");
		index = 0;
		while(!ambil_data.eof()){
			ambil_data>>data_file[index];
			index += 1;	
		}
		ambil_data.close();
	}
	private :
		ifstream ambil_data;
		string data_file[30];
		int index;
		
	
};
