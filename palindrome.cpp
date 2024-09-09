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
  cout << "input length: " << strlen(input) << endl;
  int count = 0;
  for (int i = 0; i < strlen(input); i++){
    if (!ispunct(input[i]) && !isspace(input[i])) {
      forward[count] = char(tolower(input[i])); //builds forward if the character is a letter
      count++;
    }
  }
  forward[count] = '\0'; //terminates the string
  cout << "forward length: " << strlen(forward) << endl;
  cout << forward << endl;

  //copy and reverse array
  char reversedStr[80];
  for (int i = 0; i <= strlen(forward); i++) {
    reversedStr[i] = char(forward[strlen(forward) - 1 - i]); //can't include the terminating character at the end of forward[]
  }
  reversedStr[count] = '\0';
  cout << reversedStr << endl;

  //compare arrays and print
  if (strcmp(forward, reversedStr) == 0) {
    cout << "Palindrome";
  } else {
    cout << "Not a palindrome";
  }
  
  return 0;
}
