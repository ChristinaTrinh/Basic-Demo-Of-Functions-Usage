// Description: This program demonstrates how to use functions.
//LAB: Functions
//Course: CIT 120-T1
//Team C-Programmers: Christina, Nafissa, Francois, Charlie
//Professor: Makhene
//Date: 4/7/21
#include <iostream>
#include <string>
#include<cctype>
using namespace std;

//prototypes for 7 functions
void banner();
void getPos();
void getPosNum();
void getMultOfNum();
void getLetter();
void getInRange();
void getPerfectSquare();
void getMultOfNumPart7();

int main()
{
banner();//call banner function
getPos(); // call getPos function
getPosNum(); // call getPosNum function
getMultOfNum(); // call getMultOfNUm function
getLetter(); // call getLetter function
getInRange(); //call getInRange funtion
getPerfectSquare(); //call getPerfectSquare function
getMultOfNumPart7(); //call getMultOfNumPart7 function
return 0; 
}
void banner () //banner function
{
 cout <<"\t\tDescription: This program demonstrates how to use functions."<< endl 
      << "\t\t\t\t\t LAB: Functions" << endl
      <<"\t\t\t\t\tCourse: CIT 120-T1" << endl 
      <<"\t\t\tTeam C - Programmers: Christina, Nafissa, Francois, Charlie" << endl
      <<"\t\t\t\t\tProfessor: Makhene" << endl << "\t\t\t\t\t  Date: 4/7/21" 
      <<endl <<endl;
}
void getPos() //part 1 function
{
    cout << "+Part 1: \n";
    double num;//declare variable
    cout << "\t\tEnter a number: "; //tell user to enter number
    cin >> num; //get the input
    while(num<0) //check if it's negative 
    {
        cout <<"\t\t"<< num << " is not positive. Please Enter again: "; //send error message
        cin >> num;//get input again
    } 
    if(num>=0)//if it's positive
    {
        cout << "\t\tGood! "<< num << " is positive!\n"; //display message
    }
}
void getPosNum() //part 2 function
{
    cout << "+Part 2:\n"; 
    double num; //variable declared
    cout << "\t\tEnter a number: "; // tell user to enter a number
    cin >> num; //get input
    cin.ignore();
    while(cin.fail()||num<0) // a character or negative will enter the loop
    {
    if(cin.fail()) //if it's a character
    {
        cout << "\t\tNo character. Please Enter again: ";//error message
        cin.clear(); //clear input
        cin.ignore(1000, '\n'); //discard input
        cin>>num; //get new input
    }
    if(num<0) // if it's a negative
    {
        cout <<"\t\t"<< num << " is not a positive. Please Enter again: ";//error message
        cin >> num;//get input again
    }
    }
    if(num>=0) // if everything looks good
    {
         cout<< "\t\tGood! " << num << " is positive!\n";//congrats message
    }
}

void getMultOfNum() // part 3 function
{
    cout << "+Part 3:\n";
    int num; //variable declared
    cout << "\t\tEnter a multiple of 5: "; // tell user to enter a number
    cin >> num; //get input
    cin.ignore();
    while(cin.fail()||num%5!=0) //a character and not a multiple of 5 will enter this loop
    {
    if(cin.fail())//if a character
    {
        cout << "\t\tNo character. Please Enter again: ";//error message
        cin.clear(); //clear input
        cin.ignore(1000, '\n');//discard input
        cin>>num;//get new input
    }
    else if(num%5!=0) //if not a multiple of 5
    {
        cout <<"\t\t"<<num << " is not a multiple of 5. Please Enter again: ";//error message
        cin >> num;//get new input
    }
    }
    if(num%5==0) //if it's a multiple of 5
    {
        cout << "\t\tGood! "<< num << " is a multiple of 5!\n"; //congrats message
    }
}

