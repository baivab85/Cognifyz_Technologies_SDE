#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  
  int random_number = rand() % 100 + 1;

  
  int guess;
  cout << "Guess a number between 1 and 100: ";
  cin >> guess;

  
  while (guess != random_number) {
    if (guess < random_number) {
      cout << "Your guess is too low. Try again.\n";
    } else {
      cout << "Your guess is too high. Try again.\n";
    }

    cout << "Guess a number between 1 and 100: ";
    cin >> guess;
  }

 
  cout << "Congratulations!!! You guessed the correct number.\n";

  return 0;
}
