#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;

//This is the greeting message that will be shown at the start
void Greet()
{
    cout << "                              \n\n";
    cout << "                           .------.        .------.                    \n";
    cout << "                          /        \\      /        \\                   \n";
    cout << "                         /_        _\\    /_        _\\                  \n";
    cout << "                        // \\      / \\\\  // \\      / \\\\                 \n";
    cout << "                        |\\__\\    /__/|  |\\__\\    /__/|                 \n";
    cout << "                         \\    ||    /    \\    ||    /                  \n";
    cout << "                          \\        /      \\        /                   \n";
    cout << "                           \\  __  /        \\  __  /                    \n";
    cout << "                            '.__.'          '.__.'                     \n";
    cout << "                             |  |            |  |                      \n";
    cout << "                             |  |            |  |                      \n\n\n";
    cout << "                                    WELCOME.                           \n\n\n";
    cout << "                .----------------------------------------------.       \n";
    cout << "               |    Your friend is being abducted by aliens!    |      \n";
    cout << "               |      Guess the letters in the codeword to      |      \n"; 
    cout << "               |    turn off the tractor-beam and save them!    |      \n";
    cout << "                '----------------------------------------------'       \n\n";
}

//Randomly chose a codeword from the list
string AssignCodeword()
{
    //Codeword variable
    string codeWord;

    //Initialize random seed
    srand(time(NULL));

    //Generate number between 1 and 20
    int randomNum = rand() % 20 + 1;

    //Depending what the number is, use the coresponding word
    switch (randomNum)
    {
    case 1:
        codeWord = "BANANA";
        break;
    case 2:
        codeWord = "MONKEY";
        break;
    case 3:
        codeWord = "SPACE";
        break;
    case 4:
        codeWord = "FLEET";
        break;
    case 5:
        codeWord = "BULBOUS";
        break;
    case 6:
        codeWord = "GALAXY";
        break;
    case 7:
        codeWord = "TROGLODYTE";
        break;
    case 8:
        codeWord = "CANVAS";
        break;
    case 9:
        codeWord = "HAIRLESS";
        break;
    case 10:
        codeWord = "OFF";
        break;
    case 11:
        codeWord = "RADIATE";
        break;
    case 12:
        codeWord = "EARTH";
        break;
    case 13:
        codeWord = "ASTEROID";
        break;
    case 14:
        codeWord = "BUNGUS";
        break;
    case 15:
        codeWord = "WATERY";
        break;
    case 16:
        codeWord = "CARBON";
        break;
    case 17:
        codeWord = "YOINK";
        break;
    case 18:
        codeWord = "ROCKET";
        break;
    case 19:
        codeWord = "ELIMINATE";
        break;
    case 20:
        codeWord = "CONQUER";
        break;
    }

    //Return the chosen word
    return codeWord;
}

