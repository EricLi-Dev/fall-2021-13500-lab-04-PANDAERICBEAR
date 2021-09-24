#include <iostream>

std::string cross(int size){
  std::string returnString = "Shape: \n";
  int space = size-2;//to store how much space is needed per iteration
  int indent = 0; //to store how much indent space is needed per iteration

  //printing board
  for (int row = 0; row < size; row++){
    int s = space; //var used to decrement spaces to track how many were used so far
    int ind = indent; //var used to decrement indents to track how many were used
    int flag = 0; //done with indents in this iteration flagger

    for (int col = 0; col < size; col++){
      //since indents = 0 in first row, just add the initial * bc no indents are needed
      if ((col == ind) && (ind == 0)){
        returnString += "*"; //no indents needed
        flag = 1; //done with indenting; start using spaces
      } else if (ind > 0){ //all other rows; add appropriate spacing
        returnString += " "; //print indent
        ind -= 1; //decrement indent
        if (ind == 0){ //done with indents
          returnString += "*"; //add *
          flag = 1; //flagger; done with indenting
        }
      }

      //print ending star
      if ((col + 1 + ind) == size){ //At final star position?
        //for odd sizes to get rid of the extra star in the middle
        if ((size % 2 != 0) && (row == (size/2))){ //if the size is odd and I am at the middle position
          returnString += ""; //print nothing
        } else { //for all other cases
          returnString += "*"; //all else print stars for final positions
        }
      } else if ((flag == 1) && (s > 0)){ //done with indents, I have spaces left to fill
        returnString += " "; //fill current position with space
        s -= 1; //decrement space
      }

    }

    if (size % 2 == 0){ //if size is even
      if (row < (size / 2)){ //if row is before midpoint
        //cout << row;
        if (!(row + 1 == (size / 2))){
          indent += 1;
          space -= 2;
        }
      }
       else { //if row is after midpoint
        //cout << row;
        indent -= 1;
        space += 2;
      }
    } else { //if size is odd
      if (row < ((size / 2))){ //if row is before midpoint
        //cout << row;
        indent += 1; //increment indent by 1
        space -= 2; //decrement space by 2

      } else { //after midpoint
        //cout << row;
        indent -= 1; //decrement indent
        space += 2; //increment spaces by 2
      }
    }

    //skip to next line to start next row
    returnString += "\n";
  }
  return returnString;
}
