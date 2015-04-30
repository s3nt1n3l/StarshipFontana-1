class Player {
private:
	int mx, my;

public:
	Player() = delete;
	Player(int x, int y);
	virtual ~Player();
	Player(const Player& p);

 void move_left(int dx);
};
