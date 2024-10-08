#include <vector>
#include "../user/user.h"

#ifndef BOARD_H
#define BOARD_H


class board {
public:
    static void run_game(const user& user1,const user& user2);
    static std::optional<user> check(const user& user1, const user& user2);
    static void print_board();
    static void user_input(user user);
    static void ai_input();
    static bool is_valid(const std::string& res);

private:
    static std::vector<char> Body;
    static bool GameOn;
};


#endif //BOARD_H
