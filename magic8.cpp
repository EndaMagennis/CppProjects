#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  cout << "Magic 8-Ball: \n";
  string question = " ";
  cout << "Enter your question: \n";
  cin >> question;
  cout << '\n';

  srand(time(NULL));
  int answer = rand()%20;


  switch (answer) {
    case 1:
    cout << "Yes... not in the way you think... but yes." << '\n';
    break;
    case 2:
    cout << "It is decidedly so." << '\n';
    break;
    case 3:
    cout << "Without a doubt." << '\n';
    break;
    case 4:
    cout << "Yes - definitely." << '\n';
    break;
    case 5:
    cout << "Depends on your perspective." << '\n';
    break;
    case 6:
    cout << "As I see it, yes." << '\n';
    break;
    case 7:
    cout << "6 of one, half a bakers dozen... or some shit." << '\n';
    break;
    case 8:
    cout << "Outlook exists." << '\n';
    break;
    case 9:
    cout << "Yeah, sure." << '\n';
    break;
    case 10:
    cout << "Hmm... it's unclear." << '\n';
    break;
    case 11:
    cout << "How should I know?" << '\n';
    break;
    case 12:
    cout << "Wow, first time I've been asked that one, "
    << "let me think about it." << '\n';
    break;
    case 13:
    cout << "You know, instead of asking me,"
    << "why not take some initiative?" << '\n';
    break;
    case 14:
    cout << "Where I come from,"
    << " that's a little inappropriate." << '\n';
    break;
    case 15:
    cout << "Well, if I tell you that,"
    << " the world will lose a sense of mystique." << '\n';
    break;
    case 16:
    cout << "That's a strange one, but no." << '\n';
    break;
    case 17:
    cout << "Nah, big doubt on that one." << '\n';
    break;
    case 18:
    cout << "Just, straight up no." << '\n';
    break;
    case 19:
    cout << "Not a snowball's chance in hell, compadre." << '\n';
    break;
    case 20:
    cout << "Nope! Nilch! Nein! Nay! Nil! No!";
    break;

  }
}
