/*

Author: Eric Li

Course: CSCI-135

Instructor: Zamansky

Assignment: Lab 4

Purpose:
Task A - Asks the user to input width and height and prints a solid rectangular box of the requested size using asterisks.
Task B - Asks the user to input width and height and prints a rectangular checkerboard of the requested size using asterisks and spaces (alternating).
Task C - Asks the user to input the shape size, and prints a diagonal cross of that dimension.
Task D - Prints the bottom-left half of a square, given the side length.
Task E - Prints the top-right half of a square, given the side length.
Task F - Prints an upside-down trapezoid of given width and height. If the input height is impossibly large for the given width, then the program should report, Impossible shape!
Task G - Asks the user to input width and height and prints a checkerboard of 3-by-3 squares. (It should work even if the input dimensions are not a multiple of three.)
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
  cout << "Test 1: \nbox(7, 4)" << endl;
  cout << box(7, 4);
  cout << endl;
  cout << "Test 2: \nbox(8, 5)" << endl;
  cout << box(8, 5);
  cout << endl;
  cout << "Test 3: \nbox(9, 6)" << endl;
  cout << box(9, 6);
  cout << endl;

  //Task B
  cout << "----------------------------------------------------------------------" << endl;
  cout << "                                Task B                                " << endl;
  cout << "----------------------------------------------------------------------" << endl;
  cout << "Test 1: \ncheckerboard(11, 6)" << endl;
  cout << checkerboard(11, 6);
  cout << endl;
  cout << "Test 2: \ncheckerboard(12, 7)" << endl;
  cout << checkerboard(12, 7);
  cout << endl;
  cout << "Test 3: \ncheckerboard(13, 8)" << endl;
  cout << checkerboard(13, 8);
  cout << endl;

  //Task C
  cout << "----------------------------------------------------------------------" << endl;
  cout << "                                Task C                                " << endl;
  cout << "----------------------------------------------------------------------" << endl;
  cout << "Test 1: \ncross(11)" << endl;
  cout << cross(11);
  cout << endl;
  cout << "Test 2:\ncross(12)" << endl;
  cout << cross(12);
  cout << endl;
  cout << "Test 3: \ncross(13)" << endl;
  cout << cross(13);
  cout << endl;

  //Task D
  cout << "----------------------------------------------------------------------" << endl;
  cout << "                                Task D                                " << endl;
  cout << "----------------------------------------------------------------------" << endl;
  cout << "Test 1: \nlower(11)" << endl;
  cout << lower(11);
  cout << endl;
  cout << "Test 2:\nlower(12)" << endl;
  cout << lower(12);
  cout << endl;
  cout << "Test 3: \nlower(13)" << endl;
  cout << lower(13);
  cout << endl;

  //Task E
  cout << "----------------------------------------------------------------------" << endl;
  cout << "                                Task E                                " << endl;
  cout << "----------------------------------------------------------------------" << endl;
  cout << "Test 1: \nupper(11)" << endl;
  cout << upper(11);
  cout << endl;
  cout << "Test 2:\nupper(12)" << endl;
  cout << upper(12);
  cout << endl;
  cout << "Test 3: \nupper(13)" << endl;
  cout << upper(13);
  cout << endl;

  //Task F
  cout << "----------------------------------------------------------------------" << endl;
  cout << "                                Task F                                " << endl;
  cout << "----------------------------------------------------------------------" << endl;
  cout << "Test 1: \ntrapezoid(12, 5)" << endl;
  cout << trapezoid(12, 5);
  cout << endl;
  cout << "Test 2: \ntrapezoid(13, 4)" << endl;
  cout << trapezoid(13, 4);
  cout << endl;
  cout << "Test 3: \ntrapezoid(5, 4)" << endl;
  cout << trapezoid(5, 4);
  cout << endl;

  //Task G
  cout << "----------------------------------------------------------------------" << endl;
  cout << "                                Task G                                " << endl;
  cout << "----------------------------------------------------------------------" << endl;
  cout << "Test 1: \ncheckerboard3x3(15, 12)" << endl;
  cout << checkerboard3x3(15, 12);
  cout << endl;
  cout << "Test 2: \ncheckerboard3x3(16, 11)" << endl;
  cout << checkerboard3x3(16, 11);
  cout << endl;
  cout << "Test 3: \ncheckerboard3x3(27, 27)" << endl;
  cout << checkerboard3x3(27, 27);
  cout << endl;

}
