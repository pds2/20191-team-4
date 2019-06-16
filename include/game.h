#ifndef _GAME_H
#define _GAME_H

#include <iostream>
#include "game_logic.h"

class Game {
    private:
        int points;//valor que está valendo p/ mão atual.
        int score_t1, score_t2;//stores the scoreboad
        int final_scoreboard[2];//stores the "best of 3 series" scoreboard (quedas)

    public:
        Game(); //Constructor

        //getters and setters
        int getPoints();
        void setPoints(int pontos);
        int getScore_t1();
        void setScore_t1(int pontos);
        int getScore_t2();
        void setScore_t2(int pontos);
        int getFinal_scoreboard1();
        void setFinal_scoreboard1();
        int getFinal_scoreboard2();
        void setFinal_scoreboard2();
        void printHandWinner(GameLogic game_logic);
        void printQuedaWinner();

        //other methods
        void reset_scoreboard();
        bool check_end();
        void print_scoreboard();
        void print_winner();
        void increasePoint();
};

#endif