/*//////////////////////////////////////////////// Citations ///////////////////////////////////////////////////

For Text Color : - //https://stackoverflow.com/questions/9965710/how-to-change-text-and-background-color\\
For Sleep Function : - //https://stackoverflow.com/questions/1658386/sleep-function-in-c\\
For Pokemon ASCII Diagrams : - //https://gist.github.com/MatheusFaria/4cbb8b6dbe33fd5605cf8b8f7130ba6d\\

*///////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
//Random()
#include <cstdlib> 
//Needed to pull the current time for the random seed
#include <ctime>
//Needed to input string   
#include <string>
//Windows Specific Header
//Needed to include HANDLE data type 
#include <windows.h>
//Needed to setw() in the cout
#include <iomanip> 

using namespace std;
// a contant global variable to dictate the total number of pokemons
const int numberOfPokemon = 10; 
// a contant global variable to dictate the total number of attacks
const int numberOfAttacks = 4; 

// Names of all the Pokemon in the game
string poke_Name[numberOfPokemon] = {"Bulbasaur", "Charmander", "Squirtle", "Pikachu", "Bellsprout", "Growlithe", "Horsea", "Voltorb", "Ditto", "Mewtwo"};
// The type of species of the Pokemon
string species[numberOfPokemon] = {"Seed Pokemon", "Lizard Pokemon", "Tiny Turtle Pokemon", "Mouse Pokemon", "Flower Pokemon", "Puppy Pokemon", "Dragon Pokemon", "Ball Pokemon", "Transform Pokemon", "Genetic Pokemon"};
// The type of the Pokemon
string type[numberOfPokemon] = {"Grass / Poison", "Fire", "Water", "Electric", "Grass / Poison", "Fire", "Water", "Electric", "Normal", "Psychic"};
// The attack types of the Pokemon
string attacks[numberOfAttacks] = {"Physical", "Physical", "Special", "Normal"};

//HANDLE : - a generic identifier used to represent something
//Needed to change the colors in the output screen.
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

// Characteristics - consists of the basic attributes of the Pokemon
class Characteristics
{

public:
    Characteristics() // default constructor
    {

    }

    // displays the name of the pokemon chosen from the specified array
    void display_Name(int input)
    {
        // Displays the name of the Pokemon
        cout << "Name Of The Pokemon: - " << poke_Name[input] << endl;
        cout << endl;
    }

    // assigns the name of the Pokemon from the array and returns it to the main function
    string assign_Name(int input) 
    {
        // to store the name of the Pokemon
        string name ;
        // assigns the name of the Pokemon from the array to the variable
        name = poke_Name[input] ;
        // returns the name of the Pokemon to the main function
        return name ;
    }
// displays the species of the pokemon chosen from the specified array
    void display_Species(int input)
    {
        // displays the species of the pokemon chosen from the specified array
        cout << "Species Of The Pokemon: - " << species[input] << endl;
        cout << endl;
    }

 // displays 4 types of attack for the pokemon chosen from the specified array   
    void display_AttackTypes(int input)
    {
         // displays 4 types of attack for the pokemon chosen from the specified array 
        cout << "These are " << poke_Name[input] << "'s Attack Types. " << endl;
        // loops until the 4 attacks are displayed
        for (int i = 0; i < 4; i++)
        {
            // Displays attack type
            cout << "Attack [" << i + 1 << "] =>" << attacks[i] << " | ";
        }
        cout << endl;
    }

// will display a surprised pikachu when one of the pokemons die 
    void display_meme() 
    {   
        cout << endl << endl ; 
        cout << "``                 ``                                                                       ````       . " << endl ;
        cout << " .`                  ``                                                                ```.`           . " << endl ;
        cout << "  .                    `                                                           ````                ` " << endl ;
        cout << "  `.                    ```                                                     ```                     ." << endl ;
        cout << "    `.                     ```                                             ````                        . " << endl ;
        cout << "     ``                      `..`                                    `.````                           `` " << endl ;
        cout << "       .`                        ``````````````.`````````````````````                                `.  " << endl ;
        cout << "       `.`                                                                                          ``   " << endl ;
        cout << "          .`                                                                                     ```     " << endl ;
        cout << "           ```                                                                                 `         " << endl ;
        cout << "             ``      `                                                                       ``          " << endl ;
        cout << "               ```````                                                                    ```            " << endl ;
        cout << "                 `.`                                                              ```  ```               " << endl ;
        cout << "                 .                                                                  `-`                  " << endl ;
        cout << "                ``                                                                    .                  " << endl ;
        cout << "                `            ` ``                                `.```                ``                 " << endl ;
        cout << "                .          -`````.                             `.```..`                .`                " << endl ;
        cout << "               .`         ``` `` `                             .````` `                 .                " << endl ;
        cout << "               `          `` .` `.`                            ``   ```                 ``               " << endl ;
        cout << "              ``           ``````.                               `.``.                   `               " << endl ;
        cout << "              .              ````                                 ```                    .               " << endl ;
        cout << "             ``                             `                                             .              " << endl ;
        cout << "            ``                             ```-`                                          `              " << endl ;
        cout << "            ```.```                                                        ```````         `             " << endl ;
        cout << "           .`````` ```                                                   ..    ` ``        .             " << endl ;
        cout << "          `. `  ```  .                                                  .`` ` `` `.        `.            " << endl ;
        cout << "          `-`````````.                      `````                       . ``````````        `            " << endl ;
        cout << "          ```       ``                    `` ``  ````.`                 ``        ``        ``           " << endl ;
        cout << "          . ````.````                   `.````       `.                  ..```````.          .           " << endl ;
        cout << "          .                             `.`.          `.                   ``````            `.          " << endl ;
        cout << "           .                            `.```         ``                                      `          " << endl ;
        cout << "            .                            `..`.`     ```                                       `          " << endl ;
        cout << "            `.                              `````````                                          .         " << endl ;
        cout << "             `.                                                                                 .        " << endl ;
        cout << "              ``                                                                                ``       " << endl ;
        cout << "               ``                                                                                `       " << endl ;
        cout << endl ;
    }

