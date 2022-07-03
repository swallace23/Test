class Game{
    public:
        Game();
        void run();
    private:
        void processEvents();
        void update();
        void render();
    private:
        sf::RenderWindow myWindow;
        sf::CircleShape mPlayer;
};