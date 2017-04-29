#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char **argv) {
  ifstream image;

  //open input file------------------------------------------
  image.open(argv[1]);
  //check if the file was opened successfully
  if (!image.good()) {
    cerr<<"Opening of input file failed"<<endl;
    exit(1);
  }
  while (!image.eof()) {
    string nextLine;
    getline(image, nextLine);
    if (!nextLine.empty())
      cout << nextLine << endl;
  }
}