    // this function will be called when pokemons are picked to display information and a diplay of the pokemon
    void display_DispAndChar(int input) 
    {
        switch (input)
        {
        // Descriptions and Characteristics Of The Respective Pokemon
        case 0:
            cout << "Description of " << poke_Name[0] << endl;
            cout << "   Bulbasaur resembles a small, squatting dinosaur that walks on four legs, but bears three claws on each of its feet and has no tail." << endl;
            cout << "It also has large, red eyes and very sharp teeth. Its skin is a light, turquoise color with dark, green spots. It has three claws. " << endl;
            cout << endl;
            cout << "Characteristics of " << poke_Name[0] << endl;
            cout << "   Bulbasaur has a \"bulb\" on its back that grows steadily larger as it matures. This bulb contains a seed which uses photosynthesis" << endl;
            cout << "to supply Bulbasaur with energy. Its bulb is also used to store the energy that the seed absorbs, which can be used when it is necessary." << endl;
            cout << endl;
            break;
        // Descriptions and Characteristics Of The Respective Pokemon
        case 1:
            cout << "Description of " << poke_Name[1] << endl;
            cout << "   Charmander is a small, bipedal, dinosaur-like Pokémon. Most of its body is colored orange, while its underbelly is a pale" << endl;
            cout << "light-yellow color. Charmander, like its evolved forms, has a flame that constantly burns on the end of its tail." << endl;
            cout << endl;
            cout << "Characteristics of " << poke_Name[1] << endl;
            cout << "   The power of its flame attacks can be gauged by the size of the flame on its tail. " << endl;
            cout << endl;
            break;
        // Descriptions and Characteristics Of The Respective Pokemon
        case 2:
            cout << "Description of " << poke_Name[2] << endl;
            cout << "   Squirtle is a small, light-blue Pokémon with an appearance like a turtle. With its aerodynamic shape and grooved surface," << endl;
            cout << "Squirtle's shell helps it wade through the water very quickly. It also offers protection in battle. Unlike a turtle, Squirtle " << endl;
            cout << "is ordinarily bipedal. " << endl;
            cout << endl;
            cout << "Characteristics of " << poke_Name[2] << endl;
            cout << "   Its shell is highly sturdy, and it can hide within its shell to protect itself from physical attacks." << endl;
            cout << endl;
            break;
        // Descriptions and Characteristics Of The Respective Pokemon
        case 3:
            cout << "Description of " << poke_Name[3] << endl;
            cout << "   Pikachu are small, chubby, and incredibly cute mouse-like Pokémon. They are almost completely covered by yellow fur." << endl;
            cout << "They have long yellow ears that are tipped with black. A Pikachu's back has two brown stripes, and its large tail is" << endl;
            cout << "notable for being shaped like a lightning bolt. " << endl;
            cout << endl;
            cout << "Characteristics of " << poke_Name[3] << endl;
            cout << "   Pikachus are usually friendly creatures that love to be cuddled. They love having their tails rubbed, especially at the base " << endl;
            cout << "they also like being stroked. However, if threatened or angered, this Pokémon can be quite aggressive." << endl;
            cout << endl;
            break;
        // Descriptions and Characteristics Of The Respective Pokemon
        case 4:
            cout << "Description of " << poke_Name[4] << endl;
            cout << "   Bellsprout is a plant-like Pokémon. The body is a thin brown root and stem system. Bellsprout has two root-like legs. It has" << endl;
            cout << "two leaves on each side. Its head is yellow and shaped like a bulb, the tip is colored pink, and it has the smallest amount " << endl;
            cout << "of dirt on its feet. " << endl;
            cout << endl;
            cout << "Characteristics of " << poke_Name[4] << endl;
            cout << "   It is said to ensnare its prey in its vines and devour it, and can also spit a highly corrosive fluid that can melt even iron. " << endl;
            cout << "This Pokémon prefers hot and humid environments, since it can absorb more moisture from the ground by planting its root-like feet. " << endl;
            cout << endl;
            break;
        // Descriptions and Characteristics Of The Respective Pokemon
        case 5:
            cout << "Description of " << poke_Name[5] << endl;
            cout << "   Growlithe resembles a puppy. It has bright orange fur with black stripes. Its belly, tail, and fluff on top of its head are a " << endl;
            cout << "cream color. There are no gender differences. Much like Vulpix, its shiny form is a yellow/golden color." << endl;
            cout << endl;
            cout << "Characteristics of " << poke_Name[5] << endl;
            cout << "   Naturally loyal and protective, if it is improperly trained, it often bites without warning or unprovoked. " << endl;
            cout << endl;
            break;
        // Descriptions and Characteristics Of The Respective Pokemon
        case 6:
            cout << "Description of " << poke_Name[6] << endl;
            cout << "   Horsea is a Water-type Pokémon that resembles a seahorse. It is a small, light blue seahorse with tiny scales. Its belly and fin" << endl;
            cout << "are cream colored. Its tail is always curled up tightly, and it has a single fin on its back that is used for locomotion in the water. " << endl;
            cout << endl;
            cout << "Characteristics of " << poke_Name[6] << endl;
            cout << "   If they sense trouble, they spit ink towards the instigator. If the enemy is too strong, it quickly swims to safety. When they " << endl;
            cout << "are a safe location, they can be seen playfully tangling their tails together." << endl;
            cout << endl;
            break;
        // Descriptions and Characteristics Of The Respective Pokemon
        case 7:
            cout << "Description of " << poke_Name[7] << endl;
            cout << "   Voltorb are Pokémon that look like a large Poké Ball. Spherical in shape, Voltorb's top half is colored red while its bottom half" << endl;
            cout << "is white. Voltorb do not have much else in features besides its eyes, which usually indicate that it is angry." << endl;
            cout << endl;
            cout << "Characteristics of " << poke_Name[7] << endl;
            cout << "   Voltorb can have the special ability Soundproof or the special ability Static. This Pokémon looks" << endl;
            cout << "just like a Poké Ball. It is also dangerous because it may electrocute or explode on touch. " << endl;
            cout << endl;
            break;
        // Descriptions and Characteristics Of The Respective Pokemon
        case 8:
            cout << "Description of " << poke_Name[8] << endl;
            cout << "   Ditto's appearance is very plain. It is a simple, pinkish-purple, amorphous blob, with two small dots as eyes and a long, curved mouth. " << endl;
            cout << endl;
            cout << "Characteristics of " << poke_Name[8] << endl;
            cout << "   Ditto will transform into anything it sees, even inanimate objects. When it sees an enemy, it will change its DNA code to match theirs. " << endl;
            cout << "It avoid being attacked while sleeping by changing its appearance to look like a rock." << endl;
            cout << endl;
            break;
        // Descriptions and Characteristics Of The Respective Pokemon
        case 9:
            cout << "Description of " << poke_Name[9] << endl;
            cout << "   Mewtwo is a bipedal feline-like Pokémon. Its appearance is loosely based on Mew, with a more of a mutated humanoid look in addition" << endl;
            cout << "to its feline traits. Its body is purple and it has three fingers on each hand. Mewtwo projects a faint purple aura when at full power. " << endl;
            cout << endl;
            cout << "Characteristics of " << poke_Name[9] << endl;
            cout << "   As evidence of its immense power, Mewtwo is by far one of the most domineering Pokémon in the series. It's power is so great to the " << endl;
            cout << "point where it can endure immense torture in Mewtwo Returns, and teleport a lake miles long underground!" << endl;
            cout << "In fact, it general nature is so complex that it borderlines that of human levels with itself capable of learning and" << endl;
            cout << "evolving just to get the upper hand in battle. Indeed, Mewtwo's title of " << endl;
            cout << "\"The World's Most Powerful Pokémon\" shouldn't be undermined. " << endl;
            cout << endl;
            break;
        }
    }

