
#include <iostream>
using namespace std;
void check( int sudoku[][9], int row, int col, int val) {
    for ( int i = 0 ; i < 9 ; i++ ) {
        if( )
    }
}
void helperFunc( int sudoku[][9] , int row, int col) {
    if ( row == 9 ) {
        return true;
    }
    if ( col == 9 ) {
        helperFunc( sudoku , row + 1 , 0);
    }
    if( sudoku[row][col] != 0 ) {
        helperFunc( sudoku , row , col + 1);
    }
    for ( int i = 0 ; i < 9 ; i++ ) {
        if( check( sudoku, row, col, i)) {
            sudoku[row][col] = i;
            if(helperFunc(sudoku,row,col+1)) {
                return true;
            }
        }
        sudoku[row][col] = 0;
    }
    return false;
}
void CompleteSudok( int sudoku[][9]) {
    helperFunc(sudoku, 0, 0);
}

int main()
{
   int **sudoku;
   int n = 9;
   sudoku = new int*[n];
   for ( int i = 0 ; i < n ; i++ ) {
       suduko[i] =  new int[n];
       for ( int j = 0 ; j < n ; j++ ) {
           cin >> suduko[i][j];
       }
   }
   CompleteSudoku(sudoku[][n]);
}
