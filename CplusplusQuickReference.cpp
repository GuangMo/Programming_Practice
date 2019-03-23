/*
This file provides example on variable data structure usages in c++ 
*/

#include <map> 
#include <iostream> 

int main() 
{
  /* Find a value from a map example */
  std::map<char,int> mymap;
  std::map<char,int>::iterator it;
  mymap['b']=100;
  it = mymap.find('b');
  if (it != mymap.end())
    mymap.erase (it);
  /* End of find a value from a map example */ 

  
  return 0; 
}
