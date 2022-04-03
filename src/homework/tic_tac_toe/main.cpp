#include "tic_tac_toe.h"
#include <limits>

using std::cout; using std::cin; using std::string;

int main() 
{
    TicTacToe game;
    string player;
    char choice;

    do
    {
        while(player != "X" && player != "O")
        {
            cout<<"Enter Capital X or O: ";
            cin>>player;
        }

        game.start_game(player);

        do
        {
            int position;
            cout<<"Enter position [1-9]: ";
            cin>>position;

            while(!cin.good() && (position < 1 || position > 9))
            {
                cin.clear();
                cin.ignore(5, '\n');

                cout<<"Enter position [1-9]: ";
                cin>>position;
            }

            game.mark_board(position);
            game.display_board();

        } while (game.game_over() == false);

        player = "";
        cout<<"Game over the winner is: "<<game.get_winner()<<"\n";

        cout<<"Continue enter y or Y: ";
        cin>> choice;
        
    }while(choice == 'Y' || choice == 'y');

    return 0;
}