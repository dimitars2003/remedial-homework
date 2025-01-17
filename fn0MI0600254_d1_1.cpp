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


void letterOutput(char symbol){
    switch (symbol) {
    case 'a':
        cout <<  ".-";
        break;
    case 'b':
        cout <<  "-...";
        break;
    case 'c':
        cout <<  "-.-.";
        break;
    case 'd':
        cout <<  "-..";
        break;
    case 'e':
        cout <<  ".";
        break;
    case 'f':
        cout <<  "..-.";
        break;
    case 'g':
        cout <<  "--.";
        break;
    case 'h':
        cout <<  "....";
        break;
    case 'i':
        cout <<  "..";
        break;
    case 'j':
        cout <<  ".---";
        break;
    case 'k':
        cout <<  "-.-";
        break;
    case 'l':
        cout <<  ".-..";
        break;
    case 'm':
        cout <<  "--";
        break;
    case 'n':
        cout <<  "-.";
        break;
    case 'o':
        cout <<  "---";
        break;
    case 'p':
        cout <<  ".--.";
        break;
    case 'q':
        cout <<  "--.-";
        break;
    case 'r':
        cout <<  ".-.";
        break;
    case 's':
        cout <<  "...";
        break;
    case 't':
        cout <<  "-";
        break;
    case 'u':
        cout <<  "..-";
        break;
    case 'v':
        cout << "...-";
        break;
    case 'w':
        cout <<  ".--";
        break;
    case 'x':
        cout <<  "-..-";
        break;
    case 'y':
        cout <<  "-.--";
        break;
    case 'z':
        cout << "--..";
        break;
    }
}
void numberOutput(char symbol){
    switch(symbol){
    case '1':
        cout << ".----";
    case '2':
        cout << "..---";
    case '3':
        cout << "...--";
    case '4':
        cout << "....-";
    case '5':
        cout << ".....";
    case '6':
        cout << "-....";
    case '7':
        cout << "--...";
    case '8':
        cout << "---..";
    case '9':
        cout << "----.";
    case '0':
        cout << "-----";
    }
}
int main (){
    char* symbols = new char;
    cin.get(symbols, 100);

    for(int i = 0; i < (sizeof(symbols)/2)-1;i++){

        //Na moq kompilator raboti po razlichen nachi ot testote, pri men raboti sizeof(symbols)-1 (pri greshka probvaite da smenite)

        if(symbols[i]<='Z'&&symbols[i]>='A'){
            letterOutput(symbols[i]+32);
        }
        else if(symbols[i]<='z'&&symbols[i]>='a'){
            letterOutput(symbols[i]);
        }

        else if(symbols[i]<='9'&&symbols[i]>='0'){
            numberOutput(symbols[i]);
        }
        else{
            cout << "Incorrect input";
            return 0;
        }
        cout << " ";
    }
    delete symbols;
    return 0;
}
