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
    switch (x) {
    case 'a':
        cout <<  ".-";
    case 'b':
        cout <<  "-...";
    case 'c':
        cout <<  "-.-.";
    case 'd':
        cout <<  "-..";
    case 'e':
        cout <<  ".";
    case 'f':
        cout <<  "..-.";
    case 'g':
        cout <<  "--.";
    case 'h':
        cout <<  "....";
    case 'i':
        cout <<  "..";
    case 'j':
        cout <<  ".---";
    case 'k':
        cout <<  "-.-";
    case 'l':
        cout <<  ".-..";
    case 'm':
        cout <<  "--";
    case 'n':
        cout <<  "-.";
    case 'o':
        cout <<  "---";
    case 'p':
        cout <<  ".--.";
    case 'q':
        cout <<  "--.-";
    case 'r':
        cout <<  ".-.";
    case 's':
        cout <<  "...";
    case 't':
        cout <<  "-";
    case 'u':
        cout <<  "..-";
    case 'v':
        cout << "...-";
    case 'w':
        cout <<  ".--";
    case 'x':
        cout <<  "-..-";
    case 'y':
        cout <<  "-.--";
    case 'z':
        cout << "--..";
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
    cin >> symbols;
    cout << symbols;
    delete symbols;
    for(int i = 0; i < strlen(symbols);i++){
        if(symbols[i]<='Z'&&symbols[i]>='A'){
            letterOutput(symbols[i]+32)
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
    }
    return 0;
}
