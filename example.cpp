/* Play guessing game in C++
 Author: Ayan Masud
 Date: 8/30/2024
 */

/* 3 Rules of C++:
  - you should #include <iostream> and not stdio
  - avoid using a mouse when possible (you cant really use a mouse anyways)
  - only use break/continue (I implemented this in my while loop)
 */

#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main()
{
  bool isPlaying = true;
  int randomNum = 0;
  int input = 101;
  int guessNum = 0;
  char againChar = 'a';
  
  srand(time(NULL)); // sets a random seed so that the random number is not always the same
  
  while (isPlaying = true) // this is a while loop so that the player can play forever unless until they dont want to play anymore
  {
    randomNum = (rand() % 101); // random number is set to 0 to 101 minus 1. aka 0-100
    cout << "Guess a number 1-100" << endl;
    while (input != randomNum) // this is a while loop so the player can guess forever
    {
      cin >> input; // player guesses the number
      guessNum++; // adds to the number of guesses the player took
      if (input > randomNum) // player guessed too high
      {
	cout << "Too high!" << endl;
      }
      else if (input < randomNum) // player guessed too low
      {
	cout << "Too low!" << endl;
      }
      else if (input == randomNum) // player guessed it
      {
	cout << "You guessed it in " << guessNum << " tries!" << endl;
      }
    }
    cout << "Play Again? (y)" << endl;
    cin >> againChar; // ask player whether they want to play or not
    if (againChar == 'y')
    {
      guessNum = 0; // resets number of guesses for new game
      continue;
    }
    else
    {
      break; // exit the while loop if they didnt want to play again
    }
  }
  //cin >> input;
  //cout << "You entered: " << input++ << endl;
  //cout << input;
  
  return 0;
}
