/*#include <iostream> 
#include <iomanip>
using namespace std; 
/*
int main() {
    cout << "Welcome to The Pokemon World !" << endl ;

//PokeMon Logo
    cout << "                                    ,'\\ " << endl ;
    cout << "       _.----.        ____         ,'  _\\    " << endl ;
    cout << "   _,-'       `.     |    |  /`.   \\,-'    |   \\  /   |   |    \\  |`. " << endl ;
    cout << "   \\      __    \\    '-.  | /   `.  ___    |    \\/    |   '-.   \\ |  | " << endl ;
    cout << "    \\.    \\ \\   |  __  |  |/    ,','_  `.  |          | __  |    \\|  | " << endl ;
    cout << "      \\    \\/   /,' _`.|      ,' / / / /   |          ,' _`.|     |  | " << endl ;
    cout << "       \\     ,-'/  /   \\    ,'   | \\/ / ,`.|         /  /   \\  |     | " << endl ;
    cout << "        \\    \\ |   \\_/  |   `-.  \\    `'  /|  |    ||   \\_/  | |\\    | " << endl ;
    cout << "         \\    \\ \\      /       `-.`.___,-' |  |\\  /| \\      /  | |   | " << endl ;
    cout << "          \\    \\ `.__,'|  |`-._    `|      |__| \\/ |  `.__,'|  | |   | " << endl ;
    cout << "           \\_.-'       |__|    `-._ |              '-.|     '-.| |   |" << endl ;
    cout << "                                   `'                            '-._| " << endl ;
    
    cout << endl << endl << endl ;
    

//Bulbasaur
    cout << "                                           /" << endl ;
    cout << "                        _,.------....___,.' ',.-." << endl ;
    cout << "                     ,-'          _,.--\"        |" << endl ;
    cout << "                   ,'         _.-'              ." << endl ;
    cout << "                  /   ,     ,'                   `" << endl ;
    cout << "                 .   /     /                     ``." << endl ;
    cout << "                 |  |     .                       \\.\\" << endl ;
    cout << "       ____      |___._.  |       __               \\ `." << endl ;
    cout << "     .'    `---\"\"       ``\"-.--\"'`  \\               .  \\" << endl ;
    cout << "    .  ,            __               `              |   ." << endl ;
    cout << "    `,'         ,-\"'  .               \\             |    L" << endl ;
    cout << "   ,'          '    _.'                -._          /    |" << endl ;
    cout << "  ,`-.    ,\".   `--'                      >.      ,'     |" << endl ;
    cout << " . .'\\'   `-'       __    ,  ,-.         /  `.__.-      ,'" << endl ;
    cout << " ||:, .           ,'  ;  /  / \\ `        `.    .      .'/" << endl ;
    cout << " j|:D  \\          `--'  ' ,'_  . .         `.__, \\   , /" << endl ;
    cout << "/ L:_  |                 .  \"' :_;                `.'.'" << endl ;
    cout << ".    \"\"'                  \"\"\"\"\"'                    V" << endl ;
    cout << " `.                                 .    `.   _,..  `" << endl ;
    cout << "   `,_   .    .                _,-'/    .. `,'   __  `" << endl ;
    cout << "    ) \\`._        ___....----\"'  ,'   .'  \\ |   '  \\  ." << endl ;
    cout << "   /   `. \"`-.--\"'         _,' ,'     `---' |    `./  |" << endl ;
    cout << "  .   _  `\"\"'--.._____..--\"   ,             '         |" << endl ;
    cout << "  | .\" `. `-.                /-.           /          ," << endl ;
    cout << "  | `._.'    `,_            ;  /         ,'          ." << endl ;
    cout << " .'          /| `-.        . ,'         ,           ," << endl ;
    cout << " '-.__ __ _,','    '`-..___;-...__   ,.'\\ ____.___.'" << endl ;
    cout << " `\"^--'..'   '-`-^-'\"--    `-^-'`.''\"\"\"\"\"`.,^.`.--' mh" << endl ;
    cout << "" << endl ;
    cout << "" << endl ;
    cout << endl << endl << endl << endl ;


//Squirtle
    cout << "                _,........__" << endl ;
    cout << "              -'            \"`-. " << endl ;
    cout << "            ,'                   `-." << endl ;
    cout << "          ,'                        \\ " << endl ;
    cout << "        ,'                           ." << endl ;
    cout << "        .'\\               ,"".       `" << endl ;
    cout << "       ._.'|             / |  `       \\ " << endl ;
    cout << "       |   |            `-.'  ||       `." << endl ;
    cout << "       |   |            '-._,'||       | \\ " << endl ;
    cout << "       .`.,'             `..,'.'       , |`-." << endl ;
    cout << "       l                       .'`.  _/  |   `." << endl ;
    cout << "       `-.._'-   ,          _ _'   -\" \\  .     `" << endl ;
    cout << "  `.\"\"\"\"\"'-.`-...,---------','         `. `....__." << endl ;
    cout << "  .'        `\"-..___      __,'\\          \\  \\     \\" << endl ;
    cout << "  \\_ .          |   `""""'    `.           . \\     \\" << endl ;
    cout << "     `.          |              `.          |  .     L" << endl ;
    cout << "       .        |`--...________.'.        j   |     |" << endl ;
    cout << "         ._    .'      |          `.     .|   ,     |  " << endl ;
    cout << "           `--,\\       .            `7""' |  ,      |  " << endl ;
    cout << "              ` `      `            /     |  |      |    _,-'\"\"\"`-. " << endl ;
    cout << "               \\ `.     .          /      |  '      |  ,'          `. " << endl ;
    cout << "                 \\  v.__  .        '       .   \\    /| /              \\  " << endl ;
    cout << "                   \\/    `""\"""""""`.       \\   \\  /.''                |  " << endl ;
    cout << "                    `        .        `._ ___,j.  `/ .-       ,---.     | " << endl ;
    cout << "                    ,`-.      \\         .\"     `.  |/        j     `    |  " << endl ;
    cout << "                   /    `.     \\       /         \\ /         |     /    j  " << endl ;
    cout << "                  |       `-.   7-.._ .          |\"          '         /  " << endl ;
    cout << "                  |          `./_    `|          |            .     _,'  " << endl ;
    cout << "                  `.           / `----|          |-............`---'  " << endl ;
    cout << "                    \\          \\      |          |  " << endl ;
    cout << "                   ,'           )     `.         |  " << endl ;
    cout << "                    7____,,..--'      /          |  " << endl ;
    cout << "                                      `---.__,--.'mh" << endl ;

    cout << endl <<  endl << endl << endl ;
 
//Charmander
    cout << "                                   _.--""`-.. " << endl;
    cout << "                                 ,'          `." << endl;
    cout << "                               ,'          __  `." << endl;
    cout << "                              /|          \" __   \\" << endl;
    cout << "                             , |           / |.   ." << endl;
    cout << "                             |,'          !_.'|   |" << endl;
    cout << "                           ,'             '   |   |" << endl;
    cout << "                          /              |`--'|   |" << endl;
    cout << "                         |                `---'   |" << endl;
    cout << "                          .   ,                   |                       ,\"." << endl;
    cout << "                           ._     '           _'  |                    , ' \\ ` " << endl;
    cout << "                       `.. `.`-...___,...---\"\"    |       __,.        ,`\"   L,| " << endl;
    cout << "                       |, `- .`._        _,-,.'   .  __.-'-. /        .   ,    \\" << endl;
    cout << "                     -:..     `. `-..--_.,.<       `\"      / `.        `-/ |   ." << endl;
    cout << "                       `,         \"\"\"\"'     `.              ,'         |   |  ',," << endl;
    cout << "                         `.      '            '            /          '    |'. |/" << endl;
    cout << "                           `.   |              \\       _,-'           |       ''" << endl;
    cout << "                             `._'               \\   '\"\\                .      |" << endl;
    cout << "                                |                '     \\                `._  ,'" << endl;
    cout << "                                |                 '     \\                 .'|" << endl;
    cout << "                                |                 .      \\                | |" << endl;
    cout << "                                |                 |       L              ,' |" << endl;
    cout << "                                `                 |       |             /   ' " << endl;
    cout << "                                 \\                |       |           ,'   / " << endl;
    cout << "                              ,' \\               |  _.._ ,-..___,..-'    ,'" << endl;
    cout << "                             /     .             .      `!             ,j'" << endl;
    cout << "                            /       `.          /        .           .'/" << endl;
    cout << "                           .          `.       /         |        _.'.'" << endl;
    cout << "                            `.          7`'---'          |------\"'_.'" << endl;
    cout << "                           _,.`,_     _'                ,''-----\"'" << endl;
    cout << "                       _,-_    '       `.     .'      ,\\ " << endl;
    cout << "                       -\" /`.         _,'     | _  _  _.| " << endl;
    cout << "                        \"\"--'---\"\"\"\"\"'        `' '! |! /" << endl;
    cout << "                                               `\" \" -' mh" << endl;
    


    cout << endl <<  endl << endl << endl ;
//Pikachu
    cout << "                                             ,-." << endl ;
    cout << "                                          _.|  '" << endl ;
    cout << "                                        .'  | /" << endl ;
    cout << "                                      ,'    |'" << endl ;
    cout << "                                     /      /" << endl ;
    cout << "                       _..----\"\"---.'      /" << endl ;
    cout << " _.....---------...,-\"\"                  ,'" << endl ;
    cout << " `-._  \\                                /" << endl ;
    cout << "     `-.+_            __           ,--. ." << endl ;
    cout << "          `-.._     .:  ).        (`--\"| \\" << endl ;
    cout << "               7    | `\" |         `...'  \\" << endl ;
    cout << "               |     `--'     '+\"        ,\". ,\"\"-" << endl ;
    cout << "               |   _...        .____     | |/    '" << endl ;
    cout << "          _.   |  .    `.  '--\"   /      `./     j" << endl ;
    cout << "         \\' `-.|  '     |   `.   /        /     /" << endl ;
    cout << "         '     `-. `---\"      `-\"        /     /" << endl ;
    cout << "          \\       `.                  _,'     /" << endl ;
    cout << "           \\        `                        ." << endl ;
    cout << "            \\                                j" << endl ;
    cout << "             \\                              /" << endl ;
    cout << "              `.                           ." << endl ;
    cout << "                +                          \\" << endl ;
    cout << "                |                           L" << endl ;
    cout << "                |                           |" << endl ;
    cout << "                |  _ /,                     |" << endl ;
    cout << "                | | L)'..                   |" << endl ;
    cout << "                | .    | `                  |" << endl ;
    cout << "                '  \\'   L                   '" << endl ;
    cout << "                 \\  \\   |                  j" << endl ;
    cout << "                  `. `__'                 /" << endl ;
    cout << "                _,.--.---........__      /" << endl ;
    cout << "               ---.,'---`         |   -j\"" << endl ;
    cout << "                .-'  '....__      L    |" << endl ;
    cout << "              \"\"--..    _,-'       \\ l||" << endl ;
    cout << "                  ,-'  .....------. `||'" << endl ;
    cout << "               _,'                /" << endl ;
    cout << "             ,'                  /" << endl ;
    cout << "            '---------+-        /" << endl ;
    cout << "                     /         /" << endl ;
    cout << "                   .'         /" << endl ;
    cout << "                 .'          /" << endl ;
    cout << "               ,'           /" << endl ;
    cout << "             _'....----\"\"\"\"\" mh" << endl ;

    cout << endl <<  endl << endl << endl ;

     cout  << "                         __...--------...__" << endl ;
    cout  << "                    _.--'                  `\"-.." << endl ;
    cout  << "                _.-'                  ,.        `-._" << endl ;
    cout  << "             _,'                    .'  \\           `._" << endl ;
    cout  << "           ,\"                     ,'     .             `." << endl ;
    cout  << "         ,'                      /        `.             `." << endl ;
    cout  << "        /                       .           \\              `." << endl ;
    cout  << "      ,'                         `.._        .               ." << endl ;
    cout  << "     /                               `-._    /`               \\" << endl ;
    cout  << "    /                                    `-._  \\               \\" << endl ;
    cout  << "   /    __,........----...__                 `\"-'               \\" << endl ;
    cout  << "  /.--\"\"                    `'--.._                 ..........." << endl ;
    cout  << " j                                 `\"-._            `. /      |  `" << endl ;
    cout  << " '                                      `._           `.      .   ." << endl ;
    cout  << ".                                          `._          `.    '   |" << endl ;
    cout  << "|                                             `.          \\  /    |" << endl ;
    cout  << "|                                               `.         `'     |" << endl ;
    cout  << "|                                                 `.              |" << endl ;
    cout  << "|                                                   `.            |" << endl ;
    cout  << "'                                                     `.          |" << endl ;
    cout  << " .                                                      .         |" << endl ;
    cout  << "                                                         \\        '" << endl ;
    cout  << "  '                                                       \\      '" << endl ;
    cout  << "   .                                                       \\    /" << endl ;
    cout  << "    \\       ____                                            .  /" << endl ;
    cout  << "     \\    .\"    `\"\"-._                                       '/" << endl ;
    cout  << "      `   '           `-.                                   ,'" << endl ;
    cout  << "       `.  `.            `.                               ,'" << endl ;
    cout  << "         `.  .             `.                           .'" << endl ;
    cout  << "           `._`-.            \\                        .'" << endl ;
    cout  << "              `._`._          '                    _,'" << endl ;
    cout  << "                 `._`\"-._     |                 _.\"" << endl ;
    cout  << "                     \"-.._`--'           __,.-\"'" << endl ;
    cout  << "                          `\"\"----------\"' mh" << endl ;


    cout << endl <<  endl << endl << endl ;

    cout  << "" << endl ;
    cout  << "                                           ,--._" << endl ;
    cout  << "                                        _,'     `." << endl ;
    cout  << "                              ,.-------\"          `." << endl ;
    cout  << "                             /                 \"    `-.__" << endl ;
    cout  << "                            .         \"        _,        `._" << endl ;
    cout  << "                            |            __..-\"             `." << endl ;
    cout  << "                            |        ''\"'                     `._" << endl ;
    cout  << "                            |                                    `\"-." << endl ;
    cout  << "                            '                                        `." << endl ;
    cout  << "                           .                                          |" << endl ;
    cout  << "                          /                                           |" << endl ;
    cout  << "                       _,'                                           ,'" << endl ;
    cout  << "                     ,\"                                             /" << endl ;
    cout  << "                    .                                              /" << endl ;
    cout  << "                    |                                             /" << endl ;
    cout  << "                    |                                            ." << endl ;
    cout  << "                    '                                            |" << endl ;
    cout  << "                     `.                                          |" << endl ;
    cout  << "                       `.                                        |" << endl ;
    cout  << "                         `.                                      '" << endl ;
    cout  << "                           .                                      ." << endl ;
    cout  << "                           |                                       `." << endl ;
    cout  << "                           '                                        |" << endl ;
    cout  << "                         ,'                                         |" << endl ;
    cout  << "                       ,'                                           '" << endl ;
    cout  << "                      /                                _...._      /" << endl ;
    cout  << "                     .                              ,-'      `\"'--'" << endl ;
    cout  << "      ___            |                            ,'" << endl ;
    cout  << "   ,-'   `\"-._     _.'                          ,'" << endl ;
    cout  << "  /           `\"--'             _,....__     _,'" << endl ;
    cout  << " '                            .'        `---'" << endl ;
    cout  << " `                 ____     ,'" << endl ;
    cout  << "  .           _.-'\"    `---'" << endl ;
    cout  << "   `-._    _.\"" << endl ;
    cout  << "       \"\"\"'" << endl ;

    cout << endl <<  endl << endl << endl ;

//MewTwo
    cout  << "" << endl ;
    cout  << "                                               `/:+`                      ```                        " << endl ;
    cout  << "                                              :- .+`     `....``        -+-:/:                      " << endl ;
    cout  << "                                              ./. `/--:::-....--:::::-./:   +.                      " << endl ;
    cout  << "                                               `/.  .`              `.:`  `/.                       " << endl ;
    cout  << "                                                `/                       `+`                        " << endl ;
    cout  << "                                                `o                       /.                         " << endl ;
    cout  << "                                                :-                       /.                         " << endl ;
    cout  << "                                               `+                        ./                         " << endl ;
    cout  << "                                               .:                        `+                         " << endl ;
    cout  << "                                               `+    `.`           `     .+                         " << endl ;
    cout  << "                                                :-`-:``.-`      `..` `-.`/.                         " << endl ;
    cout  << "                                                `+``o/o.` `- `- ```:+-/ ./                          " << endl ;
    cout  << "                                                 :- //Nh/. .:-/ .:hNh--.+`                          " << endl ;
    cout  << "                        `-:::::-`                `+```:+ss::.`:/yoo/.``+`                           " << endl ;
    cout  << "                       `+-`   `.+.              `:+-     ``     `     -:                            " << endl ;
    cout  << "                       /-       .o              +.`./-.            `-:-`                            " << endl ;
    cout  << "                       :/       :+:`           ::  --.-::.` ``. `.::.                               " << endl ;
    cout  << "                        :/-...-/:`./:--..`     o   o    s.::-..::-`                                 " << endl ;
    cout  << "                         `..-+-`    -+:..-:-.` + `.+:---o````.+-                                    " << endl ;
    cout  << "                  `...`      :+      `:/-..-//:+:/:-.` `.--:``-:-.-.                                " << endl ;
    cout  << "                -/:-.-:/-``.:/. -      .s:...-/-````.-:`  `..-:-  `:-                               " << endl ;
    cout  << "               .o`     `o/--.  `o      o`     `o`     `/.      -``  -:                              " << endl ;
    cout  << "        ```    -/       /-      +`     s       o`       +`     ` .:` :-                             " << endl ;
    cout  << "    `-//:::://:-s:`   `:o.``    `.   ``++.`  `:/-`      -/     .- -/  +`                            " << endl ;
    cout  << "  `//-`       `-:os+:::----:::.````-/:-.-:::::. ./`     `+      /  +` :/                            " << endl ;
    cout  << " .o.   ``...:.    `:+.       `-::::-`            `+.    `+      `  :` :s                            " << endl ;
    cout  << "`o.  `::----:+/`    `+:                           `/:`   /.      `..``/o                            " << endl ;
    cout  << ":+  `+.       -+`     //                            ./-` `::-..-::-` :./`                           " << endl ;
    cout  << "o.  :/         -o`     /+                             -/.    `    `  /..:                           " << endl ;
    cout  << "y   +.          :+      //                             `::        /. :-`/                           " << endl ;
    cout  << "y   +.           //      o-                              +.       `o``+`/`                          " << endl ;
    cout  << "s`  /:            +/     .o                              -/        .+ .+./`                         " << endl ;
    cout  << "+-  .o             /+`    s.                             -:         -- .+.+`                        " << endl ;
    cout  << "-+   +-             -o:   s`                        ./::-:` .`       `  `/:o`                       " << endl ;
    cout  << " o`  `o.              -///-                      `:/-        ``       ````-/o:                      " << endl ;
    cout  << " .o   `o`                                      `//`              .:-::::::/++s+                     " << endl ;
    cout  << "  :/   `+-                                    -+`                 -:        :+:+-                   " << endl ;
    cout  << "   //    :+`                                 :/`                   +         `o-:+`                 " << endl ;
    cout  << "    :+`   `//`                              :/                     o          `s`-o`                " << endl ;
    cout  << "     -+`    .//-                           -+                     .o           o. -+                " << endl ;
    cout  << "      `+-     `-/:-.                     `-s                      +-           o.  /:               " << endl ;
    cout  << "       `//`      `.-:::---.....-------::::s.                     .o           `s   `s               " << endl ;
    cout  << "         .+:`         ````......``````   :/                     `o.           //    s`              " << endl ;
    cout  << "           -/:`                         `o`                     +-           .o`    s`              " << endl ;
    cout  << "             ./:`                       -/                    `+-           `o.     s`              " << endl ;
    cout  << "               .:/-`                    +.                   `+-           `o-      s               " << endl ;
    cout  << "                 `-/:.`                 o`                  .+-           -+.      `o               " << endl ;
    cout  << "                    `-/:-.`             o`                `//`          ./:`       :-               " << endl ;
    cout  << "                       `.-:::-.``       :`              `:/.          .//.        ./                " << endl ;
    cout  << "                            `.--::::-.-:+`            .:/.         `-/:.        .::`                " << endl ;
    cout  << "                                  `.://:`          `.//.        `-:/-`       .-/-`                  " << endl ;
    cout  << "                                  -/-`          `-/+:.````...-:/s:.      `.-/-.                     " << endl ;
    cout  << "                                 `o         .::::-:---------..` o       `+-`                        " << endl ;
    cout  << "                                  o`      `-:-`                 ::      .+                          " << endl ;
    cout  << "                                  o`     ./.                     +`     +.                          " << endl ;
    cout  << "                                 `o     .o`                      +.     +                           " << endl ;
    cout  << "                                 ::     o.                      `o`     /`                          " << endl ;
    cout  << "                                `o`    :+                      `+-      `+-                         " << endl ;
    cout  << "                                :/     y`                    ./o/-`      `:/.                       " << endl ;
    cout  << "                               `o`     h/-                  -+. `-s`       `//.`                    " << endl ;
    cout  << "                              `o.      y`o`                 o`    o.         `:/:`                  " << endl ;
    cout  << "                              /:       s.o.                 -o.``:s.`           .:/:.`       ````   " << endl ;
    cout  << "                             :/        :o-                   `///-`-:/:.         ...:///::::/::://` " << endl ;
    cout  << "                            :/         `o.`..``                       .:+.        .-:/::/++-`    .+:" << endl ;
    cout  << "                           -+  `://`    `/:..::/-                       `+:`               -+-    `s" << endl ;
    cout  << "                          -o      -+            //                        -//:.```         `/o-:--:." << endl ;
    cout  << "                          /:     `/o-:::::::`   `s                           `-:::::::::--:-`       " << endl ;
    cout  << "                           :/::://-        `:////-  " << endl ;

    cout << endl <<  endl << endl << endl ;

//Growlithe
    cout  << "" << endl ;
    cout  << "" << endl ;
    cout  << "" << endl ;
    cout  << "                   _," << endl ;
    cout  << "                 .',_..," << endl ;
    cout  << "               ,'     /,--" << endl ;
    cout  << "             .'       ,./.__" << endl ;
    cout  << "             |_,.----/,,'`.  _" << endl ;
    cout  << "            .'__     //    `...>" << endl ;
    cout  << "       ____//|) |    `      /.'" << endl ;
    cout  << "      (/    `-.-'.._     _,|                 ,.-------.._" << endl ;
    cout  << "      .             `.  '   \\               /            `-._" << endl ;
    cout  << "      `..---._       |       `.            j                 `." << endl ;
    cout  << "        >-,-\"`\"\"'    |        |`\"+-..__    |              -. `-." << endl ;
    cout  << "       ( /|         /____     |  |  |  \\\"\"|+-.._     ___    `.  `." << endl ;
    cout  << "        \" `-..._     \"--,_    |  |  `   | |   | `.-.\"   \"-._  |  -`" << endl ;
    cout  << "             ,'        '_>_   j ,'  '. ,` |,  |   `. `.-v.' `-+..._`." << endl ;
    cout  << "            '.         >       '     | |  ' \\ L     ..`.  '        `._" << endl ;
    cout  << "             '.       /              '|`     \\|      '^,         ..,{ `." << endl ;
    cout  << "            / /      /                '       v          |__    ___,'\"\"" << endl ;
    cout  << "          ,'  >---+-+.        |   __,..--\"`-._          /.-'`\"----'" << endl ;
    cout  << "         /`.       `. '.      |-\"'            `\"--....-'._" << endl ;
    cout  << "       .'___'        `._`,    j             ___,-','      `-..._" << endl ;
    cout  << "  _ _.'    '/.-          '  ,'       __..<\"\"__,.-'              `." << endl ;
    cout  << " `.)         |'---\"\"`.+-.--'-------\"\"-...__  ,-'/ .\"\\          _  |" << endl ;
    cout  << ",\"\\ ,--.  _,-          ` `'                `'\"\"\"'`\"'\"\"\"`--._  . `/" << endl ;
    cout  << " `-`.___.'                                                  `\"-\"'" << endl ;
    cout  << "" << endl ;
    cout  << "" << endl ;
    cout  << "" << endl ;
    cout  << "" << endl ;

    cout << endl <<  endl << endl << endl ;

//Horsea
    cout  << "                          _,..----.._" << endl ;
    cout  << " ,\"''-.               _.-'           `\"-._" << endl ;
    cout  << ".,-.   `._          ,'    ,---.           `.             _,.." << endl ;
    cout  << "||  \\     `._     ,'    .' |   .            `.     _,.-\"' _,'" << endl ;
    cout  << "||   .       `-._.      |.'|   |            _...-\"'    _,'" << endl ;
    cout  << "''   |           '      |  '   |         --'       _,-'" << endl ;
    cout  << " \\\\  |                  '.'    |                 ,'" << endl ;
    cout  << "  .`.'                   `.    '                (" << endl ;
    cout  << "   `.____                  `--'                  `--..__" << endl ;
    cout  << "         ``\"-.._                                        ``--..__" << endl ;
    cout  << "                |\"                                              ``." << endl ;
    cout  << "                `                             .--\"''\"\"\"'`--------'" << endl ;
    cout  << "                 `.                           \\" << endl ;
    cout  << "     ,-\"'`-._      `-._                 `._    `." << endl ;
    cout  << "    /        `.     ,._`-.._          _,'  `-.   ." << endl ;
    cout  << "   .    _      `.   |  `\"-._`     .-\"'        `-. `." << endl ;
    cout  << "   |     `\"-._   `. |--.._  `._   \\              `. ." << endl ;
    cout  << "   |          `-._ `|     `-._ `-. `.              `'" << endl ;
    cout  << "   `        ._    `/'         `-. `. ." << endl ;
    cout  << "    \\         `\"-.'  .-....__    `. `.`." << endl ;
    cout  << "     .          /    '       `\"-.._   | \\" << endl ;
    cout  << "      `.       /------\\            `  |  \\" << endl ;
    cout  << "        `.___./        `              '   ." << endl ;
    cout  << "             ,          `._        ,-'    |" << endl ;
    cout  << "             |.-\"''\"\"'--.._`\"---'\"/       |" << endl ;
    cout  << "             |  ______      `\"-../        |" << endl ;
    cout  << "             .\"'      `\".       /         '" << endl ;
    cout  << "           ,'            .     /         ." << endl ;
    cout  << "          .              |   .'         /" << endl ;
    cout  << "          |       ,'     |.-'          /" << endl ;
    cout  << "          |       |      '            '" << endl ;
    cout  << "           .       `-..-\"          _,'" << endl ;
    cout  << "            `.                  _,\"" << endl ;
    cout  << "              `._          __.-'" << endl ;
    cout  << "                 `'------\"' mh" << endl ;


    cout << endl <<  endl << endl << endl ;

//Bellsprout
    cout  << "                _.--\"'\"\"\"--._" << endl ;
    cout  << "              .\"             `." << endl ;
    cout  << "             /                 ." << endl ;
    cout  << "            j                   ." << endl ;
    cout  << "            |                   |" << endl ;
    cout  << "            |                   |" << endl ;
    cout  << "            | (')              j" << endl ;
    cout  << "            `                 ,`." << endl ;
    cout  << "             \\               ,^. `." << endl ;
    cout  << "              .             /   \\  ." << endl ;
    cout  << "              |            /     . |" << endl ;
    cout  << "              |          ,'      | |" << endl ;
    cout  << "             ,'---..___ /        | |" << endl ;
    cout  << "            ' `--..___ \"`.      .  |" << endl ;
    cout  << "             `\"--....___.'     /  j__.....__" << endl ;
    cout  << "                              /   |         `." << endl ;
    cout  << "                             / _,------._     `." << endl ;
    cout  << "                            /,+_         `.     `." << endl ;
    cout  << "                          ,'    `-.        \\      ." << endl ;
    cout  << "                         .         `.       \\      \\" << endl ;
    cout  << "                         |           `.     |       \\" << endl ;
    cout  << "                         |             `.   |_,..__  ." << endl ;
    cout  << "                         |\\              \\  |      `.|" << endl ;
    cout  << "                         | `.,--------._  \\ |        `" << endl ;
    cout  << "                         |  |           `. \\|" << endl ;
    cout  << "                         |  |             `.|" << endl ;
    cout  << "                         |  |" << endl ;
    cout  << "                         |  |" << endl ;
    cout  << "                         |. '" << endl ;
    cout  << "                        .' \\ `." << endl ;
    cout  << "                     _,' ,' `. ._" << endl ;
    cout  << "   ---====+,______,.\"_.-'     .  `." << endl ;
    cout  << "   _,..==`'_.+'-\"\"\"\"'         / ^.\\`:._" << endl ;
    cout  << " ,=\"/    ,\"            ....==+ /  `\\  `:." << endl ;
    cout  << "'  /    / |               _+:-'    .|   ``." << endl ;
    cout  << "       '  `.           --\"\"        |'     `\\" << endl ;
    cout  << "                                   ' mh" << endl ;

 return 0 ;

}*/
    
    
