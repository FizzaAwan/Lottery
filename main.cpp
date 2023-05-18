
//Lottery
#include <iostream>
#include <cstdlib>                    //allows us to use randomizing function. 
#include <ctime>                      //allows us the randomizer to be based on the changing time
using namespace std;
 
int main() {
 srand(time(0));		       //allows the randomizing to be based on time, which is always changing. 
  int winning_numbers[5];  //decelaration of array of 5 number array of the winning numbers
  int player_numbers[5];   //decelaration of array of 5 number array the players enter. 
  int digits_matched=0;   // declaring varaible to contain number of mathcing numbers in the arrays.  
  
    for (int i=0; i<=4; i++){           // creates a for loop that goes to all 5 index spots and inputs a number into the array. 
  winning_numbers[i]= rand()%10;      // uses rand function and %10 to make value between 0 and 9. 
  }

  cout << endl << "Lottery\n""Enter player's numbers: " ;      //outputs title and prompt for entering the players number.
  cin >> player_numbers[0] >> player_numbers[1]>>             
  player_numbers[2]>>player_numbers[3]>>player_numbers[4];     //enters the numbers into the respective indeces of the array of player numbers. 

 cout << endl<< "Winning numbers:  " ;  //outputs "winning_numbers "
 for (int j=0;j<=4;j++){                
   cout << winning_numbers[j] << " " ;  // a for loop that goes by every index spot per loop untill the entire array is displayed. 
 }                                      
cout << endl; 
 cout << "Player's numbers: " ;       //same as above, outputs player's entered number.
 for (int k=0;k<=4;k++){              
   cout << player_numbers[k] << " " ; 
 }                                    // a for loop that goes by every index per loop untill the entire array is displayed. 

 for(int q=0 ; q<=4; q++){                          
   if (player_numbers[q] == winning_numbers [q])     // bool expression, if index spot matches on both arrays. 
    digits_matched ++;            // a for loop that goes by the every index, one per loop, and looks at both indexes of the two arrays, and if the int value matches on both arrays, it increaments the digits_matched varaible. 
  }                                // the for loops used i, j, k, and q as count varaible, all differnt to pervent overlap. 

  cout << endl << endl << "Digits Matched: " << digits_matched << endl;    // outputs the amount of digits_matched between the array of numbers the player enters and the one generated by randomization in the program. 
  if (digits_matched == 5){
    cout << "YOU WON!"<< endl; 
  }                                 // if all the digist in the arrays match, meaning the digits_matched variable would equal 5 ( the total number of indexes), then the players has guessed the random number, and thus won the Lottery
  return 0; 
} 
