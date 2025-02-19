#include <iostream>
#include <string>

int main() {

  // declare a string obj
  std::string s0;
  std::cout << "s0 = " << s0 << std::endl;

  // declare and initialize a string obj
  std::string s1 = "Hello, World!";
  std::cout << "s1 = " << s1 << std::endl;

  // declare and initialize a string obj by copying another string obj
  std::string s2(s1);
  std::cout << "s1 = " << s1 << std::endl;

  //declare amd initialize a string obj with a substring of another string object
  std::string s3(s1, 0);
  std::cout << "s3 = " << s3 <<std::endl;

  //declare and init a str obj w/ a substring of another string obj
  // and specify the starting position and the num of char to copy
  std::string s4(s1, 7, 5);
  std::cout << "s4 = " << s4 <<std::endl;

  // declare and init a str obj using a char array
  char ca1[] = "testing 123";
  std::string s6(ca1, 7);
  std::cout << "s6 = " << s6 <<std::endl;
  
  // get str input
  std::string s5;
  std::cout << "Name: ";
  getline(std::cin, s5); // input
  std::cout << "s5 = " << s5 << std::endl;
  
  std::cout << "Name: ";
  std::cin >> s5; // input // only gets data up to white space
  std::cout << "s5 = " << s5 << std::endl;
  return 0;
}