void getLetter() //part 4 function
{
    cout << "+Part 4: \n";
    char letter;//variable declared
    cout << "\t\tEnter a letter: ";//tell user to enter a letter
    cin>>letter; //get the letter
    cin.ignore();
    while(isdigit(double (letter)))//a number will enter this loop
    {
        cout << "\t\t" << letter << " is not letter. Please Enter again: ";
        cin>>letter;//get new letter
    }
    
    cout << "\t\tGood! '"<<letter << "' is a letter!\n";//if it's good, then display message

}

void getInRange() //part 5 function
{
    cout << "+Part 5: \n";
    double starting, ending, num; //declared variable
    cout << "\t\tWhat is the starting point? ";//ask starting point
    cin >> starting; //get input
    cout << "\t\tWhat is the ending point? "; //ask ending point
    cin >> ending; //get input
    cout << "\t\tEnter a number in the range [" <<starting<< ", "<<ending<<"]: ";//tell user to enter a number in range
    cin >> num; //get input
    cin.ignore();
    while(cin.fail()||num<starting || num>ending)//a character, or out of the range will enter this loop
    {
    if(cin.fail())//a character
    {
        cout << "\t\tNo character. Please Enter again: ";//error message
        cin.clear(); //clear input
        cin.ignore(1000, '\n'); //discard input
        cin>>num; //get new input
    }
    else if(num<starting || num> ending) //if out of the range
    {
        cout << "\t\t" << num << " is not in the range [" <<starting<< ", "<<ending<<"]."
            <<" Please Enter again: "; //error message
        cin>>num;//get new input
    }
    }
    if(num>=starting && num<=ending) //if it's in the range
    {
        cout << "\t\tGood! "<< num << " is a number in ["<<starting<<", "<< ending<<"]\n";//congrats message
    }
}

void getPerfectSquare()//part 6 function
{
    cout << "+Part 6:\n ";
    int num, square;//variable declared
    cout << "\t\tEnter a perfect square: "; //tell user to enter a perfect squared
    do
    {
    cin >> num; //get input
    square= sqrt(num); //square root the number
    if(cin.fail()) //if a character
    {
        cout<< "\t\tNo character. Please Enter again: "; //error message
        cin.clear();//clear input
        cin.ignore(1000, '\n'); //discard input
    }
    else if(num<=0) //if it's negative
    {
        cout << "\t\tDo not accept negative number or 0. Please Enter again: "; //error messgae
    }
    else if(square*square!=num)//if it's not a perfect squared
    {
        cout << "\t\t"<<num << " is not a perfect square. Please Enter again: ";//error message
    }
    }while(cin.fail()||num<=0 || square*square!=num);//a character, a negative value, and not a perfect square will enter this loop

    cout << "\t\tGood! "<< num << " is a perfect squared!\n ";//if it's a perfect squared
}

void getMultOfNumPart7() //part 7 function
{
    cout << "+Part 7: \n";
    int num, mult; //variable declared
    cout << "\t\tWhat number you wish to get the multiple of? ";//ask a number
    cin>>num;//get input
    while(cin.fail()) //if a character is entered
    {
        cout << "\t\tNo character accepted. Please Enter again: ";//error message
        cin.clear(); //clear input
        cin.ignore(1000, '\n');//discard input
        cin>>num;//get new input
    }
    cout << "\t\tEnter a multiple of "<< num<< ": ";//tell user to enter a multiple of that number
    cin>>mult;//get input
    while( cin.fail()||mult%num!=0) //a character or not a multiple will enter this loop
    {
    if(cin.fail()) //if a character
    {
        cout << "\t\tNo character accepted. Please Enter again: ";//error message
        cin.clear();//clear input
        cin.ignore(1000, '\n'); //discard input
        cin>>mult;//get new input
    }
    else if(mult%num!=0) //if not a multiple
    {
        cout <<"\t\t"<< mult << " is not a multiple of "<< num<< ". Please Enter again: ";//error message
        cin>>mult;//get new input
    }
    }
    if(mult%num==0) // if it's a multiple of the number
    {
        cout << "\t\tGood! "<<mult<< " is a multiple of "<< num<< "!\n";//congrats message 
    }
}