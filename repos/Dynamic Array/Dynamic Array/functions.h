//Author: Anne Konicki
//Class : CSI 240-02
// Assignment : Module-04-Lab Assignment 4 - Dynamic Array 
// Date Assigned : 2/9/2023
// Due Date : 2/13/2023
// Description :
// Write a program that will prompt the user for a size. 
// Based on the specified size, create a dynamic array and populate the dynamic array with random numbers. 
// Once the array is populated, display the array on the screen (keep it organized for readability). 
// Then, sort the array based on ascending order and display the sorted array on the screen.
// 
// Certification of Authenticity :
//I certify that this is entirely my own work, except where I have given fully documented
// references to the work of others.I understand the definition and
// consequences of plagiarism and acknowledge that the assessor of this assignment
// may, for the purpose of assessing this assignment :
// -Reproduce this assignment and provide a copy to another member of
// academic staff; and / or
// - Communicate a copy of this assignment to a plagiarism checking service
// (which may then retain a copy of this assignment on its database for
// the purpose of future plagiarism checking)


#pragma once
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

//Given code (modified)
const int UPPER_BOUND = 50; // The largest random number, inclusive 
//Given code
const int LOWER_BOUND = 0;

using namespace std;

int promptSize();
int random(int, int);
void fillArray(int, int*);
void displayArray(int, int*);
void sortArray(int, int*);