//Depending on how many misses the player has, show one of the ASCII drawings
void DisplayMisses(int misses) {

    if (misses == 0 || misses == 1) 
    {

        cout << "                                   ______                                      \n";
        cout << "                                  /      \\                                     \n";
        cout << "                           ______/        \\______                              \n";
        cout << "                          /      \\        /      \\                             \n";
        cout << "                         /   **   '------'   **   \\                            \n";
        cout << "                         |       *        *       |                            \n";
        cout << "                          '----______( )______----'   .----------.             \n";
        cout << "                                 /        \\          ( SEND HELP! )            \n";
        cout << "                                /          \\        //'----------'             \n";
        cout << "                               /     \\O/    \\      /                           \n";
        cout << "                              /       |      \\                                 \n";
        cout << "                             /       / \\      \\                                \n";
        cout << "                            /                  \\                               \n";
        cout << "                           /                    \\                             \n\n";

    }
    else if (misses == 2) 
    {

        cout << "                                   ______                                      \n";
        cout << "                                  /      \\                                     \n";
        cout << "                           ______/        \\______                              \n";
        cout << "                          /      \\        /      \\                             \n";
        cout << "                         /   **   '------'   **   \\                            \n";
        cout << "                         |       *        *       |   .----------.             \n";
        cout << "                          '----______( )______----'  ( HELP! AHH! )            \n";
        cout << "                                 /        \\         //'----------'             \n";
        cout << "                                /    \\O/   \\       /                           \n";
        cout << "                               /      |     \\                                  \n";
        cout << "                              /      / \\     \\                                 \n";
        cout << "                             /                \\                                \n";
        cout << "                            /                  \\                               \n";
        cout << "                           /                    \\                          \n\n";

    }
    else if (misses == 3)
    {

        cout << "                                   ______                                      \n";
        cout << "                                  /      \\                                     \n";
        cout << "                           ______/        \\______                              \n";
        cout << "                          /      \\        /      \\                             \n";
        cout << "                         /   **   '------'   **   \\    .----------.            \n";
        cout << "                         |       *        *       |   (  SOMEBODY  )           \n";
        cout << "                          '----______( )______----'  //'----------'            \n";
        cout << "                                 /   \\O/  \\         /                          \n";
        cout << "                                /     |    \\                                   \n";
        cout << "                               /     / \\    \\                                  \n";
        cout << "                              /              \\                                 \n";
        cout << "                             /                \\                                \n";
        cout << "                            /                  \\                               \n";
        cout << "                           /                    \\                          \n\n";

    }
    else if (misses == 3) 
    {

        cout << "                                   ______                                      \n";
        cout << "                                  /      \\                                     \n";
        cout << "                           ______/        \\______                              \n";
        cout << "                          /      \\        /      \\    .----------.             \n";
        cout << "                         /   **   '------'   **   \\  ( SEND HELP! )            \n";
        cout << "                         |       *        *       | //'----------'             \n";
        cout << "                          '----______( )______----'                            \n";
        cout << "                                 /    |   \\                                   \n";
        cout << "                                /    / \\   \\                                   \n";
        cout << "                               /            \\                                  \n";
        cout << "                              /              \\                                 \n";
        cout << "                             /                \\                                \n";
        cout << "                            /                  \\                               \n";
        cout << "                           /                    \\                          \n\n";

    }
    else if (misses == 4)
    {

        cout << "                                   ______                                      \n";
        cout << "                                  /      \\                                     \n";
        cout << "                           ______/        \\______     .----------.             \n";
        cout << "                          /      \\        /      \\   ( AHHHHHHHH! )            \n";
        cout << "                         /   **   '------'   **   \\ //'----------'             \n";
        cout << "                         |       *        *       |                            \n";
        cout << "                          '----______( )______----'                            \n";
        cout << "                                 /   / \\  \\                                    \n";
        cout << "                                /          \\                                   \n";
        cout << "                               /            \\                                  \n";
        cout << "                              /              \\                                 \n";
        cout << "                             /                \\                                \n";
        cout << "                            /                  \\                               \n";
        cout << "                           /                    \\                          \n\n";

    }
    else if (misses == 5) 
    {
        cout << "                                   ______                                      \n";
        cout << "                                  /      \\            .----------.             \n";
        cout << "                           ______/        \\______    (   SCARY!   )            \n";
        cout << "                          /      \\        /      \\  //'----------'             \n";
        cout << "                         /   **   '------'   **   \\                            \n";
        cout << "                         |       *        *       |                            \n";
        cout << "                          '----______( )______----'                            \n";
        cout << "                                 /        \\                                    \n";
        cout << "                                /          \\                                   \n";
        cout << "                               /            \\                                  \n";
        cout << "                              /              \\                                 \n";
        cout << "                             /                \\                                \n";
        cout << "                            /                  \\                               \n";
        cout << "                           /                    \\                          \n\n";

    }
    else if (misses == 6)
    {

        cout << "                                   ______                                      \n";
        cout << "                                  /      \\            .----------.             \n";
        cout << "                           ______/        \\______    (    ....    )            \n";
        cout << "                          /      \\        /      \\  //'----------'             \n";
        cout << "                         /   **   '------'   **   \\                            \n";
        cout << "                         |       *        *       |                            \n";
        cout << "                          '----______( )______----'                            \n";
        cout << "                                 /        \\                                    \n";
        cout << "                                /          \\                                   \n";
        cout << "                               /            \\                                  \n";
        cout << "                              /              \\                                 \n";
        cout << "                             /                \\                                \n";
        cout << "                            /                  \\                               \n";
        cout << "                           /                    \\                          \n\n";

    }
}


