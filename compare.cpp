// Islande Derazin

#include "compare.h"
#include <iostream>

using namespace std;
//using namespace N;

// the function whichIsBigger will find  if the numbers are the same if not, which one is larger.
int whichIsBigger(int x, int y, bool &same) { 
if(x==y) {
 same = true; 
 return y; 
 }
 else 
 {
   same = false;
   
   if(x>y)
    return x;
   else 
    return y;
 }

 }

int makeBothSame(int x, int &y)
{
  if(x=!y)
  {
    // create and temp value and initialize it to y value
    int temp =y;
    // set temp value y to x
    y=x;
    return temp;
  }
  else
   return 0;
  
  }

  // This method will make x bigger than y 
void makeFirstBigger(int &x, int &y, bool &swapped) {
  if (x<y) {
  swapped = true;
  // swap the values of the variables
  int temp1 = x;
  x = y;
  y = temp1;
  }
    // else x is bigger than y
  else
  swapped = false;
}

