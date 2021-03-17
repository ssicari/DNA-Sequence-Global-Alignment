//Sal Sicari
#include"EditDistance.h"

ED::ED(const std::string N, const std::string M)
{
  DNAStringOne = N;
  DNAStringTwo = M;

  std::reverse(DNAStringOne.begin(), DNAStringOne.end());
  std::reverse(DNAStringTwo.begin(), DNAStringTwo.end());
  
  row = N.length() + 1;
  column = M.length() + 1;

  arr = new int*[row];
  
  for(int x = 0; x < row; x++)
    arr[x] = new int[column];

  for(int x = 0; x < row; x++)
    {
      for(int y = 0; y < column; y++)
	{
	  arr[x][y] = 0;
	}
    }
}
ED::~ED()
{
  if(arr != nullptr)
    {
      for(int x = 0; x < row; x++)
      delete [] arr[x];

      delete [] arr;
    }
}
/*int ED::penalty(char a, char b)
{
  if(a != b)
    {
      return 1;
    }
  return 0;
}*/
auto penalty = [](char a, char b)->int{ return {a != b ? 1 : 0}; };
int ED::min(int a, int b, int c)
{
  int minimum = a;

  if(minimum > b)
    {
      minimum = b;
    }
  if(minimum > c)
    {
      minimum = c;
    }

  return minimum;
}
int ED::OptDistance()
{
  for(int x = 0; x < row; x++)
    {
      arr[x][0] = x * 2;
    }
  for(int x = 0; x < column; x++)
    {
      arr[0][x] = x * 2;
    }

  for(i = 1; i < row; i++)
    {
      for(j = 1; j <= column; j++)
	{
	 arr[i][j] = min(arr[i - 1][j - 1] + penalty(DNAStringOne[i - 1], DNAStringTwo[j - 1]), arr[i -1][j] + 2, arr[i][j - 1] + 2);
	  //std::cout <<std::setw(2) << arr[i - 1][j - 1] << " ";
	}
      //std::cout << std::endl;
    }
  return arr[i - 1][j - 1];
}
std::string ED::Alignment()
{
  i = row;
  j = column;

  
  while(!(i == 0 || j == 0))//prints zero in middle of the line I believe because it compares gaps and they match unable to find a way to remove it so it stayed/ it's a feature not a bug :)
    {
      if(DNAStringOne[i - 1] == DNAStringTwo[j - 1])
	{
	  std::cout << DNAStringOne[i - 1] << " " << DNAStringTwo[j - 1] << " " << "0" << std::endl;
	  i--;
	  j--;
	}
      else
	{
	  if(arr[i - 1][j - 1] + 1 == arr[i][j])
	    {
	      std::cout << DNAStringOne[i - 1] << " " << DNAStringTwo[j - 1] << " " << "1" << std::endl;
	      i--;
	      j--;
	    }
	  else if(arr[i - 1][j] + 2 == arr[i][j])
	    {
	      std::cout << DNAStringOne[i - 1] << " " << "-" << " " << "2" << std::endl;
	      i--;
	    }
	  else if(arr[i][j - 1] + 2 == arr[i][j])
	    {
	      std::cout <<  '-' << " " << DNAStringTwo[j - 1] << " " << "2" << std::endl;
	      j--;
	    }
	}
     }
 return "";
}
