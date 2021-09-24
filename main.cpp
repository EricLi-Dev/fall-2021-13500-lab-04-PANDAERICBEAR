/*

Author: Eric Li

Course: CSCI-135

Instructor: Zamansky

Assignment: Lab 4

Purpose:

*/

#include <iostream>
#include "funcs.h"
#include "cross.h"
#include "checkerboard3x3.h"

using std::cout;
using std::endl;

int main(){

  //Task A
  cout << "----------------------------------------------------------------------" << endl;
  cout << "                                Task A                                " << endl;
  cout << "----------------------------------------------------------------------" << endl;
  cout << "Test 1: \nwidth = 7 \nheight = 4" << endl;
  cout << box(7, 4);
  cout << endl;
  cout << "Test 2: \nwidth = 8 \nheight = 5" << endl;
  cout << box(8, 5);
  cout << endl;
  cout << "Test 3: \nwidth = 9 \nheight = 6" << endl;
  cout << box(9, 6);
  cout << endl;

  //Task B
  cout << "----------------------------------------------------------------------" << endl;
  cout << "                                Task B                                " << endl;
  cout << "----------------------------------------------------------------------" << endl;
  cout << "Test 1: \nwidth = 11 \nheight = 6" << endl;
  cout << checkerboard(11, 6);
  cout << endl;
  cout << "Test 2: \nwidth = 12 \nheight = 7" << endl;
  cout << checkerboard(12, 7);
  cout << endl;
  cout << "Test 3: \nwidth = 13 \nheight = 8" << endl;
  cout << checkerboard(13, 8);
  cout << endl;

  //Task C
  cout << "----------------------------------------------------------------------" << endl;
  cout << "                                Task C                                " << endl;
  cout << "----------------------------------------------------------------------" << endl;
  cout << "Test 1: \nsize = 11" << endl;
  cout << cross(11);
  cout << endl;
  cout << "Test 2:\nsize = 12" << endl;
  cout << cross(12);
  cout << endl;
  cout << "Test 3: \nsize = 13" << endl;
  cout << cross(13);
  cout << endl;

  //Task C
  cout << "----------------------------------------------------------------------" << endl;
  cout << "                                Task D                                " << endl;
  cout << "----------------------------------------------------------------------" << endl;
  cout << "Test 1: \nsize = 11" << endl;
  cout << lower(11);
  cout << endl;
  cout << "Test 2:\nsize = 12" << endl;
  cout << lower(12);
  cout << endl;
  cout << "Test 3: \nsize = 13" << endl;
  cout << lower(13);
  cout << endl;

  //Task C
  cout << "----------------------------------------------------------------------" << endl;
  cout << "                                Task E                                " << endl;
  cout << "----------------------------------------------------------------------" << endl;
  cout << "Test 1: \nsize = 11" << endl;
  cout << upper(11);
  cout << endl;
  cout << "Test 2:\nsize = 12" << endl;
  cout << upper(12);
  cout << endl;
  cout << "Test 3: \nsize = 13" << endl;
  cout << upper(13);
  cout << endl;

  //Task C
  cout << "----------------------------------------------------------------------" << endl;
  cout << "                                Task F                                " << endl;
  cout << "----------------------------------------------------------------------" << endl;
  cout << "Test 1: \nwidth = 12 \nheight = 5" << endl;
  cout << trapezoid(12, 5);
  cout << endl;
  cout << "Test 2: \nwidth = 13 \nheight = 4" << endl;
  cout << trapezoid(13, 4);
  cout << endl;
  cout << "Test 3: \nwidth = 5 \nheight = 4" << endl;
  cout << trapezoid(5, 4);
  cout << endl;

  //Task B
  cout << "----------------------------------------------------------------------" << endl;
  cout << "                                Task G                                " << endl;
  cout << "----------------------------------------------------------------------" << endl;
  cout << "Test 1: \nwidth = 12 \nheight = 7" << endl;
  cout << checkerboard3x3(15, 12);
  cout << endl;
  cout << "Test 2: \nwidth = 16 \nheight = 11" << endl;
  cout << checkerboard3x3(16, 11);
  cout << endl;
  cout << "Test 3: \nwidth = 27 \nheight = 27" << endl;
  cout << checkerboard3x3(27, 27);
  cout << endl;

}
