/**
*
* Solution to homework assignment 9
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2022/2023
*
* @author Dimitar Donkov
* @idnumber 0MI0600254
* @task 1
*
*/

#include <iostream>

using namespace std;

int numberOfOnesInBinary(int number){
    if(number == 0){
        return 0;
    }
    if(number%2==0){
        return numberOfOnesInBinary(number/2);
    }
    if(number%2==1){

        return 1+numberOfOnesInBinary(number/2);
    }
}

int main() {
    int number;
    cin >> number;
    if(number<0){
        cout << "Incorrect input";
        return 0;
    }

    if(numberOfOnesInBinary(number)%2==0){
        cout<<1;
    }
    else{
        cout<<0;
    }
    return 0;
}