//Display the status of the codeword, as well as the incorrect guesses
void DisplayStatus(string answer, vector<char> incorrect)
{
    //Display the incorrect guesses
    cout << "               .----------------------------------------------.                \n";
    cout << "              |               Incorrect Guesses:               |               \n";
    cout << "              |              ";

    //Go through the letters
    for (int i = 0; i < incorrect.size(); i++)
    {
        cout << incorrect[i] << " ";
    }

    //Border
    cout << "\n               '----------------------------------------------'                \n";

    //Display Current Answer
    cout << "               .----------------------------------------------.                \n";
    cout << "              |                    Codeword:                   |               \n";
    cout << "              |              ";
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }    

    //Border
    cout << "\n               '----------------------------------------------'                \n\n";
}


//This is the victory message that will be shown at the end if they win
void Victory()
{
    cout << "                                   ______                                      \n";
    cout << "                                  /      \\                                    \n";
    cout << "                           ______/        \\______                             \n";
    cout << "                          /      \\        /      \\                           \n";
    cout << "                         /   **   '------'   **   \\                           \n";
    cout << "                         |       *        *       |                            \n";
    cout << "                          '----______()______----'                             \n";
    cout << "                                            .----------.                       \n";
    cout << "                                           ( THANK YOU! )                      \n";
    cout << "                                          //'----------'                       \n";
    cout << "                                    \\O/  /                                    \n";
    cout << "                                     |                                         \n";
    cout << "                                    / \\                                     \n\n";
    cout << "               .----------------------------------------------.                \n";
    cout << "              |         Hooray! You saved your friend!         |               \n";
    cout << "              |       You've earned the key to the city        |               \n";
    cout << "              |   AND a free burger meal from Rons Grub Hub    |               \n";
    cout << "               '----------------------------------------------'                \n\n";
}


//This is the loss message that will be shown at the end if they lose
void BigLoss()
{
    cout << "                                   ______                                      \n";
    cout << "                                  /      \\                                    \n";
    cout << "        !!                 ______/        \\______                  !!           \n";
    cout << "                          /      \\        /      \\                           \n";
    cout << "                         /   **   '------'   **   \\                           \n";
    cout << "        !!               |       *        *       |                !!           \n";
    cout << "                          '----______()______----'                         \n\n\n\n";
    cout << "               .----------------------------------------------.                \n";
    cout << "              |           Uh Oh! The UFO is leaving!           |               \n";
    cout << "              |                      ...                       |               \n";
    cout << "              |    They were more of an acquaintance anyways   |               \n";
    cout << "               '----------------------------------------------'                \n\n";
}

//This is the play again message
void PlayAgain()
{
    cout << "               .----------------------------------------------.                \n";
    cout << "              |        Would you like to play again?           |               \n";
    cout << "              |                      Y/N                       |               \n";
    cout << "               '----------------------------------------------'                \n\n";
}


//End game function, called to end the game
void EndGame(string userAnswer, string codeWord)
{
    //If the words match, they win
    if (userAnswer == codeWord)
    {
        //Show victory screen
        Victory();
    }
    //Otherwise, they lose
    else
    {
        //show losse screen
        BigLoss();
    }


}


/*
                                        MY MODEL

    cout << "                            ______                                      \n";
    cout << "                           /      \                                     \n";
    cout << "                    ______/        \______                              \n";
    cout << "                   /      \        /      \                             \n";
    cout << "                  /   **   '------'   **   \                            \n";
    cout << "                  |       *        *       |                            \n";
    cout << "                   '----______( )______----'   .----------.             \n";
    cout << "                          /        \          ( SEND HELP! )            \n";
    cout << "                         /          \        //'----------'             \n";
    cout << "                        /     \O/    \      /                           \n";
    cout << "                       /       |      \                                 \n";
    cout << "                      /       / \      \                                \n";
    cout << "                     /                  \                               \n";
    cout << "                    /                    \                              \n\n\n";


*/