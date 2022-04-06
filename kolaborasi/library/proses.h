#include <iostream>
#include <fstream>
using namespace std;

class Proses {
	public :
		void cetak(){
				cout << "Anda sebagai Proses \n";
		}
		void getData(){
				ambil_data.open("api_data.txt");
				bool Ayam_Goreng = true;
				while(!ambil_data.eof()){
					if (Ayam_Goreng){
						ambil_data >> bnyk_AyamGoreng;
						Ayam_Goreng = false;
					}
					else{
						ambil_data >> bnyk_AyamBakar;

					}
					
				}
				ambil_data.close();

		}

		void toFile(){
			hrg_AyamGoreng = 17000;
			hrg_AyamBakar = 25000;
			int total = (hrg_AyamGoreng * bnyk_AyamGoreng ) + (hrg_AyamBakar * bnyk_AyamBakar);
			float batas = 50000;
			float t2 = float(total);
			float diskon = t2 * 0.1;

			if (total >= batas)
				t2 = t2 - diskon;

			tulis_data.open("api_data.txt");
			tulis_data << total << endl;
			tulis_data << diskon << endl;
			tulis_data << t2 << endl;
			tulis_data << bnyk_AyamGoreng << endl;
			tulis_data << bnyk_AyamBakar;
			tulis_data.close();

		}

	private :
		ifstream ambil_data;
		ofstream tulis_data;
		int bnyk_AyamGoreng;
		int bnyk_AyamBakar;
		int hrg_AyamGoreng;
		int hrg_AyamBakar;
};
