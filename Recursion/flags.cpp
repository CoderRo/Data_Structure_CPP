void helper_func(int n, char prevprev, char prev, long long &ans ) {
    if ( n == 1 && prevprev == 'S' ) {
        ans=2;
        return ;
    }
    if (n == 1) {
        ans++;
        return;
    }
    if (prevprev == 'S') {
        helper_func(n-1,'B','W',ans);
        helper_func(n-1,'B','R',ans);
    }
    if ( prevprev == 'W' && prev == 'B' ) {
        helper_func(n-1,'B','R',ans);
    }
    if ( prevprev == 'R' && prev == 'B' ) {
        helper_func(n-1,'B','W',ans);
    }
    if( prev == 'R' ) {
        helper_func(n-1,'R','W',ans);
        helper_func(n-1,'R','B',ans);
    }
    if( prev == 'W' ) {
        helper_func(n-1,'W','R',ans);
        helper_func(n-1,'W','B',ans);
    }
}


long find_Ways(int N) {
    long long ans;
    helper_func(N,'S','B',ans);
    return ans;
}void helper_func(int n, char prevprev, char prev, long long &ans ) {
    if ( n == 1 && prevprev == 'S' ) {
        ans=2;
        return ;
    }
    if (n == 1) {
        ans++;
        return;
    }
    if (prevprev == 'S') {
        helper_func(n-1,'B','W',ans);
        helper_func(n-1,'B','R',ans);
    }
    if ( prevprev == 'W' && prev == 'B' ) {
        helper_func(n-1,'B','R',ans);
    }
    if ( prevprev == 'R' && prev == 'B' ) {
        helper_func(n-1,'B','W',ans);
    }
    if( prev == 'R' ) {
        helper_func(n-1,'R','W',ans);
        helper_func(n-1,'R','B',ans);
    }
    if( prev == 'W' ) {
        helper_func(n-1,'W','R',ans);
        helper_func(n-1,'W','B',ans);
    }
}


long find_Ways(int N) {
    long long ans;
    helper_func(N,'S','B',ans);
    return ans;
}
int main() {
    int num;
    cin>>num;
    cout<<find_Ways(num);

}
