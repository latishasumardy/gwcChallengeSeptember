#include <iostream>
#include <list>
#include <string>

//template <class InputIterator, class Distance>
//void advance (InputIterator& it, Distance n);


using namespace std;


int main() {
  string code;

  int count = 0;
  int codeLength = 0;

  std::cout << "Input the code you would like to decode here: ";
  getline(cin, code);

  codeLength = code.length();
  char chars[codeLength];
  for (char c: code) {
      chars[count] = c;
      count = count + 1;

  }

  for (int i = 0; i < count; i++){
    if (i%3 == 0 || i%5==0 || i%7==0) {
      std::cout <<  chars[i];
    }
  }

  std::cout << " " << '\n';




}
