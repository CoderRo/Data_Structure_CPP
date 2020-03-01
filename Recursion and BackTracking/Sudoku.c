#include <iostream>
using namespace std;
void printSudoku( int** sudoku ) {
    for ( int i = 0 ; i < 9 ; i++) {
        for ( int j = 0 ; j < 9 ; j++) {
            cout << sudoku[i][j] << " ";
        }
        cout<<endl;
        cout<<endl;
    }
}
bool check( int** sudoku, int row, int col, int val) {
    for ( int i = 0 ; i < 9 ; i++ ) {
        if ( sudoku[row][i] == val ) {
            return false;
        }
        if ( sudoku[i][col] == val ) {
            return false;
        }
    }
    int rowIndex = row - row % 3;
    int colIndex = col - col % 3;
    for ( int c = rowIndex ; c < rowIndex + 3 ; c++ ) {
        for ( int d = colIndex ; d < colIndex + 3 ; d++ ) {
            if ( sudoku[c][d] == val ) {
                return false;
            }
        } 
    }
    return true;
}
bool helperFunc( int **sudoku , int row, int col) {
    if ( row == 9 ) {
        return true;
    }
    if ( col == 9 ) {
        return helperFunc( sudoku , row + 1 , 0);
    }
    if( sudoku[row][col] != 0 ) {
        return helperFunc( sudoku , row , col + 1);
    }
    for ( int i = 1 ; i <= 9 ; i++ ) {
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
void CompleteSudoku( int **sudoku) {
    cout << helperFunc(sudoku, 0, 0) <<endl;
}

int main()
{
   int **sudoku;
   int n = 9;
   sudoku = new int*[n];
   for ( int i = 0 ; i < n ; i++ ) {
       sudoku[i] =  new int[n];
       for ( int j = 0 ; j < n ; j++ ) {
           cin >> sudoku[i][j];
       }
   }
   CompleteSudoku(sudoku);
}