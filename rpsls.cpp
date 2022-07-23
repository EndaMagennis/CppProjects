/*the evolution of rock, paper scissors which includes 2 additional
states which icreases the number of potential outcomes. */

#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
  srand (time(NULL));

  int computer = rand() % 5 + 1;
  int user = 0;

  cout << "====================================\n";
  cout << "rock, paper, scissor, lizard, spock!\n";
  cout << "====================================\n";

  cout << "1) ✊\n";
  cout << "2) ✋\n";
  cout << "3) ✌\n";
  cout << "4) 🦎\n";
  cout << "5) 🖖\n";

  cout << "Your Choice: ";

  int rock = 1;
  int paper = 2;
  int scissors = 3;
  int lizard = 4;
  int spock = 5;

  cin >> user;

  cout << "Computer's Choice: " << computer <<"\n\n";
/*scissors > paper > rock > lizard > spock > scissors > lizard > paper > spock > rock > scissors*/

  if (user == scissors &&(computer == paper || computer == lizard)){
    cout << "You Win!\n";
  } else if (user == paper && (computer == rock || computer == spock)){
    cout << "You Win!\n";
  } else if (user == rock && (computer == scissors || computer == lizard)){
    cout << "You Win!\n";
  } else if (user == lizard && (computer == spock || computer == paper)){
    cout << "You Win!\n";
  } else if (user == spock && (computer == rock || computer == scissors)){
    cout << "You Win!\n";
  } else if (user == computer){
    cout << "It's a tie!\n";
  } else {
    cout << "You lose!\n";
  }

}
