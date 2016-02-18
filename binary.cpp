#include <iostream>
#include <fstream>
using namespace std;

int main () {
  fstream myfile;
  myfile.open ("example.bin", ios::out | ios::trunc | ios::binary);
  myfile << "Writing this to a file.\n"<<endl<<"Name :"<<"Anmol \t\t\t                Chawla";
  myfile.close();
  return 0;
}
