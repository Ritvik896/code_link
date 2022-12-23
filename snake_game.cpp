#include <iostream>
using namespace std;
bool gameOver;
const int width = 20;
const int height = 20;
int x, y, fruitx, fruity, score; // x,y:variables for head position
enum eDirection
{
    STOP = 0,
    LEFT,
    RIGHT,
    UP,
    DOWN
}; // to track the diraection
eDirection dir;
void Setup()
{
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    fruitx = rand() % width; // rand:random ,it will create a random number
    fruity = rand() % height;
    score = 0;
}
void Draw()
{
    system("cls"); // will clear the screen
    for (int i = 0; i <= width; i++)
        cout << "#"; // for the top wall
    cout << endl;
    for (int i = 0; i < height; i++)
    { // print the walls
        for (int j = 0; j < width; j++)
        {
            if (j == 0)
                cout << "#";
            else
                cout << " ";
            if (j == width - 1)
                cout << "#";
        }
        cout << endl;
    }
    for (int i = 0; i <= width; i++)
        cout << "#"; // for the bottom wall
}
void Input()
{
}
void Logic()
{
}
int main()
{
    Setup();
    while (!gameOver)
    {
        Draw();
        Input();
        Logic();
        // sleep(10) slows the game by 10ms
    }
    return 0;
}