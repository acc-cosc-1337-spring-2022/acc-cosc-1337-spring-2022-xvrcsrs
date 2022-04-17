//h
#include <string>
#include <vector>
#include <iostream>
#include <math.h>

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
public:
    TicTacToe(unsigned int size) : pegs{size*size, " "}{}
    bool game_over();
    void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player()const{return player;}
    /*void display_board()const;*/
    std::string get_winner()const {return winner; };
    friend std::ostream& operator<<(std::ostream& out, const TicTacToe& game);
    friend std::istream& operator>>(std::istream& in, TicTacToe& game);

protected:
    virtual bool check_column_win();
    virtual bool check_row_win();
    virtual bool check_diagonal_win();
    std::vector<std::string> pegs;

private:
    void set_next_player();
    bool check_board_full();
    void clear_board();
    void set_winner();
    /*bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();*/
    std::string winner;
    std::string player;
    /*std::vector<std::string> pegs{9, " "};*/
};
#endif