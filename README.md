# Contact Management System

This is a simple C++ program that allows you to manage and search for contacts. It allows you to enter contact names and phone numbers, sorts them based on the phone numbers, and then allows you to search for a contact by name.

## How to Use

1. Compile the program: Use a C++ compiler to compile the code. You can do this by running a command like `g++ contact_management.cpp -o contact_management`.

2. Run the program: Execute the compiled program using the command `./contact_management`.

3. Follow the on-screen instructions:
   - You will be prompted to enter 3 contact names and phone numbers.
   - The program will then sort the contacts in ascending order based on the phone numbers.
   - You can search for a contact by entering a name.

## Code Overview

- `nameArray` and `numberArray` are arrays to store contact names and phone numbers.
- The program takes input for contact names and phone numbers, stores them in the arrays, and then sorts them based on the phone numbers.
- After sorting, it displays the contacts in ascending order of phone numbers.
- You can search for a contact by entering a name, and it will display the corresponding phone number if found.

## Example Usage

```plaintext
Please enter 3 contact names and numbers.
Please enter a contact name: John
Please enter a number for John: 123456
Please enter a contact name: Alice
Please enter a number for Alice: 789012
Please enter a contact name: Bob
Please enter a number for Bob: 456789

Sorted List
1. Name: Alice | Number: 789012
2. Name: Bob   | Number: 456789
3. Name: John  | Number: 123456

Enter name to search: Alice

Name  : Alice
Number: 789012
```

## Author

Created by [Rowan Stratton]

Feel free to modify and use this code as needed for your personal or educational purposes.
