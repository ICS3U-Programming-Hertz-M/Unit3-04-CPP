// Copyright (c) 2022 Hertz All rights reserved.
//
// Created by: Hertz Antonella
// Created on: Apr,3,2022
// This program asks the user to enter an interger and
// checks if the number entered is positive, negative, or just zero.


#include <iostream>

int main() {
  // declare variable
  int userNumb;

  // get a number from the user
  std::cout << "Enter a number: ";
  std::cin >> userNumb;
  std::cout << "" << std::endl;

  // check to see if the user number is either positive, negative or zero
  if (userNumb > 0) {
    std::cout << " your number is positive";
  } else if (userNumb < 0) {
    std::cout << " is a negative number";
  } else if (userNumb == 0) {
  std::cout << " your number is zero";
} }