    // calls the type of the pokemon that has been chosen from the specified array.
    void display_Type(int input)
    {
        // calls the type of the pokemon that has been chosen from the specified array.
        cout << "Type Of The Pokemon: - " << type[input] << endl; 
        cout << endl;
    }


// prints diagrams of the pokemons chosen according to user input  
//Sleep(a) - delays the time by a milliseconds before displaying the next cout ;
//SetConsoleTextAttribute(console, n) - changes the color of the characters in the screen depending on the integer n (0-255)  
    void display_diagram(int input) 
    {
        switch (input)
        {
        case 0:
            SetConsoleTextAttribute(console, 2);
            Sleep(100);
            cout << "                                           /" << endl;
            Sleep(100);
            cout << "                        _,.------....___,.' ',.-." << endl;
            Sleep(100);
            cout << "                     ,-'          _,.--\"        |" << endl;
            Sleep(100);
            cout << "                   ,'         _.-'              ." << endl;
            Sleep(100);
            cout << "                  /   ,     ,'                   `" << endl;
            Sleep(100);
            cout << "                 .   /     /                     ``." << endl;
            Sleep(100);
            cout << "                 |  |     .                       \\.\\" << endl;
            Sleep(100);
            SetConsoleTextAttribute(console, 11);
            cout << "       ____      |___._.  |       __               \\ `." << endl;
            Sleep(100);
            cout << "     .'    `---\"\"       ``\"-.--\"'`  \\               .  \\" << endl;
            Sleep(100);
            cout << "    .  ,            __               `              |   ." << endl;
            Sleep(100);
            cout << "    `,'         ,-\"'  .               \\             |    L" << endl;
            Sleep(100);
            cout << "   ,'          '    _.'                -._          /    |" << endl;
            Sleep(100);
            cout << "  ,`-.    ,\".   `--'                      >.      ,'     |" << endl;
            Sleep(100);
            cout << " . .'\\'   `-'       __    ,  ,-.         /  `.__.-      ,'" << endl;
            Sleep(100);
            cout << " ||:, .           ,'  ;  /  / \\ `        `.    .      .'/" << endl;
            Sleep(100);
            cout << " j|:D  \\          `--'  ' ,'_  . .         `.__, \\   , /" << endl;
            Sleep(100);
            cout << "/ L:_  |                 .  \"' :_;                `.'.'" << endl;
            Sleep(100);
            cout << ".    \"\"'                  \"\"\"\"\"'                    V" << endl;
            Sleep(100);
            cout << " `.                                 .    `.   _,..  `" << endl;
            Sleep(100);
            cout << "   `,_   .    .                _,-'/    .. `,'   __  `" << endl;
            Sleep(100);
            cout << "    ) \\`._        ___....----\"'  ,'   .'  \\ |   '  \\  ." << endl;
            Sleep(100);
            cout << "   /   `. \"`-.--\"'         _,' ,'     `---' |    `./  |" << endl;
            Sleep(100);
            cout << "  .   _  `\"\"'--.._____..--\"   ,             '         |" << endl;
            Sleep(100);
            cout << "  | .\" `. `-.                /-.           /          ," << endl;
            Sleep(100);
            cout << "  | `._.'    `,_            ;  /         ,'          ." << endl;
            Sleep(100);
            cout << " .'          /| `-.        . ,'         ,           ," << endl;
            Sleep(100);
            cout << " '-.__ __ _,','    '`-..___;-...__   ,.'\\ ____.___.'" << endl;
            Sleep(100);
            cout << " `\"^--'..'   '-`-^-'\"--    `-^-'`.''\"\"\"\"\"`.,^.`.--' mh" << endl;
            SetConsoleTextAttribute(console, 15);
            cout << endl;
            break;
        case 1:
            SetConsoleTextAttribute(console, 12);
            Sleep(100);
            cout << "                                   _.--"
                    "`-.. "
                 << endl;
            Sleep(100);
            cout << "                                 ,'          `." << endl;
            Sleep(100);
            cout << "                               ,'          __  `." << endl;
            Sleep(100);
            cout << "                              /|          \" __   \\" << endl;
            Sleep(100);
            cout << "                             , |           / |.   ." << endl;
            Sleep(100);
            cout << "                             |,'          !_.'|   |" << endl;
            Sleep(100);
            cout << "                           ,'             '   |   |" << endl;
            Sleep(100);
            cout << "                          /              |`--'|   |" << endl;
            Sleep(100);
            cout << "                         |                `---'   |" << endl;
            Sleep(100);
            cout << "                          .   ,                   |                       ,\"." << endl;
            Sleep(100);
            cout << "                           ._     '           _'  |                    , ' \\ ` " << endl;
            Sleep(100);
            cout << "                       `.. `.`-...___,...---\"\"    |       __,.        ,`\"   L,| " << endl;
            Sleep(100);
            cout << "                       |, `- .`._        _,-,.'   .  __.-'-. /        .   ,    \\" << endl;
            Sleep(100);
            cout << "                     -:..     `. `-..--_.,.<       `\"      / `.        `-/ |   ." << endl;
            Sleep(100);
            cout << "                       `,         \"\"\"\"'     `.              ,'         |   |  ',," << endl;
            Sleep(100);
            cout << "                         `.      '            '            /          '    |'. |/" << endl;
            Sleep(100);
            cout << "                           `.   |              \\       _,-'           |       ''" << endl;
            Sleep(100);
            cout << "                             `._'               \\   '\"\\                .      |" << endl;
            Sleep(100);
            cout << "                                |                '     \\                `._  ,'" << endl;
            Sleep(100);
            cout << "                                |                 '     \\                 .'|" << endl;
            Sleep(100);
            cout << "                                |                 .      \\                | |" << endl;
            Sleep(100);
            cout << "                                |                 |       L              ,' |" << endl;
            Sleep(100);
            cout << "                                `                 |       |             /   ' " << endl;
            Sleep(100);
            cout << "                                 \\                |       |           ,'   / " << endl;
            Sleep(100);
            cout << "                              ,' \\               |  _.._ ,-..___,..-'    ,'" << endl;
            Sleep(100);
            cout << "                             /     .             .      `!             ,j'" << endl;
            Sleep(100);
            cout << "                            /       `.          /        .           .'/" << endl;
            Sleep(100);
            cout << "                           .          `.       /         |        _.'.'" << endl;
            Sleep(100);
            cout << "                            `.          7`'---'          |------\"'_.'" << endl;
            Sleep(100);
            cout << "                           _,.`,_     _'                ,''-----\"'" << endl;
            Sleep(100);
            cout << "                       _,-_    '       `.     .'      ,\\ " << endl;
            Sleep(100);
            cout << "                       -\" /`.         _,'     | _  _  _.| " << endl;
            Sleep(100);
            cout << "                        \"\"--'---\"\"\"\"\"'        `' '! |! /" << endl;
            Sleep(100);
            cout << "                                               `\" \" -' mh" << endl;
            SetConsoleTextAttribute(console, 15);
            cout << endl;
            break;
        case 2:
            SetConsoleTextAttribute(console, 11);
            Sleep(100);
            cout << "                _,........__" << endl;
            Sleep(100);
            cout << "              -'            \"`-. " << endl;
            Sleep(100);
            cout << "            ,'                   `-." << endl;
            Sleep(100);
            cout << "          ,'                        \\ " << endl;
            Sleep(100);
            cout << "        ,'                           ." << endl;
            Sleep(100);
            cout << "        .'\\               ,"
                    ".       `"
                 << endl;
            Sleep(100);
            cout << "       ._.'|             / |  `       \\ " << endl;
            Sleep(100);
            cout << "       |   |            `-.'  ||       `." << endl;
            Sleep(100);
            cout << "       |   |            '-._,'||       | \\ " << endl;
            Sleep(100);
            cout << "       .`.,'             `..,'.'       , |`-." << endl;
            Sleep(100);
            cout << "       l                       .'`.  _/  |   `." << endl;
            Sleep(100);
            cout << "       `-.._'-   ,          _ _'   -\" \\  .     `" << endl;
            Sleep(100);
            cout << "  `.\"\"\"\"\"'-.`-...,---------','         `. `....__." << endl;
            Sleep(100);
            cout << "  .'        `\"-..___      __,'\\          \\  \\     \\" << endl;
            Sleep(100);
            cout << "  \\_ .          |   `"
                    ""
                    "'    `.           . \\     \\"
                 << endl;
            Sleep(100);
            cout << "     `.          |              `.          |  .     L" << endl;
            Sleep(100);
            cout << "       .        |`--...________.'.        j   |     |" << endl;
            Sleep(100);
            cout << "         ._    .'      |          `.     .|   ,     |  " << endl;
            Sleep(100);
            cout << "           `--,\\       .            `7"
                    "' |  ,      |  "
                 << endl;
            Sleep(100);
            cout << "              ` `      `            /     |  |      |    _,-'\"\"\"`-. " << endl;
            Sleep(100);
            cout << "               \\ `.     .          /      |  '      |  ,'          `. " << endl;
            Sleep(100);
            cout << "                 \\  v.__  .        '       .   \\    /| /              \\  " << endl;
            Sleep(100);
            cout << "                   \\/    `"
                    "\""
                    ""
                    ""
                    "`.       \\   \\  /.''                |  "
                 << endl;
            Sleep(100);
            cout << "                    `        .        `._ ___,j.  `/ .-       ,---.     | " << endl;
            Sleep(100);
            cout << "                    ,`-.      \\         .\"     `.  |/        j     `    |  " << endl;
            Sleep(100);
            cout << "                   /    `.     \\       /         \\ /         |     /    j  " << endl;
            Sleep(100);
            cout << "                  |       `-.   7-.._ .          |\"          '         /  " << endl;
            Sleep(100);
            cout << "                  |          `./_    `|          |            .     _,'  " << endl;
            Sleep(100);
            cout << "                  `.           / `----|          |-............`---'  " << endl;
            Sleep(100);
            cout << "                    \\          \\      |          |  " << endl;
            Sleep(100);
            cout << "                   ,'           )     `.         |  " << endl;
            Sleep(100);
            cout << "                    7____,,..--'      /          |  " << endl;
            Sleep(100);
            cout << "                                      `---.__,--.'mh" << endl;
            SetConsoleTextAttribute(console, 15);
            cout << endl;
            break;
        case 3:
            SetConsoleTextAttribute(console, 6);
            Sleep(100);
            cout << "                                             ,-." << endl;
            Sleep(100);
            cout << "                                          _.|  '" << endl;
            Sleep(100);
            cout << "                                        .'  | /" << endl;
            Sleep(100);
            cout << "                                      ,'    |'" << endl;
            Sleep(100);
            cout << "                                     /      /" << endl;
            Sleep(100);
            cout << "                       _..----\"\"---.'      /" << endl;
            Sleep(100);
            cout << " _.....---------...,-\"\"                  ,'" << endl;
            Sleep(100);
            cout << " `-._  \\                                /" << endl;
            Sleep(100);
            cout << "     `-.+_            __           ,--. ." << endl;
            Sleep(100);
            cout << "          `-.._     .:  ).        (`--\"| \\" << endl;
            Sleep(100);
            cout << "               7    | `\" |         `...'  \\" << endl;
            Sleep(100);
            cout << "               |     `--'     '+\"        ,\". ,\"\"-" << endl;
            Sleep(100);
            cout << "               |   _...        .____     | |/    '" << endl;
            Sleep(100);
            cout << "          _.   |  .    `.  '--\"   /      `./     j" << endl;
            Sleep(100);
            cout << "         \\' `-.|  '     |   `.   /        /     /" << endl;
            Sleep(100);
            cout << "         '     `-. `---\"      `-\"        /     /" << endl;
            Sleep(100);
            cout << "          \\       `.                  _,'     /" << endl;
            Sleep(100);
            cout << "           \\        `                        ." << endl;
            Sleep(100);
            cout << "            \\                                j" << endl;
            Sleep(100);
            cout << "             \\                              /" << endl;
            Sleep(100);
            cout << "              `.                           ." << endl;
            Sleep(100);
            cout << "                +                          \\" << endl;
            Sleep(100);
            cout << "                |                           L" << endl;
            Sleep(100);
            cout << "                |                           |" << endl;
            Sleep(100);
            cout << "                |  _ /,                     |" << endl;
            Sleep(100);
            cout << "                | | L)'..                   |" << endl;
            Sleep(100);
            cout << "                | .    | `                  |" << endl;
            Sleep(100);
            cout << "                '  \\'   L                   '" << endl;
            Sleep(100);
            cout << "                 \\  \\   |                  j" << endl;
            Sleep(100);
            cout << "                  `. `__'                 /" << endl;
            Sleep(100);
            cout << "                _,.--.---........__      /" << endl;
            Sleep(100);
            cout << "               ---.,'---`         |   -j\"" << endl;
            Sleep(100);
            cout << "                .-'  '....__      L    |" << endl;
            Sleep(100);
            cout << "              \"\"--..    _,-'       \\ l||" << endl;
            Sleep(100);
            cout << "                  ,-'  .....------. `||'" << endl;
            Sleep(100);
            cout << "               _,'                /" << endl;
            Sleep(100);
            cout << "             ,'                  /" << endl;
            Sleep(100);
            cout << "            '---------+-        /" << endl;
            Sleep(100);
            cout << "                     /         /" << endl;
            Sleep(100);
            cout << "                   .'         /" << endl;
            Sleep(100);
            cout << "                 .'          /" << endl;
            Sleep(100);
            cout << "               ,'           /" << endl;
            Sleep(100);
            cout << "             _'....----\"\"\"\"\" mh" << endl;
            SetConsoleTextAttribute(console, 15);
            cout << endl;
            break;
        case 4:
            SetConsoleTextAttribute(console, 6);
            Sleep(100);
            cout << "                _.--\"'\"\"\"--._" << endl;
            Sleep(100);
            cout << "              .\"             `." << endl;
            Sleep(100);
            cout << "             /                 ." << endl;
            Sleep(100);
            cout << "            j                   ." << endl;
            Sleep(100);
            cout << "            |                   |" << endl;
            Sleep(100);
            cout << "            |                   |" << endl;
            Sleep(100);
            cout << "            | (')              j" << endl;
            Sleep(100);
            cout << "            `                 ,`." << endl;
            Sleep(100);
            cout << "             \\               ,^. `." << endl;
            Sleep(100);
            cout << "              .             /   \\  ." << endl;
            Sleep(100);
            cout << "              |            /     . |" << endl;
            Sleep(100);
            cout << "              |          ,'      | |" << endl;
            Sleep(100);
            SetConsoleTextAttribute(console, 12);
            cout << "             ,'---..___ /        | |" << endl;
            Sleep(100);
            cout << "            ' `--..___ \"`.      .  |" << endl;
            Sleep(100);
            cout << "             `\"--....___.'     /  j__.....__" << endl;
            Sleep(100);
            SetConsoleTextAttribute(console, 2);
            cout << "                              /   |         `." << endl;
            Sleep(100);
            cout << "                             / _,------._     `." << endl;
            Sleep(100);
            cout << "                            /,+_         `.     `." << endl;
            Sleep(100);
            cout << "                          ,'    `-.        \\      ." << endl;
            Sleep(100);
            cout << "                         .         `.       \\      \\" << endl;
            Sleep(100);
            cout << "                         |           `.     |       \\" << endl;
            Sleep(100);
            cout << "                         |             `.   |_,..__  ." << endl;
            Sleep(100);
            cout << "                         |\\              \\  |      `.|" << endl;
            Sleep(100);
            cout << "                         | `.,--------._  \\ |        `" << endl;
            Sleep(100);
            cout << "                         |  |           `. \\|" << endl;
            Sleep(100);
            cout << "                         |  |             `.|" << endl;
            Sleep(100);
            cout << "                         |  |" << endl;
            Sleep(100);
            cout << "                         |  |" << endl;
            Sleep(100);
            cout << "                         |. '" << endl;
            Sleep(100);
            cout << "                        .' \\ `." << endl;
            Sleep(100);
            cout << "                     _,' ,' `. ._" << endl;
            Sleep(100);
            cout << "   ---====+,______,.\"_.-'     .  `." << endl;
            Sleep(100);
            cout << "   _,..==`'_.+'-\"\"\"\"'         / ^.\\`:._" << endl;
            Sleep(100);
            cout << " ,=\"/    ,\"            ....==+ /  `\\  `:." << endl;
            Sleep(100);
            cout << "'  /    / |               _+:-'    .|   ``." << endl;
            Sleep(100);
            cout << "       '  `.           --\"\"        |'     `\\" << endl;
            Sleep(100);
            cout << "                                   ' mh" << endl;
            SetConsoleTextAttribute(console, 15);
            cout << endl;
            break;
        case 5:
            cout << "" << endl;
            cout << "" << endl;
            cout << "" << endl;
            SetConsoleTextAttribute(console, 7);
            Sleep(100);
            cout << "                   _," << endl;
            Sleep(100);
            cout << "                 .',_..," << endl;
            Sleep(100);
            cout << "               ,'     /,--" << endl;
            Sleep(100);
            cout << "             .'       ,./.__" << endl;
            Sleep(100);
            cout << "             |_,.----/,,'`.  _" << endl;
            Sleep(100);
            SetConsoleTextAttribute(console, 12);
            cout << "            .'__     //    `...>" << endl;
            Sleep(100);
            cout << "       ____//|) |    `      /.'" << endl;
            Sleep(100);
            cout << "      (/    `-.-'.._     _,|                 ,.-------.._" << endl;
            Sleep(100);
            cout << "      .             `.  '   \\               /            `-._" << endl;
            Sleep(100);
            cout << "      `..---._       |       `.            j                 `." << endl;
            Sleep(100);
            cout << "        >-,-\"`\"\"'    |        |`\"+-..__    |              -. `-." << endl;
            Sleep(100);
            cout << "       ( /|         /____     |  |  |  \\\"\"|+-.._     ___    `.  `." << endl;
            Sleep(100);
            cout << "        \" `-..._     \"--,_    |  |  `   | |   | `.-.\"   \"-._  |  -`" << endl;
            Sleep(100);
            cout << "             ,'        '_>_   j ,'  '. ,` |,  |   `. `.-v.' `-+..._`." << endl;
            Sleep(100);
            cout << "            '.         >       '     | |  ' \\ L     ..`.  '        `._" << endl;
            Sleep(100);
            cout << "             '.       /              '|`     \\|      '^,         ..,{ `." << endl;
            Sleep(100);
            cout << "            / /      /                '       v          |__    ___,'\"\"" << endl;
            Sleep(100);
            cout << "          ,'  >---+-+.        |   __,..--\"`-._          /.-'`\"----'" << endl;
            Sleep(100);
            cout << "         /`.       `. '.      |-\"'            `\"--....-'._" << endl;
            Sleep(100);
            cout << "       .'___'        `._`,    j             ___,-','      `-..._" << endl;
            Sleep(100);
            SetConsoleTextAttribute(console, 7);
            cout << "  _ _.'    '/.-          '  ,'       __..<\"\"__,.-'              `." << endl;
            Sleep(100);
            cout << " `.)         |'---\"\"`.+-.--'-------\"\"-...__  ,-'/ .\"\\          _  |" << endl;
            Sleep(100);
            cout << ",\"\\ ,--.  _,-          ` `'                `'\"\"\"'`\"'\"\"\"`--._  . `/" << endl;
            Sleep(100);
            cout << " `-`.___.'                                                  `\"-\"'" << endl;
            Sleep(100);
            cout << "" << endl;
            Sleep(100);
            cout << endl;
            SetConsoleTextAttribute(console, 15);
            break;
        case 6:
            SetConsoleTextAttribute(console, 11);
            cout << "                          _,..----.._" << endl;
            Sleep(100);
            cout << " ,\"''-.               _.-'           `\"-._" << endl;
            Sleep(100);
            cout << ".,-.   `._          ,'    ,---.           `.             _,.." << endl;
            Sleep(100);
            cout << "||  \\     `._     ,'    .' |   .            `.     _,.-\"' _,'" << endl;
            Sleep(100);
            cout << "||   .       `-._.      |.'|   |            _...-\"'    _,'" << endl;
            Sleep(100);
            cout << "''   |           '      |  '   |         --'       _,-'" << endl;
            Sleep(100);
            cout << " \\\\  |                  '.'    |                 ,'" << endl;
            Sleep(100);
            cout << "  .`.'                   `.    '                (" << endl;
            Sleep(100);
            cout << "   `.____                  `--'                  `--..__" << endl;
            Sleep(100);
            cout << "         ``\"-.._                                        ``--..__" << endl;
            Sleep(100);
            cout << "                |\"                                              ``." << endl;
            Sleep(100);
            cout << "                `                             .--\"''\"\"\"'`--------'" << endl;
            Sleep(100);
            cout << "                 `.                           \\" << endl;
            Sleep(100);
            SetConsoleTextAttribute(console, 7);
            cout << "     ,-\"'`-._      `-._                 `._    `." << endl;
            Sleep(100);
            cout << "    /        `.     ,._`-.._          _,'  `-.   ." << endl;
            Sleep(100);
            cout << "   .    _      `.   |  `\"-._`     .-\"'        `-. `." << endl;
            Sleep(100);
            cout << "   |     `\"-._   `. |--.._  `._   \\              `. ." << endl;
            Sleep(100);
            cout << "   |          `-._ `|     `-._ `-. `.              `'" << endl;
            Sleep(100);
            cout << "   `        ._    `/'         `-. `. ." << endl;
            Sleep(100);
            cout << "    \\         `\"-.'  .-....__    `. `.`." << endl;
            Sleep(100);
            cout << "     .          /    '       `\"-.._   | \\" << endl;
            Sleep(100);
            cout << "      `.       /------\\            `  |  \\" << endl;
            Sleep(100);
            cout << "        `.___./        `              '   ." << endl;
            Sleep(100);
            cout << "             ,          `._        ,-'    |" << endl;
            Sleep(100);
            cout << "             |.-\"''\"\"'--.._`\"---'\"/       |" << endl;
            Sleep(100);
            cout << "             |  ______      `\"-../        |" << endl;
            Sleep(100);
            SetConsoleTextAttribute(console, 11);
            cout << "             .\"'      `\".       /         '" << endl;
            Sleep(100);
            cout << "           ,'            .     /         ." << endl;
            Sleep(100);
            cout << "          .              |   .'         /" << endl;
            Sleep(100);
            cout << "          |       ,'     |.-'          /" << endl;
            Sleep(100);
            cout << "          |       |      '            '" << endl;
            Sleep(100);
            cout << "           .       `-..-\"          _,'" << endl;
            Sleep(100);
            cout << "            `.                  _,\"" << endl;
            Sleep(100);
            cout << "              `._          __.-'" << endl;
            Sleep(100);
            cout << "                 `'------\"' mh" << endl;
            cout << endl;
            SetConsoleTextAttribute(console, 15);
            break;
        case 7:
            SetConsoleTextAttribute(console, 12);
            cout << "                         __...--------...__" << endl;
            Sleep(100);
            cout << "                    _.--'                  `\"-.." << endl;
            Sleep(100);
            cout << "                _.-'                  ,.        `-._" << endl;
            Sleep(100);
            cout << "             _,'                    .'  \\           `._" << endl;
            Sleep(100);
            cout << "           ,\"                     ,'     .             `." << endl;
            Sleep(100);
            cout << "         ,'                      /        `.             `." << endl;
            Sleep(100);
            cout << "        /                       .           \\              `." << endl;
            Sleep(100);
            cout << "      ,'                         `.._        .               ." << endl;
            Sleep(100);
            cout << "     /                               `-._    /`               \\" << endl;
            Sleep(100);
            cout << "    /                                    `-._  \\               \\" << endl;
            Sleep(100);
            cout << "   /    __,........----...__                 `\"-'               \\" << endl;
            Sleep(100);
            cout << "  /.--\"\"                    `'--.._                 ..........." << endl;
            Sleep(100);
            cout << " j                                 `\"-._            `. /      |  `" << endl;
            Sleep(100);
            cout << " '                                      `._           `.      .   ." << endl;
            Sleep(100);
            cout << ".                                          `._          `.    '   |" << endl;
            Sleep(100);
            cout << "|                                             `.          \\  /    |" << endl;
            Sleep(100);
            cout << "|                                               `.         `'     |" << endl;
            Sleep(100);
            cout << "|                                                 `.              |" << endl;
            Sleep(100);
            SetConsoleTextAttribute(console, 7);
            cout << "|                                                   `.            |" << endl;
            Sleep(100);
            cout << "'                                                     `.          |" << endl;
            Sleep(100);
            cout << " .                                                      .         |" << endl;
            Sleep(100);
            cout << "                                                         \\        '" << endl;
            Sleep(100);
            cout << "  '                                                       \\      '" << endl;
            Sleep(100);
            cout << "   .                                                       \\    /" << endl;
            Sleep(100);
            cout << "    \\       ____                                            .  /" << endl;
            Sleep(100);
            cout << "     \\    .\"    `\"\"-._                                       '/" << endl;
            Sleep(100);
            cout << "      `   '           `-.                                   ,'" << endl;
            Sleep(100);
            cout << "       `.  `.            `.                               ,'" << endl;
            Sleep(100);
            cout << "         `.  .             `.                           .'" << endl;
            Sleep(100);
            cout << "           `._`-.            \\                        .'" << endl;
            Sleep(100);
            cout << "              `._`._          '                    _,'" << endl;
            Sleep(100);
            cout << "                 `._`\"-._     |                 _.\"" << endl;
            Sleep(100);
            cout << "                     \"-.._`--'           __,.-\"'" << endl;
            Sleep(100);
            cout << "                          `\"\"----------\"' mh" << endl;
            Sleep(100);
            cout << endl;
            SetConsoleTextAttribute(console, 15);
            break;
        case 8:
            cout << "" << endl;
            SetConsoleTextAttribute(console, 13);
            Sleep(100);
            cout << "                                           ,--._" << endl;
            Sleep(100);
            cout << "                                        _,'     `." << endl;
            Sleep(100);
            cout << "                              ,.-------\"          `." << endl;
            Sleep(100);
            cout << "                             /                 \"    `-.__" << endl;
            Sleep(100);
            cout << "                            .         \"        _,        `._" << endl;
            Sleep(100);
            cout << "                            |            __..-\"             `." << endl;
            Sleep(100);
            cout << "                            |        ''\"'                     `._" << endl;
            Sleep(100);
            cout << "                            |                                    `\"-." << endl;
            Sleep(100);
            cout << "                            '                                        `." << endl;
            Sleep(100);
            cout << "                           .                                          |" << endl;
            Sleep(100);
            cout << "                          /                                           |" << endl;
            Sleep(100);
            cout << "                       _,'                                           ,'" << endl;
            Sleep(100);
            cout << "                     ,\"                                             /" << endl;
            Sleep(100);
            cout << "                    .                                              /" << endl;
            Sleep(100);
            cout << "                    |                                             /" << endl;
            Sleep(100);
            cout << "                    |                                            ." << endl;
            Sleep(100);
            cout << "                    '                                            |" << endl;
            Sleep(100);
            cout << "                     `.                                          |" << endl;
            Sleep(100);
            cout << "                       `.                                        |" << endl;
            Sleep(100);
            cout << "                         `.                                      '" << endl;
            Sleep(100);
            cout << "                           .                                      ." << endl;
            Sleep(100);
            cout << "                           |                                       `." << endl;
            Sleep(100);
            cout << "                           '                                        |" << endl;
            Sleep(100);
            cout << "                         ,'                                         |" << endl;
            Sleep(100);
            cout << "                       ,'                                           '" << endl;
            Sleep(100);
            cout << "                      /                                _...._      /" << endl;
            Sleep(100);
            cout << "                     .                              ,-'      `\"'--'" << endl;
            Sleep(100);
            cout << "      ___            |                            ,'" << endl;
            Sleep(100);
            cout << "   ,-'   `\"-._     _.'                          ,'" << endl;
            Sleep(100);
            cout << "  /           `\"--'             _,....__     _,'" << endl;
            Sleep(100);
            cout << " '                            .'        `---'" << endl;
            Sleep(100);
            cout << " `                 ____     ,'" << endl;
            Sleep(100);
            cout << "  .           _.-'\"    `---'" << endl;
            Sleep(100);
            cout << "   `-._    _.\"" << endl;
            Sleep(100);
            cout << "       \"\"\"'" << endl;
            Sleep(100);
            cout << endl;
            SetConsoleTextAttribute(console, 15);
            break;
        case 9:
            cout << "" << endl;
            SetConsoleTextAttribute(console, 245);
            Sleep(100);
            cout << "                                               `/:+`                      ```                       " << endl;
            Sleep(100);
            cout << "                                              :- .+`     `....``        -+-:/:                      " << endl;
            Sleep(100);
            cout << "                                              ./. `/--:::-....--:::::-./:   +.                      " << endl;
            Sleep(100);
            cout << "                                               `/.  .`              `.:`  `/.                       " << endl;
            Sleep(100);
            cout << "                                                `/                       `+`                        " << endl;
            Sleep(100);
            cout << "                                                `o                       /.                         " << endl;
            Sleep(100);
            cout << "                                                :-                       /.                         " << endl;
            Sleep(100);
            cout << "                                               `+                        ./                         " << endl;
            Sleep(100);
            cout << "                                               .:                        `+                         " << endl;
            Sleep(100);
            cout << "                                               `+    `.`           `     .+                         " << endl;
            Sleep(100);
            cout << "                                                :-`-:``.-`      `..` `-.`/.                         " << endl;
            Sleep(100);
            cout << "                                                `+``o/o.` `- `- ```:+-/ ./                          " << endl;
            Sleep(100);
            cout << "                                                 :- //Nh/. .:-/ .:hNh--.+`                          " << endl;
            Sleep(100);
            cout << "                        `-:::::-`                `+```:+ss::.`:/yoo/.``+`                           " << endl;
            Sleep(100);
            cout << "                       `+-`   `.+.              `:+-     ``     `     -:                            " << endl;
            Sleep(100);
            cout << "                       /-       .o              +.`./-.            `-:-`                            " << endl;
            Sleep(100);
            cout << "                       :/       :+:`           ::  --.-::.` ``. `.::.                               " << endl;
            Sleep(100);
            cout << "                        :/-...-/:`./:--..`     o   o    s.::-..::-`                                 " << endl;
            Sleep(100);
            cout << "                         `..-+-`    -+:..-:-.` + `.+:---o````.+-                                    " << endl;
            Sleep(100);
            cout << "                  `...`      :+      `:/-..-//:+:/:-.` `.--:``-:-.-.                                " << endl;
            Sleep(100);
            cout << "                -/:-.-:/-``.:/. -      .s:...-/-````.-:`  `..-:-  `:-                               " << endl;
            Sleep(100);
            cout << "               .o`     `o/--.  `o      o`     `o`     `/.      -``  -:                              " << endl;
            Sleep(100);
            cout << "        ```    -/       /-      +`     s       o`       +`     ` .:` :-                             " << endl;
            Sleep(100);
            cout << "    `-//:::://:-s:`   `:o.``    `.   ``++.`  `:/-`      -/     .- -/  +`                            " << endl;
            Sleep(100);
            cout << "  `//-`       `-:os+:::----:::.````-/:-.-:::::. ./`     `+      /  +` :/                            " << endl;
            Sleep(100);
            cout << " .o.   ``...:.    `:+.       `-::::-`            `+.    `+      `  :` :s                            " << endl;
            Sleep(100);
            cout << "`o.  `::----:+/`    `+:                           `/:`   /.      `..``/o                            " << endl;
            Sleep(100);
            cout << ":+  `+.       -+`     //                            ./-` `::-..-::-` :./`                           " << endl;
            Sleep(100);
            cout << "o.  :/         -o`     /+                             -/.    `    `  /..:                           " << endl;
            Sleep(100);
            cout << "y   +.          :+      //                             `::        /. :-`/                           " << endl;
            Sleep(100);
            cout << "y   +.           //      o-                              +.       `o``+`/`                          " << endl;
            Sleep(100);
            cout << "s`  /:            +/     .o                              -/        .+ .+./`                         " << endl;
            Sleep(100);
            cout << "+-  .o             /+`    s.                             -:         -- .+.+`                        " << endl;
            Sleep(100);
            cout << "-+   +-             -o:   s`                        ./::-:` .`       `  `/:o`                       " << endl;
            Sleep(100);
            cout << " o`  `o.              -///-                      `:/-        ``       ````-/o:                      " << endl;
            Sleep(100);
            cout << " .o   `o`                                      `//`              .:-::::::/++s+                     " << endl;
            Sleep(100);
            cout << "  :/   `+-                                    -+`                 -:        :+:+-                   " << endl;
            Sleep(100);
            cout << "   //    :+`                                 :/`                   +         `o-:+`                 " << endl;
            Sleep(100);
            cout << "    :+`   `//`                              :/                     o          `s`-o`                " << endl;
            Sleep(100);
            cout << "     -+`    .//-                           -+                     .o           o. -+                " << endl;
            Sleep(100);
            cout << "      `+-     `-/:-.                     `-s                      +-           o.  /:               " << endl;
            Sleep(100);
            cout << "       `//`      `.-:::---.....-------::::s.                     .o           `s   `s               " << endl;
            Sleep(100);
            cout << "         .+:`         ````......``````   :/                     `o.           //    s`              " << endl;
            Sleep(100);
            cout << "           -/:`                         `o`                     +-           .o`    s`              " << endl;
            Sleep(100);
            cout << "             ./:`                       -/                    `+-           `o.     s`              " << endl;
            Sleep(100);
            cout << "               .:/-`                    +.                   `+-           `o-      s               " << endl;
            Sleep(100);
            cout << "                 `-/:.`                 o`                  .+-           -+.      `o               " << endl;
            Sleep(100);
            cout << "                    `-/:-.`             o`                `//`          ./:`       :-               " << endl;
            Sleep(100);
            cout << "                       `.-:::-.``       :`              `:/.          .//.        ./                " << endl;
            Sleep(100);
            cout << "                            `.--::::-.-:+`            .:/.         `-/:.        .::`                " << endl;
            Sleep(100);
            cout << "                                  `.://:`          `.//.        `-:/-`       .-/-`                  " << endl;
            Sleep(100);
            cout << "                                  -/-`          `-/+:.````...-:/s:.      `.-/-.                     " << endl;
            Sleep(100);
            cout << "                                 `o         .::::-:---------..` o       `+-`                        " << endl;
            Sleep(100);
            cout << "                                  o`      `-:-`                 ::      .+                          " << endl;
            Sleep(100);
            cout << "                                  o`     ./.                     +`     +.                          " << endl;
            Sleep(100);
            cout << "                                 `o     .o`                      +.     +                           " << endl;
            Sleep(100);
            cout << "                                 ::     o.                      `o`     /`                          " << endl;
            Sleep(100);
            cout << "                                `o`    :+                      `+-      `+-                         " << endl;
            Sleep(100);
            cout << "                                :/     y`                    ./o/-`      `:/.                       " << endl;
            Sleep(100);
            cout << "                               `o`     h/-                  -+. `-s`       `//.`                    " << endl;
            Sleep(100);
            cout << "                              `o.      y`o`                 o`    o.         `:/:`                  " << endl;
            Sleep(100);
            cout << "                              /:       s.o.                 -o.``:s.`           .:/:.`       ````   " << endl;
            Sleep(100);
            cout << "                             :/        :o-                   `///-`-:/:.         ...:///::::/::://` " << endl;
            Sleep(100);
            cout << "                            :/         `o.`..``                       .:+.        .-:/::/++-`    .+:" << endl;
            Sleep(100);
            cout << "                           -+  `://`    `/:..::/-                       `+:`               -+-    `s" << endl;
            Sleep(100);
            cout << "                          -o      -+            //                        -//:.```         `/o-:--:." << endl;
            Sleep(100);
            cout << "                          /:     `/o-:::::::`   `s                           `-:::::::::--:-`       " << endl;
            Sleep(100);
            cout << "                           :/::://-        `:////-                                                  " << endl;
            Sleep(100);
            cout << endl;
            SetConsoleTextAttribute(console, 15);
            break;
        }
    }
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Simulates the battle of the Pokemon
class Pokemon
{

public:
    // p_health = health of the Pokemon
    int p_health;
    // p_lvl = pokemon level
    int p_lvl;     
    //poke_name = pokemon name
    string poke_name;
    //p_name = another variable to store pokemon name
    string p_name; 
    Characteristics pokemon_name ;
    Pokemon()
    {
        // default constructor
        Pokemon("Mew");
        // Pokemon name is Mew
        cout << "Pokemon's name is Mew" ;
    }

