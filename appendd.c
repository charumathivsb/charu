#include <iostream>
#include <string>

int main ()
{
  std::string str;
  std::string str2="karur";
  str.append(str2);                     
  str.append(1u,'.');                    
  return 0;
}
