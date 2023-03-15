#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <string>

const int ROWS = 20;
const int COLS = 20;

void initBoard(bool board[][COLS])
{
    srand(time(NULL));
    for (int row = 0; row < ROWS; ++row) {
        for (int col = 0; col < COLS; ++col) {
            board[row][col] = rand() % 2 == 0 ? true : false;
        }
    }
}

void printBoard(bool board[][COLS])
{
    for (int row = 0; row < ROWS; ++row) {
        for (int col = 0; col < COLS; ++col) {
            std::cout << (board[row][col] ? "X " : "- ");
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

int getLiveNeighbors(bool board[][COLS], int row, int col)
{
    int count = 0;
    for (int i = -1; i <= 1; ++i) {
        for (int j = -1; j <= 1; ++j) {
            int neighbor_row = row + i;
            int neighbor_col = col + j;
            if ((i != 0 || j != 0) &&
                neighbor_row >= 0 && neighbor_row < ROWS &&
                neighbor_col >= 0 && neighbor_col < COLS &&
                board[neighbor_row][neighbor_col]) {
                count++;
            }
        }
    }
    return count;
}

void updateBoard(bool board[][COLS])
{
    bool newBoard[ROWS][COLS];
    for (int row = 0; row < ROWS; ++row) {
        for (int col = 0; col < COLS; ++col) {
            int liveNeighbors = getLiveNeighbors(board, row, col);
            if (board[row][col]) {
                if (liveNeighbors < 2 || liveNeighbors > 3) {
                    newBoard[row][col] = false;
                }
                else {
                    newBoard[row][col] = true;
                }
            }
            else {
                if (liveNeighbors == 3) {
                    newBoard[row][col] = true;
                }
                else {
                    newBoard[row][col] = false;
                }
            }
        }
    }
    for (int row = 0; row < ROWS; ++row) {
        for (int col = 0; col < COLS; ++col) {
            board[row][col] = newBoard[row][col];
        }
    }
}

int main()
{
    bool board[ROWS][COLS];
    initBoard(board);
    printBoard(board);
    for (;;) {
        system("cls");
        std::cout << "Press \'ctrl\' + \'c\' to stop" << std::endl;
        updateBoard(board);
        printBoard(board);
        Sleep(1000);
    }
    return 0;
}
