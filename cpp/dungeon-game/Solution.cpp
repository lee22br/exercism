
class Solution {
    int tabX, tabY;
    int right, down;
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        tabX = dungeon.size();
        tabY = dungeon[0].size();
        int lastPosX = tabX - 1;
        int lastPosY = tabY - 1;

        //store the matrix with min health
        vector<vector<int>> pathMin(tabX,vector<int>(tabY,0));

        for (int posX = lastPosX; posX >= 0; posX--){
            for (int posY = lastPosY; posY >= 0; posY--){
                if (posX == lastPosY && posY == lastPosY) {
                    if (dungeon[posX][posY] < 0){
                        pathMin[posX][posY] =  dungeon[posX][posY];
                    } else {
                        pathMin[posX][posY] = 0;
                    }
                } else if (posY == lastPosY) {
                    if (dungeon[posX][posY] + pathMin[posX + 1][posY] < 0){
                        pathMin[posX][posY] = dungeon[posX][posY] + pathMin[posX + 1][posY] ;
                    } else {
                        pathMin[posX][posY] = 0;
                    }
                } else if (posX == lastPosX) {
                    if (dungeon[posX][posY] + pathMin[posX][posY + 1] < 0){
                        pathMin[posX][posY] = dungeon[posX][posY] + pathMin[posX][posY + 1];
                    } else {
                        pathMin[posX][posY] = 0;
                    }
                } else {
                    if (dungeon[posX][posY] + pathMin[posX][posY + 1]  < 0){
                        right = dungeon[posX][posY] + pathMin[posX][posY + 1] ;
                    } else {
                        right = 0;
                    }
                    if (dungeon[posX][posY] + pathMin[posX + 1][posY]  < 0){
                        down = dungeon[posX][posY] + pathMin[posX + 1 ][posY] ;
                    } else {
                        down = 0;
                    }
                    pathMin[posX][posY] = max(right, down);
                }
            }
        }
        return -pathMin[0][0] + 1;
    }
};