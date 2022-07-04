#include <iostream>
#include <string>
#include <ctime>
using namespace std;
int main()
{
    cout << "============================" << endl;
    cout << "    (WORD SEARCH GAMES)     " << endl;
    cout << "============================" << endl << endl << endl;



    cout << "                       =====WELCOME=====                       " << endl;
    cout << "INSTRUCTION" << endl;
    cout << "THIS IS THE GUESSING GAME OF WORD THE PLAYER WILL HAVE 5 CHANCES TO GUESS THE WORD " << endl;
    cout << "IF THE PLAYER GUESS THE WORD IN THE GIVEN CHANCES HE WILL WON ELSE THE PLAYER WILL LOSE " << endl << endl;

    cout << "THERE ARE THREE LEVEL OF GAME" << endl << endl;
    cout << "========EASY========" << endl;
    cout << "========HARD========" << endl << endl;
    int level, num, exit;

    const int size = 5;
    string words[size] = { "school", "build" , "animal" , "rice" , "free" };
    string easy_words[size] = { "s_h__l", "b_ild" , "ani_al" , "r_ce" , "_ree" };
    string hard_words[size] = { "sc___l", "b_u_ld" , "an__al" , "r__e" , "f__e" };
    string my_guess;
    cout << "===SELECT 1 for Easy Level=== " << endl << endl;
    cout << "===SELECT 2 for Hard Level=== " << endl << endl;
    cin >> level;
back:
    srand(time(0));

    cout << "===THE MODE YOU HAVE SELECTED==== :";
    if (level == 1)
        cout << " *EASY*" << endl;
    else
        cout << " *HARD*" << endl;
    do {
        num = rand() % size;
        cout << " ===GUESS THE WORD=== : ";
        if (level == 1)
            cout << easy_words[num] << endl;
        else if (level == 2)
            cout << hard_words[num] << endl << endl;
        for (int i = 5; i > 0; i--)
        {
            cout << " Your Guess : ";
            cin >> my_guess;

            if (my_guess == words[num])
            {
                cout << "=====YOU WON ===== " << endl;
                cout << "====YOU GUESS THE WORD CORRECT====" << endl;
                cout << "You Guessed in : " << 5 - i + 1 << endl << endl;
                break;

            }

            else
            {
                cout << "===YOU GUESS THE INCORRECT ====" << endl;
                cout << " TURN LEFT BEHIND!!!!!! : " << i << endl << endl;
            }
        }
        cout << "==0 FOR GAME OVER==" << endl;
        cout << "==SELECT 1 FOR GUESSING ANOTHER WORD==" << endl;
        cout << "==SELECT 2 FOR SWITCHING MODE==" << endl;
        cin >> exit;
        if (exit == 2)
        {
            if (level == 1)
                level = 2;
            else
                level = 1;
            goto back;
        }

    } while (exit != 0);

    system("pause");
    return 0;
}


