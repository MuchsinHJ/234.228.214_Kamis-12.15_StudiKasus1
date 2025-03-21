#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Ktp {
  friend ostream &operator << (ostream &out, const Ktp &ktp);
  friend istream &operator >> (istream &inp, const Ktp &ktp);
  public:

  private:
  string nama;
};
istream &operator >> (istream &inp, const Ktp &ktp){
  
}
ostream &operator << (ostream &out, const Ktp &ktp){

}