#include <cstdlib>
#include "compare.h"
using namespace std;


int main(int argc, char *argv[])
{
  // The function atoi take a string argument and return an //int.
// declare and initialize two int variable x and y
 int x=atoi(argv[1]);
 int y=atoi(argv[2]);

  bool same, swapped;

  // The method makeBothSame will print whether or not x and y are equal.
  int sameInt= makeBothSame(x, y);
  if(sameInt !=0)
  cout<<"Now x and y both equal "<<x<<". Previously, y's value was"<< sameInt<<endl;
  
  // Create an integer that will hold the value of the larger integer
  int biggestVallue= whichIsBigger(x, y, same);
  if (same == true)
  cout<<"x and y are the same"<<endl;
  else
  cout<<biggestVallue<<" is larger"<<endl;
  // the method makeFirstBigger will 
  makeFirstBigger( x,  y,  swapped);
  // if swapped is true print x ans y new value.
  if(swapped == true)
  cout<<"x new value is "<<x<<" y new value is "<<y<<endl;
  else
  cout<<"x and y were not swapped because they were already in the right order."<<endl;

  
 
  return 0;
}
