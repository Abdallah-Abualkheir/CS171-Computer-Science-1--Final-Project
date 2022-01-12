
/*#include <iostream>
#include <string>
#include <cstdlib> //Random()
using namespace std;

class Pokemon
{

    public:
    int p_health;
    int p_lvl; // pokemon level
    string p_name; //pokemon name
    
    

    

Pokemon(){
    Pokemon("Mew")
   // default constructor
}

Pokemon(string poke_name) //specifiec constructor
{
    p_name = poke_name; 
    p_lvl = 1;
    p_health = 60;
} 

unsigned int Pokemon::chance()
{
    int z;
    z = rand()%3;
    return z;  
}




void Pokemon::decrease_health()
{
    if (temp.chance()!= 2)
    {
        temp.damage();
    }
    
}

unsigned int Pokemon::damage(int c)
{
    switch (c)
    {
        case 1: 
        break;

        case 2:
        break;

 
    }
    return 0;
}

void Pokemon::print_name()
{
    cout << p_name << endl;
}

};*/