int solution(int X, int A[], int N) {
    int i;
    for(i=0;i<N;i++)
    {
        if(A[i]==X) return i;
    }
    return -1; 
}
