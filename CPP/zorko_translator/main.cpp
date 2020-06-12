#include <iostream>

bool vocal_interlacing(std::string human){
  //Here you would parse the vocals
  //The idea is that you should be able to identify vocals
  //Once the vocals are identified, you put (k + vocal), then it cuts it and sends it to the one that puts the letters
  //After that you should go to a function that searches the next vocal and puts (g+vocal). Then it does the same
}

int store_message(char **argv) {
  std::cout << "Introduce tu mensaje humano" << std::endl;
  std::string human = "";
  std::getline(std::cin,human);
  if (vocal_interlacing(human) == true)
    std::cout << "Yes, there are vocals" << std::endl;
  std::cout << "Fuck your mama" << std::endl;
  return 1;
}

int main(int ac, char **argv){
  if (ac == 0)
    exit(84); 
  else
    store_message(argv);
}