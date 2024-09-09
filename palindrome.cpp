//Kojiro, Brandon
//3 August 2024
//P3 Galbraith - C++/Data Structures
//Palindrome

#include <iostream>
#include <cstring>

using namespace std;

int main () {
  //read in using cin.get
  char input[80];
  cin.get(input, 81); //81 chars for null terminating char
  cin.get();

  //remove punctuation/white spaces
  char forward[80];
  for (int i = 0; i < strlen(input); i++){
    if (!ispunct(input[i]) && !isspace(input[i])) {
      forward[i] = char(tolower(input[i]));
      cout << forward[i];
    }
  }
  cout << endl;

  //copy and reverse array
  char reversedStr[80];
  for (int i = 0; i < strlen(input); i++) {
    reversedStr[strlen(forward) - i] = forward[i]; //this is messing up
  }
  for (int i = 0; i < strlen(input); i++) {
    cout << reversedStr[i];
  }
  cout << endl;
  
  //compare arrays and print
  if (strcmp(forward, reversedStr) == 0) {
    cout << "Palindrome";
  } else {
    cout << "Not a palindrome";
  }
  
  return 0;
}
