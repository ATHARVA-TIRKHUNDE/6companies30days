
/*
N : size of circle
M : Number of items
K : starting position
*/

int Solution::solve(int M, int N, int K) {
    return ((M%N) + ((K%N) - 1)) % N;
}
