#include <iostream>

std::string box(int width, int height){
  std::string returnString = "Shape: \n";
  //printing box
  for (int i = 0; i < height; i++){
    for (int j = 0; j < width; j++){
      //print remaining stars in row
      returnString += "*";
    }
    //skip to next line to start next row
    returnString += "\n";
  }

  return returnString;
}

std::string checkerboard(int width, int height){
  std::string returnString = "Shape: \n";
  //printing board
  for (int row = 0; row < height; row++){
    for (int col = 0; col < width; col++){
      //if row is even
      if ((row % 2) == 0){
        //if col is odd
        if ((col % 2) != 0){
          returnString += " "; //print space
        //if col is even
        } else {
          returnString += "*"; //print star
        }
        //if row is odd
      } else if ((row % 2) != 0) {
        //if col is odd
        if ((col % 2) != 0){
          returnString += "*"; //print star
        //if col is even
        } else {
          returnString += " "; //print space
        }
      }

    }
    //skip to next line to start next row
    returnString += '\n';
  }

  return returnString;
}

std::string lower(int length){
  std::string returnString = "Shape: \n";

  int spaces = 1;
  for (int i = 0; i < length; i++){
    for (int j = 0; j < spaces; j++)
    {
    returnString += "*";
    }

    spaces += 1;
    returnString += "\n";
  }
  return returnString;
}

std::string upper(int length){
  std::string returnString = "Shape: \n";

  int spaces = 0;
  int s = 0;
  int done = 0;
  //printing board
  for (int i = 0; i < length; i++)
  {
    s = spaces;
    for (int j = 0; j < length; j++){
      if (s == 0){
        done = 1;
      }

      if (s > 0){
        returnString += " ";
        s --;
      } else if (done == 1) {
        returnString += "*";
      }

    }
    done = 0;
    spaces++;
    returnString += "\n";
  }
  return returnString;
}

std::string trapezoid(int width, int height){
  std::string returnString = "Shape: \n";
  //Check if it is an impossible shape
  if ((width % 2 == 0) && (height > (width/2))){ //even: if the height is larger than the half of width
    return "Impossible Shape!";
  } else if ((width % 2 != 0) && (height > (width/2) + 1)){ //odd: if the height is larger than (half of with) + 1
    return "Impossible Shape!";
  }

  int indents = 0;

  for(int row = 0; row < height; row++){
    int ind = indents; //var used to decrement indents to track how many were used
    int flag = 0;
    for(int col = 0; col < width; col++){
      //print initial indents
      if ((col == ind) && (ind == 0)){
        returnString += "*"; //no indents needed
        flag = 1; //done with indenting; start using spaces
      } else if (ind > 0){ //all other rows; add appropriate spacing
        returnString += " "; //print indent
        ind -= 1; //decrement indent
        if (ind == 0){ //done with indents
          flag = 1; //flagger; done with indenting
        }
      }

      //print stars
      if (flag == 1){
        if ((col + indents + 1) < (width)){ //if at final star position
          returnString += "*"; //print star
        }
      }
    }

    //increment indents up to the value of the height
    if (indents < height){
      indents += 1;
    }

    //start new row
    returnString += "\n";
  }

  return returnString;
}
