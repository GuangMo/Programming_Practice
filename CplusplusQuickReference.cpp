/*
This file provides example on variable data structure usages in c++ 
*/

#include <map> 
#include <iostream>
#include <vector>  
#include <string>

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

  /* initialize vector on allocation */ 
  vector<int> vectorInitializationExample(26, INT_MAX); 
  

  /* for loop with auto to access each element example */ 
  vector<int> Aexample(10,0);  
  for(auto s : Aexample)
  {
  }
  /* End of auto for loop example */ 

  /* Convert char to string */ 
  string(1, 1+'a'); 

  return 0; 
}
