/* 
 * File:   main.cpp
 * Author: Rowan Stratton
 * Module 04 Assignment - Simple Contact Manager
 * Created on January 26, 2021
 */

#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
  string nameArray[3] = {""};
  string numberArray[3] = {""};

  int arraySize = 3;

  //Fill the arrays with contacts
  cout << "Please enter 3 contact names and numbers." << endl;
  for (int i = 0; i < 3; i++) 
  {
    cout << "Please enter a contact name: ";
    cin >> nameArray[i];
    cout << "Please enter a number for " << nameArray[i] << ": ";
    cin >> numberArray[i];
  }

  // Sort in ascending order by the phone number
  for (int i = 0; i < arraySize-1; i++)
  {
    // Last i elements are already in place  
    for (int j = 0; j < arraySize-i-1; j++)  
    {
      // sort by phone number
      if (numberArray[j] > numberArray[j+1])  
      {
        // sort name
        string temp = nameArray[j];
        nameArray[j] = nameArray[j+1];
        nameArray[j+1] = temp;

        // sort phone
        temp = numberArray[j];
        numberArray[j] = numberArray[j+1];
        numberArray[j+1] = temp;
      }
    } 
  }      

  // Print out the array elements
  cout << endl << "Sorted List" << endl;
  for (int i = 0; i < 3; i++) 
  {
    cout << setw(2) << i+1 << "." << " Name: " << setw(5) << nameArray[i] << " |";
    cout << " Number: " << setw(5) << numberArray[i] << endl;
  }

  //Get the search term
  string search;
  cout << endl << "Enter name to search: ";
  cin >> search;
  
  //Search the array based on the name
  int found = -1;
  for (int i = 0; i < arraySize; i++)
  {
    if (nameArray[i] == search)
      found = i;
  }

  // print name and number
  cout << endl;
  if (found != -1)
  {
    cout << " Name  : " << nameArray[found] << endl;
    cout << " Number: " << numberArray[found] << endl;
  }
  else
  {
    cout << "The person is not in the array." << endl;
  }

  return 0;
}
