#ifndef _GAME_EXCEPTION_H
#define _GAME_EXCEPTION_H

#include <stdexcept>

class GameException : public std::exception {
    
    public:
    
    GameException();
    
    virtual const char* what() const throw() override;
};

#endif