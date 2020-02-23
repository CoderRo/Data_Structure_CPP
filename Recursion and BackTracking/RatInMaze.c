#include <iostream>

using namespace std;
bool isPathPoss(int** arr , int** solution , int x , int y , int n) {
    if( x == n - 1 && y == n - 1 ) {
        return true;
    }

    if ( x < 0 || y < 0 || x >= n || y >= n || arr[x][y] == 0 || solution[x][y] == 1 ) {
        return false;
    }

    solution[x][y] == 1;

    if (isPathPoss(arr,solution,x+1,y,n)) {
        return true;
    }

    if (isPathPoss(arr,solution,x-1,y,n)) {
        return true;
    }

    if (isPathPoss(arr,solution,x,y+1,n)) {
        return true;
    }

    if (isPathPoss(arr,solution,x,y-1,n)) {
        return true;
    }

    solution[x][y] == 0;
    return false;
}
int main()
{
    int **arr, **sol;
    int n;
    cin >> n;
    arr = new int*[n];
    for ( int i = 0 ; i < n ; i++ ) {
        arr[i] = new int[n];
        for ( int j = 0 ; j < n ; j++ ) {
            cin >> arr[i][j];
        }
    }
    sol = new int*[n];
    for ( int i = 0 ; i < n ; i++ ) {
        sol[i] = new int[n];
        for ( int j = 0 ; j < n ; j++ ) {
            sol[i][j] == 0;
        }
    }
    cout << isPathPoss(arr,sol,0,0,n);
}
