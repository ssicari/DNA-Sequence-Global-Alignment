//Sal Sicari
#include"EditDistance.h"

int main(int argc, char* argv[])
{

  std::string DNAStringOne;
  std::string DNAStringTwo;

  std::cin >> DNAStringOne;
  std::cin >> DNAStringTwo;

  sf::Clock clock;
  sf::Time t;

  ED ed(DNAStringOne, DNAStringTwo);
  int editDistance = ed.OptDistance();
  
  t = clock.getElapsedTime();

  std::cout << "Edit distance = " << editDistance << std::endl;
  ed.Alignment();
  std::cout <<"Execution time is " << t.asSeconds() << " seconds \n";
  
  return 0;
}
