//
//  main.cpp
//  PRG-7-12-Grade-Book
//
//  Created by Keith Smith on 10/8/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  A teacher has five students who have taken four tests. The teacher uses the following
//  grading scale to assign a letter grade to a student, based on the average of his or her
//  four test scores:
//
//  Test Score                  Letter Grade
//  ----------------------------------------
//  90-100                      A
//  80-89                       B
//  70-79                       C
//  60-69                       D
//  0-59                        F
//
//  Write a program that uses an array of string objects to hold five student names,
//  an array of five characters to hold the five students' letter grades, and five arrays of
//  four doubles to hold each student's set of test scores.
//
//  The program should allow the user to enter each student's name and his or her four
//  test scores. It should then calculate and display each student's average test score, and a
//  letter grade based on the average.
//
//  Input Validation: Do not accept test scores less than 0 or greater than 100.


//  Would've loved to just use a multi-dimensional array here...
#include <iostream>
#include <iomanip>

using namespace std;

const int INT_STUDENTS = 5;
const int INT_TESTS = 4;

void enterStudentNames(string[]);
void enterTestScores(const string[], int[], int[], int[], int[], int[]);
void calculateAverage(const string[], const int[], const int[], const int[], const int[] ,const int[], float[]);
void calculateGrades(const string[], const float[], char[]);
void displayResults(const string[], const float[], const char[]);

int main()
{
    string strStudentNameArray[INT_STUDENTS];
    
    char chrStudentTestScores[INT_STUDENTS];
    
    int intStudent1[INT_TESTS];
    int intStudent2[INT_TESTS];
    int intStudent3[INT_TESTS];
    int intStudent4[INT_TESTS];
    int intStudent5[INT_TESTS];
    
    float fltStudentAverages[INT_STUDENTS];
    
    cout << fixed << showpoint << setprecision(1);
    
    enterStudentNames(strStudentNameArray);
    
    enterTestScores(strStudentNameArray, intStudent1, intStudent2, intStudent3, intStudent4, intStudent5);
    
    calculateAverage(strStudentNameArray, intStudent1, intStudent2, intStudent3, intStudent4, intStudent5, fltStudentAverages);
    
    calculateGrades(strStudentNameArray, fltStudentAverages, chrStudentTestScores);
    
    displayResults(strStudentNameArray, fltStudentAverages, chrStudentTestScores);
    
    return 0;
}

void enterStudentNames(string strStudentNameArray[])
{
    int intStudent;
    
    intStudent = 1;
    
    for(int student = 0 ; student < INT_STUDENTS ; student++)
    {
        cout << "Please enter the student " << intStudent << "'s name: ";
        cin >> strStudentNameArray[student];
        
        intStudent++;
    }
}

void enterTestScores(const string strStudentNameArray[], int intStudent1[], int intStudent2[], int intStudent3[], int intStudent4[], int intStudent5[])
{
    int intTest;
    
    for(int test = 0 ; test < INT_TESTS ; test++)
    {
        cout << "Please enter " << strStudentNameArray[0] << "'s score for test " << test + 1 << ": ";
        cin >> intTest;
        while(!cin || intTest < 0 || intTest > 100)
        {
            cout << "Please enter a test score between 0 and 100: ";
            cin.clear();
            cin.ignore();
            cin >> intTest;
        }
        intStudent1[test] = intTest;
    }
    
    for(int test = 0 ; test < INT_TESTS ; test++)
    {
        cout << "Please enter " << strStudentNameArray[1] << "'s score for test " << test + 1 << ": ";
        cin >> intTest;
        while(!cin || intTest < 0 || intTest > 100)
        {
            cout << "Please enter a test score between 0 and 100: ";
            cin.clear();
            cin.ignore();
            cin >> intTest;
        }
        intStudent2[test] = intTest;
    }
    
    for(int test = 0 ; test < INT_TESTS ; test++)
    {
        cout << "Please enter " << strStudentNameArray[2] << "'s score for test " << test + 1 << ": ";
        cin >> intTest;
        while(!cin || intTest < 0 || intTest > 100)
        {
            cout << "Please enter a test score between 0 and 100: ";
            cin.clear();
            cin.ignore();
            cin >> intTest;
        }
        intStudent3[test] = intTest;
    }
    
    for(int test = 0 ; test < INT_TESTS ; test++)
    {
        cout << "Please enter " << strStudentNameArray[3] << "'s score for test " << test + 1 << ": ";
        cin >> intTest;
        while(!cin || intTest < 0 || intTest > 100)
        {
            cout << "Please enter a test score between 0 and 100: ";
            cin.clear();
            cin.ignore();
            cin >> intTest;
        }
        intStudent4[test] = intTest;
    }
    
    for(int test = 0 ; test < INT_TESTS ; test++)
    {
        cout << "Please enter " << strStudentNameArray[4] << "'s score for test " << test + 1 << ": ";
        cin >> intTest;
        while(!cin || intTest < 0 || intTest > 100)
        {
            cout << "Please enter a test score between 0 and 100: ";
            cin.clear();
            cin.ignore();
            cin >> intTest;
        }
        intStudent5[test] = intTest;
    }
}

