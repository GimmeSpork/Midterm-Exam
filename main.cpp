/******************************************************************************
# Author:           Lucy Price
# Assignment:       Midterm Exam - Rock Collector Championship
# Date:             May 6, 2026
# Description:      This program will calculate the first, second, third place
#                   winners, as well as any ties from three participants and
#                   how many rocks each person collected. It will also calculate
#                   the average number of rocks collected.
# Input:            player1, player2, and player3 as strings, and rocks1, rocks2,
#                   and rocks3 as ints.
# Output:           avgRocks as double.
# Sources:          Midterm exam resources, and zybooks up to conditionals II.
#******************************************************************************/
#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
using namespace std;

// Main function
int main() {

  //declare variables as strings and ints
  int const NUM_PLAYERS = 3;
  string player1;
  string player2;
  string player3;
  int rocks1 = 0;
  int rocks2 = 0;
  int rocks3 = 0;

  //welcome message
  cout << "Welcome to the Rock Collector Championships!" << endl;
  //player 1
  cout << "\nEnter player 1 name: ";
  getline(cin, player1);
  cout << "How many rocks did " << player1 << " collect?: ";
  cin >> rocks1;
  cin.ignore(numeric_limits<streamsize>::max(),'\n');
  if (rocks1 < 0) {
    cout << "Invalid amount, 0 will be entered." << endl;
    rocks1 = 0;
  }
  //player 2
  cout << "\nEnter player 2 name: ";
  getline(cin, player2);
  cout << "How many rocks did " << player2 << " collect?: ";
  cin >> rocks2;
  cin.ignore(numeric_limits<streamsize>::max(),'\n');
  if (rocks2 < 0) {
    cout << "Invalid amount, 0 will be entered." << endl;
    rocks2 = 0;
  }

  //player 3
  cout << "\nEnter player 3 name: ";
  getline(cin, player3);
  cout << "How many rocks did " << player3 << " collect?: ";
  cin >> rocks3;
  cin.ignore(numeric_limits<streamsize>::max(),'\n');
  if (rocks3 < 0) {
    cout << "Invalid amount, 0 will be entered." << endl;
    rocks3 = 0;
  }

  //calculations and winners
  //3 way tie
  if (rocks1 == rocks2 && rocks2 == rocks3) {
    cout << "\nIt's a three way tie!" << endl;
  } 
  //1st place ties
  else if (rocks1 == rocks2 && rocks1 > rocks3) {
    cout << "\n" << player1 << " and " << player2 << " are tied for first!" << endl;
    cout << player3 << " is in second place!" << endl;
  }
  else if (rocks2 == rocks3 && rocks2 > rocks1) {
    cout << "\n" << player2 << " and " << player3 << " are tied for first!" << endl;
    cout << player1 << " is in second place!" << endl;
  }
  else if (rocks1 == rocks3 && rocks1 > rocks2) {
    cout << "\n" << player1 << " and " << player3 << " are tied for first!" << endl;
    cout << player2 << " is in second place!" << endl;
  }

  //2nd place ties
  else if (rocks1 > rocks2 && rocks2 == rocks3) {
    cout << "\n" << player2 << " and " << player3 << " are tied for second!" << endl;
  }
  else if (rocks2 > rocks1 && rocks3 == rocks1) {
    cout << "\n" << player1 << " and " << player3 << " are tied for second!" << endl;
  }
  else if (rocks3 > rocks1 && rocks1 == rocks2) {
    cout << "\n" << player1 << " and " << player2 << " are tied for second!" << endl;
  }

  //regular places
  //player 1 in first
  else if (rocks1 > rocks2 && rocks1 > rocks3) {
    cout << "\n" << player1 << " is in first place!" << endl;
      if (rocks2 > rocks3) {
        cout << player2 << " is in second place!" << endl;
        cout << player3 << " is in third place!" << endl;
      }
      else {
        cout << player3 << " is in second place!" << endl;
        cout << player2 << " is in second place!" << endl;
      }
  }
  //player 2 in first
   else if (rocks2 > rocks1 && rocks2 > rocks3) {
    cout << "\n" << player2 << " is in first place!" << endl;
      if (rocks1 > rocks3) {
        cout << player1 << " is in second place!" << endl;
        cout << player3 << " is in third place!" << endl;
      }
      else {
        cout << player3 << " is in second place!" << endl;
        cout << player1 << " is in third place!" << endl;
      }
  }
  //player 3 in first
   else if (rocks3 > rocks1 && rocks3 > rocks2) {
    cout << "\n" << player3 << " is in first place!" << endl;
      if (rocks2 > rocks1) {
        cout << player2 << " is in second place!" << endl;
        cout << player1 << " is in third place!" << endl;
      }
      else {
        cout << player1 << " is in second place!" << endl;
        cout << player2 << " is in third place!" << endl;
      }
  }
  
  //calculations for rock average as double
  cout << fixed << setprecision(2);
  double avgRocks = (static_cast<double>(rocks1 + rocks2 + rocks3) / NUM_PLAYERS);
  cout << "\nThe average number of rocks collected by the top three players " 
  "is " << avgRocks << " rocks!" << endl;

  //goodbye message
  cout << "\nCongratulations Rock Collectors!" << endl;

  return 0;
}