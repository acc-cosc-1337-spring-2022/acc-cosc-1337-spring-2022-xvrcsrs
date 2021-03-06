#include "tic_tac_toe.h"
#include <limits>
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <memory>

using std::cout; using std::cin; using std::string;

int main() 
{
    TicTacToeManager manager;
    std::unique_ptr<TicTacToe> tic_tac_toe;
    std::string player;
    char choice;
    int game_type;

    do
    {
        cout<<"Enter 3 or 4: ";
		cin>>game_type;

		while(!cin.good() || (game_type < 3 || game_type > 4))
		{
			cin.clear();
			cin.ignore(5, '\n');

			cout<<"Enter 3 or 4: ";
			cin>>game_type;
		}

		if(game_type == 3)
		{
			tic_tac_toe = std::make_unique<TicTacToe3>();
		}
		else
		{
			tic_tac_toe = std::make_unique<TicTacToe4>();
		}

        while(player != "X" && player != "O")
        {
            cout<<"Enter Capital X or O: ";
            cin>>player;
        }

        tic_tac_toe->start_game(player);

        do
        {
            /*int position;
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
            game.display_board();*/

            cin>>*tic_tac_toe;
            cout<<*tic_tac_toe;

        } while (tic_tac_toe->game_over() == false);

        player = "";
        cout<<"Game over the winner is: "<<tic_tac_toe->get_winner()<<"\n";

        manager.save_game(tic_tac_toe);

        int x_wins, o_wins, ties;
        manager.get_winner_total(x_wins, o_wins, ties);

        cout<<"X wins: "<<x_wins<<"\n";
        cout<<"O wins: "<<o_wins<<"\n";
        cout<<"Ties: "<<ties<<"\n\n";

        cout<<"Continue enter y or Y: ";
        cin>> choice;
        
    }while(choice == 'Y' || choice == 'y');

    cout<<manager;

    return 0;
}