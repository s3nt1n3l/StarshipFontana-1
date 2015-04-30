#include "Player.h"

Player::Player(int x, int y) : mx(x), my(y) {
}
Player::Player(const Player &p): mx(p.mx), my(p.my) {
}
Player::~Player() {
}
void Player::move_left(int dx) {
 mx -= dx;
}

