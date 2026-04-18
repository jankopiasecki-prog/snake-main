#include <iostream>
#include <vector>
using namespace std;

const int TILE_SIZE = 5;

const char forest[TILE_SIZE][TILE_SIZE] = {
    { ' ', ' ', '^', ' ', ' ' },
    { ' ', '^', '^', '^', ' ' },
    { '^', '^', '^', '^', '^' },
    { ' ', ' ', '|', ' ', ' ' },
    { ' ', 'L', 'A', 'S', ' ' }
};

void DisplayBar(int map_width)
{
    for (int i = 0; i < map_width + 2; ++i)
    {
        cout << '-';
    }
    cout << endl;
}

void DisplayMap(
    const vector<vector<char>> &map,
    int map_width,
    int map_height)
{
    DisplayBar(map_width);
    
    for (int i = 0; i < map_height;i++)
    {
        cout << '|';
        for (int j = 0; j < map_width;j++)
        {
            cout << map[i][j];
        }
        cout << '|';
        cout << endl;
    }
    DisplayBar(map_width);
}

int main() {
    int map_width = 30;
    int map_height = 20;

    vector<vector<char>> map(map_height, vector<char>(map_width, ' '));

    map[map_height / 2][map_width / 2] = '*';
    
    for (int y = 0; y < TILE_SIZE; ++y)
    {
        for (int x = 0; x < TILE_SIZE; ++x)
        {
            map[y][x] = forest[y][x];
        }
    }

    DisplayMap(map, map_width, map_height);

    return 0;
}
