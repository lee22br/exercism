#include <iostream>
#include <vector>

using std::vector;
using std::max;

class Solution {

public:
    static int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int tabX, tabY, lastPosX, lastPosY;
        int right, down;
        tabX = dungeon.size();
        tabY = dungeon[0].size();
        lastPosX = tabX - 1;
        lastPosY = tabY - 1;

        // store the matrix with min health
        vector<vector<int>> pathMin(tabX, vector<int>(tabY, 0));

        for (int posX = lastPosX; posX >= 0; posX--) {
            for (int posY = lastPosY; posY >= 0; posY--) {
                // last position of table
                if (posX == lastPosY && posY == lastPosY) {
                    if (dungeon[posX][posY] < 0) {
                        pathMin[posX][posY] = dungeon[posX][posY];
                    } else {
                        pathMin[posX][posY] = 0;
                    }
                } else if (posY == lastPosY) {
                    if (dungeon[posX][posY] + pathMin[posX + 1][posY] < 0) {
                        pathMin[posX][posY] =
                            dungeon[posX][posY] + pathMin[posX + 1][posY];
                    } else {
                        pathMin[posX][posY] = 0;
                    }
                } else if (posX == lastPosX) {
                    if (dungeon[posX][posY] + pathMin[posX][posY + 1] < 0) {
                        pathMin[posX][posY] =
                            dungeon[posX][posY] + pathMin[posX][posY + 1];
                    } else {
                        pathMin[posX][posY] = 0;
                    }
                } else {
                    if (dungeon[posX][posY] + pathMin[posX][posY + 1] < 0) {
                        right = dungeon[posX][posY] + pathMin[posX][posY + 1];
                    } else {
                        right = 0;
                    }
                    if (dungeon[posX][posY] + pathMin[posX + 1][posY] < 0) {
                        down = dungeon[posX][posY] + pathMin[posX + 1][posY];
                    } else {
                        down = 0;
                    }
                    pathMin[posX][posY] = max(right, down);
                }
            }
        }
        return pathMin[0][0] * (-1) + 1;
    }
};

int main (){
    vector<vector<int>> input = {{0}}; //expected 1
    vector<vector<int>> input2 = {
        {-2,-3,3},
        {-5,-10,1},
        {10,30,-5}
    }; //expected 7
    vector<vector<int>> input3 = {
        {2,-3,3},
        {5,-10,1},
        {10,30,-5}}; //expected 1

    int result = Solution::calculateMinimumHP(input2);

    printf("Minimun Life is: %d", result);


}