    // assigns the default values of the variables
    Pokemon(string poke_name) //specified constructor
    {
        p_name = poke_name;
        p_lvl = 1;
        p_health = 60;
    }

// will be called for every action that has a success/fail chance
    unsigned int chance() 
    {
        //z stores the value of the random number till 3
        int z;
        //gets a random number in the interval [0,2]
        z = rand() % 3;
        //returns the value of z
        return z;
    }

 //  check if the a Pokemon's health has reached 0 and returning a bool value accordingly
    bool health_check()
    {
        //checks if the health is less than 0
        if (p_health <= 0)
        {
        // return fals if the condition is true
            return false;
        }
        // returns true if the condition is false
        return true;
    }

    // will take user input from the main function to decide the amount of damage dealt to the enemy 
    void decrease_health(int a, int name_num) 
    {
        // checks if the user chose one of the Physical attacks that deal the same amount of damage
        if (a == 0 || a == 1) 
        {
            // Displays that the Pokemon used Physical Attack
           cout << "| " << setw(11) << pokemon_name.assign_Name(name_num) <<" has used the Physical Attack      |" << endl;
            // 2 is going to be our fail chance number as in, if the random number is 2 the action is going to fail
            if (chance() != 2) 
            {
                //calls the damage() function which does a damage to the opponent
                damage();
                //Displays that the attack hit the opponent
                cout <<  "| " << setw(11) <<  pokemon_name.assign_Name(name_num) << " hit the opponent.                 |" << endl  ;  //note if you forgot: add p_name to this to make it less confusing
            }
            else
            {
                //Displays that the attack missed the opponent
                cout <<  "| " << setw(11) <<  pokemon_name.assign_Name(name_num) << " missed the opponent.              |" << endl  ;
            }
        }
        //the 3rd attack is our elemental attack that will deal more damage (normal damage+ added damage)if the user chose it.
        else if (a == 2) 
        {
            // Displays that the Pokemon used Special Attack
            cout << "| " << setw(11) <<  pokemon_name.assign_Name(name_num) <<" has used the Special Attack       |" << endl;
            if (chance() != 2)
            {
                //calls the damage() function which does a damage to the opponent
                damage();
                //calls the elemental_damage() function which does an extra damage to the opponent
                elemental_damage();
                //Displays that the attack hit the opponent
                cout <<  "| " << setw(11) <<  pokemon_name.assign_Name(name_num) << " hit the opponent.                 |" << endl  ; //note if you forgot: add p_name to this to make it less confusing
            }
            else
            {
                // Displays that the attack missed the opponent
                cout <<  "| " << setw(11) <<  pokemon_name.assign_Name(name_num) << " missed the opponent.              |" << endl  ;
            }
        }
        //the 4th attack is our normal attack that will deal the same as the physical attack if the user chose it.
        else if (a == 3)
        {
            // Displays that the Pokemon has used a Normal Attack
            cout << "| " << setw(11) <<  pokemon_name.assign_Name(name_num) <<" has used the Normal Attack        |" << endl;
            if (chance() != 2)
            {
                //calls the damage function which does a damage to the opponent
                damage();
                //Displays that the attack hit the opponent
                cout <<  "| " << setw(11) <<  pokemon_name.assign_Name(name_num) << " hit the opponent.                 |" << endl  ;
            }
            else
            {
                // Displays that the attack missed the opponent
                cout <<  "| " << setw(11) <<  pokemon_name.assign_Name(name_num) << " missed the opponent.              |" << endl  ;
            }
        }
    }

