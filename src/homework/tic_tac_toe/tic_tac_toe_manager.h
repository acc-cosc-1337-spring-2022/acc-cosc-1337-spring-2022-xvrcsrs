//h
#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"
#include<iostream>
#include<string>
#include<vector>
#include<memory>
#include<utility>

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager
{
public:
    TicTacToeManager(TicTacToeData data);
    /*void save_game(TicTacToe game);*/
    void save_game(std::unique_ptr<TicTacToe>& game);
    void get_winner_total(int& x, int& y, int& t);
    friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);
    ~TicTacToeManager();
private:
    /*std::vector<TicTacToe> games;*/
    std::vector<std::unique_ptr<TicTacToe>> games;
    TicTacToeData data;
    int x_wins{0};
    int o_wins{0};
    int ties{0};
    void update_winner_count(std::string winner);

};

#endif