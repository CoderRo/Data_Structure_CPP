

#include <iostream>

using namespace std;
int CountOfNumber(int* input , int num, int* fact ) {
    if ( num == 0 || num == 1 ) {
        return 0;
    }
    int max = input[0];
    int sum = 0;
    for ( int i = 0 ; i < num ; i++ ) {
        if(input[i] > max) {
            sum += fact[num-1];
        }
    }
    return sum + CountOfNumber(input+1,num-1,fact);
}
int main()
{
    int num;
    cin >> num;
    int *input = new int[num];
    int *fact = new int[num + 1];
    fact[0] = 1;
    for ( int i = 0 ; i < num ; i++ ) {
        cin >> input[i];
        fact[i+1] = (i+1)*fact[i];
    }
    cout<<CountOfNumber(input, num, fact);
}
