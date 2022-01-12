/*#include <iostream>
#include <string>
#include "../headers/Pokedex.h"
#include <stdlib.h>
#include <windows.h>

using namespace std; 

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

int main () {
    int number ;
    char buffer ; 
    char ans ;
    Characteristics pokemon_char ;
    cout << endl ;
    system("CLS") ;
    do {
        system("CLS") ;
        SetConsoleTextAttribute(console,12) ;
        cout << "                                    ,'\\ " << endl ;
        Sleep(300);
        cout << "       _.----.        ____         ,'  _\\    " << endl ;
        Sleep(275);
        cout << "   _,-'       `.     |    |  /`.   \\,-'    |   \\  /   |   |    \\  |`. " << endl ;
        Sleep(250);
        cout << "   \\      __    \\    '-.  | /   `.  ___    |    \\/    |   '-.   \\ |  | " << endl ;
        Sleep(225);
        cout << "    \\.    \\ \\   |  __  |  |/    ,','_  `.  |          | __  |    \\|  | " << endl ;
        Sleep(200);
        cout << "      \\    \\/   /,' _`.|      ,' / / / /   |          ,' _`.|     |  | " << endl ;
        Sleep(175);
        cout << "       \\     ,-'/  /   \\    ,'   | \\/ / ,`.|         /  /   \\  |     | " << endl ;
        Sleep(150);
        SetConsoleTextAttribute(console,7);
        cout << "        \\    \\ |   \\_/  |   `-.  \\    `'  /|  |    ||   \\_/  | |\\    | " << endl ;
        Sleep(125);
        cout << "         \\    \\ \\      /       `-.`.___,-' |  |\\  /| \\      /  | |   | " << endl ;
        Sleep(100);
        cout << "          \\    \\ `.__,'|  |`-._    `|      |__| \\/ |  `.__,'|  | |   | " << endl ;
        Sleep(100);
        cout << "           \\_.-'       |__|    `-._ |              '-.|     '-.| |   |" << endl ;
        Sleep(100);
        cout << "                                   `'                            '-._| " << endl ;
        Sleep(100);
        cout << endl << endl ;
        Sleep(50);
        cout << "Welcome To The PokeDex : " << endl ;
        cout << "Which Pokemon Do You Want Learn More About?" << endl ;
        cout << "[0] Bulbasaur       [1] Charmander      [2] Squirtle         [3] Pikachu" << endl ;
        cout << "                    [4] Bellsprout      [5] Growlithe" << endl ;
        cout << "[6] Horsea          [7] Voltorb         [8] Ditto            [9] MewTwo " << endl ;
        cout << "Choose One Of The Above : - " ;  
        cin >> number ;
        cout << endl << endl;
        system("CLS") ;
        Sleep(100);
        pokemon_char.display_diagram(number) ;
        Sleep(100);
        pokemon_char.display_Name(number) ;
        Sleep(100);
        pokemon_char.display_Type(number) ;
        Sleep(100);
        pokemon_char.display_Species(number) ;
        Sleep(100);
        pokemon_char.display_DispAndChar(number) ;
        Sleep(100);
        pokemon_char.display_AttackTypes(number) ;
        cout << endl ;
        cout << "Enter Any Character To Continue :" ;
        cin >> buffer ;
        system("CLS") ;
        cout << "Do You Want To Look Into Other Pokemon?(Y/N)" ; 
        cin >> ans ;
        cout << endl << endl;
        system("CLS") ;
    } while (ans != 'n' && ans != 'N') ;
    return 0;
}*/