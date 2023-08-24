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

int numberLengthDecimal(int temp){
    if(temp == 4 || temp == 5 || temp == 6){
        return 5;
    }
    if(temp == 2 || temp == 3 || temp == 8 || temp == 9){
        return 6;
    }
    if(temp == 7 ){
        return 7;
    }
}

int numberLength(int temp){
    if(temp == 1 || temp == 2 || temp == 6){
        return 3;
    }
    if(temp == 4 || temp == 5 || temp == 9){
        return 4;
    }
    if(temp == 3 || temp == 7 || temp == 8){
        return 5;
    }
}

int main(){
    int number;
    cin >> number;

    if(number > 10000||number<1){
        cout << "Incorrect input";
        return 0;
    }

    int wordCount = 0;

    int temp = 0;

    temp = number%10;
    number /=10;

    if(number >0){
        temp += (number%10)*10;
        number /= 10;
    }
    else{
            cout<<numberLength(temp);
            return 0;
    }

    //cout <<wordCount<< " "<< temp << " "<<number<<std::endl;

    if(temp < 20){
        switch (temp){
        case 11 :
            wordCount+=6;
            break;
        case 12 :
            wordCount+=6;
            break;
        case 13 :
            wordCount+=8;
            break;
        case 14 :
            wordCount+=8;
            break;
        case 15 :
            wordCount+=7;
            break;
        case 16 :
            wordCount+=7;
            break;
        case 17 :
            wordCount+=9;
            break;
        case 18 :
            wordCount+=8;
            break;
        case 19 :
            wordCount+=8;
            break;

        }
    }

    else{

        wordCount+=numberLength(temp%10);
        temp/=10;
        wordCount+=numberLengthDecimal(temp);

    }
    //cout << wordCount << " " << temp << " " << number << std::endl;
    if(number == 0){
        cout << wordCount;
        return 0;
    }
    else{
        temp = number%10;
        number/=10;
        wordCount+=7;
        wordCount+=numberLength(temp);
    }
    if(number == 0){
        cout << wordCount;
        return 0;
    }
    else{
        temp = number%10;
        number/=10;
        wordCount+=8;
        wordCount+=numberLength(temp);
        cout << wordCount;
    }

    return 0;
}
