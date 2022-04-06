#include <iostream>
#include <fstream>
#include "input.h"
#include "proses.h"
#include"output.h"
using namespace std;

int main() {
	Input input;
	input.cetak();
	input.toFile();
	
	Proses proses;
	proses.getData();
	proses.toFile();
	
	Output output;
	output.getdata();
	output.cetak();
	
	return 0;
}