    // elemental damage does an extra damage if the user uses the Special Attack
    void elemental_damage() 
    {
        //Decreases 20% of the health
        p_health = 0.80 * p_health;
    }

    //deals damage to the Pokemon's health
    void damage()
    {
        // Decreases 15% of the health
        p_health = 0.85 * p_health;
    }

    // if the user has chosen to be a wuss and run away this function will apply the chance implemented previously to decide if he escapes or not.
    unsigned int run() 
    {
        // calls the chance() function and checks the condition whether the Pokemon runs away or not
        if (chance() != 2)
        {
            cout << "You couldn't Run Away" << endl;
            return 0;
        }
        else
        {
            cout << "You ran away successfully" << endl;
            return 1;
        }
    }

    // displays the health of the pokemon along its name each time an attack is excuted
    void health_print(int nam_e) 
    {
        // displays the health of the pokemon along its name each time an attack is excuted
        cout << "| " <<  setw(11) << pokemon_name.assign_Name(nam_e) << " " << p_health << "                                |"<<endl;
    }

    //Displays name of the Pokemon
    void print_name()
    {
        //Displays name of the Pokemon
        cout << p_name ;
    }
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    //counter counts the number of times the user uses the attack and resets itself
    int counter = 0 ;
    //clear screen
    system("CLS"); 
    //to seed random time
    srand(time(NULL));
    //Displays The Pokemon Logo
    //Sleep(a) - delays the time by a milliseconds before displaying the next cout ;
    //SetConsoleTextAttribute(console, n) - changes the color of the characters in the screen depending on the integer n (0-255) 
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
    // user_Pokemon_Choice:- takes in the input choice of the user
    // comp_Pokemon_Choice:- takes in the input choice of the comp
    int user_Pokemon_Choice, comp_Pokemon_Choice  ;
    //Prompts the user to choose a Pokemon
    cout << "Which Pokemon Do You Want To Choose?" << endl ;
    cout << "[0] Bulbasaur       [1] Charmander      [2] Squirtle         [3] Pikachu" << endl ;
    cout << "                    [4] Bellsprout      [5] Growlithe" << endl ;
    cout << "[6] Horsea          [7] Voltorb         [8] Ditto            [9] MewTwo " << endl ;
    cout << "Choose One Of The Above : - " ;
    // user input for pokemon choice  
    cin >> user_Pokemon_Choice ;
    // CPU chooses one randomly
    comp_Pokemon_Choice = rand() % 10 ; 
    Characteristics pokemon_char ;
    // calling the name function to assign the name of the object to suit the choice of the user
    Pokemon temp_1(pokemon_char.assign_Name(user_Pokemon_Choice)); 
    Pokemon temp_2(pokemon_char.assign_Name(comp_Pokemon_Choice));
    // user_input - takes in the user's input in Fight/Run/Pokedex
    // checker = checks if the Pokemon ran away or not
    // user_choice - takes the type of attack that the user did
    // d = randomly chooses the computer's attack
    int user_input, checker = 0, user_choice = 0, d;
    //clear screen
    system("CLS") ;
    cout << endl << "The user has chosen : " ;
    //calls print_name() function
    temp_1.print_name() ;
    cout << " for this battle." << endl ; 
    Sleep(100);
    // diaplays the user's pokemon
    pokemon_char.display_diagram(user_Pokemon_Choice) ;
    Sleep(100);
    SetConsoleTextAttribute(console, 15);
    // diaplays the user's pokemon name
    pokemon_char.display_Name(user_Pokemon_Choice) ;
    Sleep(100);
    // diaplays the user's pokemon type
    pokemon_char.display_Type(user_Pokemon_Choice) ;
    Sleep(100);
    // diaplays the user's pokemon species
    pokemon_char.display_Species(user_Pokemon_Choice) ;
    Sleep(100);
    // diaplays the user's pokemon information
    pokemon_char.display_DispAndChar(user_Pokemon_Choice) ;
    Sleep(100);
    // diaplays the user's pokemon attack type
    pokemon_char.display_AttackTypes(user_Pokemon_Choice) ;
    cout << endl ;
    //system("PAUSE")  allows intervals of time -pauses- to control the pace of the text being printed out in the console
    system("PAUSE") ;
    //clear screen
    system("CLS") ;
    cout << endl << "The computer has chosen : " ;
    //calls print_name() function
    temp_2.print_name() ;
    cout << " for this battle." << endl ; 
    Sleep(100);
    // diaplays the computer's pokemon
    pokemon_char.display_diagram(comp_Pokemon_Choice) ; 
    Sleep(100);
    SetConsoleTextAttribute(console, 15);
    // diaplays the computer's pokemon name
    pokemon_char.display_Name(comp_Pokemon_Choice) ;
    Sleep(100);
    // diaplays the computer's pokemon type
    pokemon_char.display_Type(comp_Pokemon_Choice) ;
    Sleep(100);
    // diaplays the computer's pokemon species
    pokemon_char.display_Species(comp_Pokemon_Choice) ;
    Sleep(100);
    // diaplays the computer's pokemon information
    pokemon_char.display_DispAndChar(comp_Pokemon_Choice) ;
    Sleep(100);
    // diaplays the computer's pokemon attack type
    pokemon_char.display_AttackTypes(comp_Pokemon_Choice) ;
    cout << endl ;
    //Pauses screen
    system("PAUSE") ;
    //clear screen
    system("CLS") ;
    do 
    {
        cout << " ___________________________________________________ " << endl;
        cout << "|                           |                       |" << endl;
        cout << "|         [1]_FIGHT         |         [2]_RUN       |" << endl;
        cout << "|___________________________|_______________________|" << endl;
        cout << "|                                                   |" << endl;
        cout << "|                [3]_CHECK THE POKEDEX              |" << endl;
        cout << "|___________________________________________________|" << endl;
        cin >> user_input;
        switch (user_input)
        {
            // if the user chooses to fight excute the code in the case statement
            case 1:
            // while the user hasn't chosen to exit, and neither of the players's have reached 0 excute the code within
                do 
                {
                    // now after we checked if the user has not exited we will want to check if both pokemons has not fainted yet - health ==0 - .
                    if (temp_1.health_check() == true && temp_2.health_check() == true)
                    {
                        cout << " ___________________________________________________________________" << endl;
                        cout << "|              |              |             |            |          |" << endl;
                        cout << "| [0] Physical | [1] Physical | [2] Special | [3] Normal | [4] Exit |" << endl;
                        cout << "|______________|______________|_____________|____________|__________|" << endl;
                        cin >> user_choice;
                        if (user_choice != 4) 
                        {
                            cout << " _______________________________________________ " << endl ;
                            //calls decrease_health() function
                            temp_1.decrease_health(user_choice, user_Pokemon_Choice);
                            cout << "|                                               |" << endl ;
                            //calls health_print() function
                            temp_1.health_print(comp_Pokemon_Choice);
                            cout << "|_______________________________________________|" << endl ;
                            d = rand() % 4;
                            cout << " _______________________________________________ " << endl ;
                            //calls decrease_health() function
                            temp_2.decrease_health(d,comp_Pokemon_Choice);
                            cout << "|                                               |" << endl ;
                            //calls health_print() function
                            temp_2.health_print(user_Pokemon_Choice);
                            cout << "|_______________________________________________|" << endl ;
                            system("PAUSE") ;
                            counter++ ;
                            if (counter == 3 ) 
                            {
                                //resets the counter to 0
                                counter = 0 ;
                                system("CLS") ;
                            }
                        }
                    }
                } while (user_choice != 4 && temp_1.health_check() == true && temp_2.health_check() == true) ;
                // if either of the players died it will print a text indicating so along with the pokemon's name
                if (temp_1.health_check() == false || temp_2.health_check() == false)
                {
                    if (temp_2.health_check() == false)
                    {
                        system("CLS") ;
                        //Displays that the Pokemon has fainted along with a meme
                        temp_1.print_name();
                        cout << " has fainted. . " << endl;
                        pokemon_char.display_meme() ;
                    }
                    if (temp_1.health_check() == false)
                    {
                        system("CLS") ;
                        //Displays that the Pokemon has fainted along with a meme
                        temp_2.print_name();
                        cout << " has fainted. . " << endl;
                        pokemon_char.display_meme() ;
                    }
                }
                break;
            case 2:
                checker = temp_1.run();
                // if the user chooses to run and the user fails to run, the user turn will be skipped and the computer will have an extra chance to attack
                if (checker == 0) 
                {
                    // this value is the random value the computer will use to determin which attack to use when the user attempts to run
                    d = rand() % 4; 
                    temp_2.decrease_health(d,comp_Pokemon_Choice);
                    temp_2.health_print(user_Pokemon_Choice);
                    if (temp_2.health_check() == false)
                    {
                        system("CLS") ;
                        //Displays that the Pokemon has fainted along with a meme
                        temp_2.print_name();
                        cout << " has fainted. . " << endl;
                        pokemon_char.display_meme() ;
                    }
                }
            break;
            case 3:
            int number ;
            char buffer ; 
            char ans ;
            cout << endl ;
            system("CLS") ;
            do {
                system("CLS") ;
                 //Displays The Pokemon Logo
                //Sleep(a) - delays the time by a milliseconds before displaying the next cout ;
                //SetConsoleTextAttribute(console, n) - changes the color of the characters in the screen depending on the integer n (0-255) 
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
                //Prompts the user to choose a Pokemon
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
                // displays the pokemon that has been chosen
                pokemon_char.display_diagram(number) ; 
                Sleep(100);
                SetConsoleTextAttribute(console, 15);
                // displays the name of the pokemon that has been chosen
                pokemon_char.display_Name(number) ;
                Sleep(100);
                // displays the type of the pokemon that has been chosen
                pokemon_char.display_Type(number) ;
                Sleep(100);
                // displays the species of the pokemon that has been chosen
                pokemon_char.display_Species(number) ;
                Sleep(100);
                // displays other information of the pokemon that has been chosen
                pokemon_char.display_DispAndChar(number) ;
                Sleep(100);
                // displays the attack type of the pokemon that has been chosen
                pokemon_char.display_AttackTypes(number) ;
                cout << endl ;
                cout << "Enter Any Character To Continue :" ;
                cin >> buffer ;
                system("CLS") ;
                //asks the user if they want to look into other pokemon's information
                cout << "Do You Want To Look Into Other Pokemon?(Y/N)" ; 
                cin >> ans ; 
                cout << endl << endl;
                system("CLS") ;
                // checks if the user wants to see more pokemons or not, if so it keeps excuting the code in the loop , if not it will exit the loop
            } while (ans != 'n' && ans != 'N') ;
        } 

        // the code will end when 1) the user has ran way. 2) one of the players's pokemons has died -fainted-
    } while (checker == 0 && temp_1.health_check() == true && temp_2.health_check() == true);
}