#include <iostream>

std::string checkerboard3x3(int width, int height){
  std::string returnString = "Shape: \n";
  int set1 = 3; //set counter for first set
  int set2 = 0; //set counter for second set
  int setRow = 4; //set counter for rows
  int trigger = 0; //flagger variable

  //printing board
  for (int row = 0; row < height; row++){
    for (int col = 0; col < width; col++){
      if (setRow > 0){ // running through 1st row set
        if (set1 > 0){ // running through 1st set
          returnString += "*"; // print star
          set1--; //decrement set
          //cout << set1;
          if (set1 == 0){ //when done with 1st set,
            trigger = 1; //trigger flag
          }
        }
        else if (set2 > 0){ //running through 2nd set
          returnString += " "; //print spaces
          set2--; //decrement set
          //cout << set2;

          if (set2 == 0){ //when done with 2nd set,
            trigger = 1; //trigger flag
            set1 = 3; //re-initialize set1 to start next set
          }
        }

        if (trigger == 1){ //when flag is triggered; done with set
          if (set1 == 0){ //if done with set1; start set 2
            //cout << " done with set 1 ";
            set2 = 3;
            trigger = 0; //de-trigger flag
          }
          if (set2 == 0){ //if done with set2; start set 1
            //cout << " done with set 2 ";
            set1 = 3;
            trigger = 0; //de-trigger flag
          }
        }
      }
      else if (setRow < 0){  //running through 2nd row set
        if (set1 > 0){ // running through 1st set
          returnString += " "; //print spaces
          set1--; //decrement set

          if (set1 == 0){ //when done with set1,
            trigger = 1; //trigger flag
          }
        } else if (set2 > 0){ //running through 2nd set
          returnString += "*"; //print stars
          set2--; //decrement set

          if (set2 == 0){ //when done with set2,
            trigger = 1; //trigger flag
            set1 = 3; //re-initialize set1, to start next set
          }
        }

        if (trigger == 1){ //flag is triggered
          if (set1 == 0){ // if done with set1; start next set
            set2 = 3;
            trigger = 0; //de-trigger flag
          }
          if (set2 == 0){ //if done with set2; start next set
            set1 = 3;
            trigger = 0; //de-trigger flag
          }
        }
      }
    }
    set1 = 3; //reset set1 variable to 3
    set2 = 0; //reset set2 variable to 0

    if (setRow > 0){ // if still doing 1st set, decrement towards 1
      setRow--;
    }
    if (setRow < 0){ // if still doing 2nd set, increment towards -1
      setRow++;
    }
    if (setRow == 1){ // done with first set
      setRow = -4; //set to -4, to start 2nd set
    }
    if (setRow == -1){ //done with second set
      setRow = 4; //set to 4, to start 1st set
    }
    //cout << setRow;
    returnString += "\n";
}

  return returnString;

}