void calculateAverage(const string strStudentNameArray[], const int intStudent1[], const int intStudent2[], const int intStudent3[], const int intStudent4[], const int intStudent5[], float fltStudentAverages[])
{
    float fltTestAverage;
    //    float fltStudent1Average;
    //    float fltStudent2Average;
    //    float fltStudent3Average;
    //    float fltStudent4Average;
    //    float fltStudent5Average;
    
    fltTestAverage = 0;
    
    for(int test = 0 ; test < INT_TESTS ; test++)
    {
        fltTestAverage += intStudent1[test];
    }
    
    fltStudentAverages[0] = fltTestAverage / static_cast<float>(INT_TESTS);
    fltTestAverage = 0;
    
    for(int test = 0 ; test < INT_TESTS ; test++)
    {
        fltTestAverage += intStudent2[test];
    }
    
    fltStudentAverages[1] = fltTestAverage / static_cast<float>(INT_TESTS);
    fltTestAverage = 0;
    
    for(int test = 0 ; test < INT_TESTS ; test++)
    {
        fltTestAverage += intStudent3[test];
    }
    
    fltStudentAverages[2] = fltTestAverage / static_cast<float>(INT_TESTS);
    fltTestAverage = 0;
    
    for(int test = 0 ; test < INT_TESTS ; test++)
    {
        fltTestAverage += intStudent4[test];
    }
    
    fltStudentAverages[3] = fltTestAverage / static_cast<float>(INT_TESTS);
    fltTestAverage = 0;
    
    for(int test = 0 ; test < INT_TESTS ; test++)
    {
        fltTestAverage += intStudent5[test];
    }
    
    fltStudentAverages[4] = fltTestAverage / static_cast<float>(INT_TESTS);
}

void calculateGrades(const string strStudentNameArray[], const float fltStudentAverages[], char chrStudentTestScores[])
{
    if(fltStudentAverages[0] <= 100 && fltStudentAverages[0] >= 90)
        chrStudentTestScores[0] = 'A';
    else if(fltStudentAverages[0] <= 89 && fltStudentAverages[0] >= 80)
        chrStudentTestScores[0] = 'B';
    else if(fltStudentAverages[0] <= 79 && fltStudentAverages[0] >= 70)
        chrStudentTestScores[0] = 'C';
    else if(fltStudentAverages[0] <= 69 && fltStudentAverages[0] >= 60)
        chrStudentTestScores[0] = 'D';
    else if(fltStudentAverages[0] <= 59)
        chrStudentTestScores[0] = 'F';
    
    if(fltStudentAverages[1] <= 100 && fltStudentAverages[1] >= 90)
        chrStudentTestScores[1] = 'A';
    else if(fltStudentAverages[1] <= 89 && fltStudentAverages[1] >= 80)
        chrStudentTestScores[1] = 'B';
    else if(fltStudentAverages[1] <= 79 && fltStudentAverages[1] >= 70)
        chrStudentTestScores[1] = 'C';
    else if(fltStudentAverages[1] <= 69 && fltStudentAverages[1] >= 60)
        chrStudentTestScores[1] = 'D';
    else if(fltStudentAverages[1] <= 59)
        chrStudentTestScores[1] = 'F';
    
    if(fltStudentAverages[2] <= 100 && fltStudentAverages[2] >= 90)
        chrStudentTestScores[2] = 'A';
    else if(fltStudentAverages[2] <= 89 && fltStudentAverages[2] >= 80)
        chrStudentTestScores[2] = 'B';
    else if(fltStudentAverages[2] <= 79 && fltStudentAverages[2] >= 70)
        chrStudentTestScores[2] = 'C';
    else if(fltStudentAverages[2] <= 69 && fltStudentAverages[2] >= 60)
        chrStudentTestScores[2] = 'D';
    else if(fltStudentAverages[2] <= 59)
        chrStudentTestScores[2] = 'F';
    
    if(fltStudentAverages[3] <= 100 && fltStudentAverages[3] >= 90)
        chrStudentTestScores[3] = 'A';
    else if(fltStudentAverages[3] <= 89 && fltStudentAverages[3] >= 80)
        chrStudentTestScores[3] = 'B';
    else if(fltStudentAverages[3] <= 79 && fltStudentAverages[3] >= 70)
        chrStudentTestScores[3] = 'C';
    else if(fltStudentAverages[3] <= 69 && fltStudentAverages[3] >= 60)
        chrStudentTestScores[3] = 'D';
    else if(fltStudentAverages[3] <= 59)
        chrStudentTestScores[3] = 'F';
    
    if(fltStudentAverages[4] <= 100 && fltStudentAverages[4] >= 90)
        chrStudentTestScores[4] = 'A';
    else if(fltStudentAverages[4] <= 89 && fltStudentAverages[4] >= 80)
        chrStudentTestScores[4] = 'B';
    else if(fltStudentAverages[4] <= 79 && fltStudentAverages[4] >= 70)
        chrStudentTestScores[4] = 'C';
    else if(fltStudentAverages[4] <= 69 && fltStudentAverages[4] >= 60)
        chrStudentTestScores[4] = 'D';
    else if(fltStudentAverages[4] <= 59)
        chrStudentTestScores[4] = 'F';
}

void displayResults(const string strStudentNameArray[], const float fltStudentAverages[], const char chrStudentTestScores[])
{
    for(int student = 0 ; student < INT_STUDENTS ; student++)
    {
        cout << strStudentNameArray[student] << "'s average test score was " << fltStudentAverages[student] << " which is a(n) " << chrStudentTestScores[student] << endl;
    }
}

