#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
  int j = 0;
  int h = 0;
  string code;
  const string addins = "SfqweoPDKFNCsawerfvueuehhhXJDKDKcnchjcjFS";
  char splitters[addins.length()];

  int count=0;
  int codeLength = 0;
  //populate splitters
  for (char c: addins) {
      splitters[count] = c;
      count = count + 1;

  }
  count = 0;


  std::cout << "Insert the message you want to encode: ";
  getline(cin, code);

  codeLength = code.length();
  char chars[codeLength];
  //populate chars
  for (char c: code) {
      chars[count] = c;
      count = count + 1;

  }
  std::cout << count << '\n';


  //find length for decoder
  for (int i = 0; i < count; i++){
    if (i%3 == 0 || i%5==0 || i%7==0) {
      codeLength++;
    }
  }
  if (codeLength > 16) {
    codeLength = codeLength + 5;
  }
  else {
    codeLength = codeLength + 2;
  }


  char decoder[codeLength];
  //populate decoder
  for (int i = 0; i < codeLength; i++){
    if (i%3 == 0 || i%5==0 || i%7==0) {
      decoder[i] = chars[h];
      h++;
    }
    else{
      decoder[i] = splitters[j];
      j++;
    }
  }

  //print out coded message
  for (size_t i = 0; i < codeLength; i++) {
    std::cout << decoder[i];
  }
  std::cout << '\n';


}
