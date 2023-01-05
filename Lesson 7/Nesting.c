
// Nesting //-----------------------------------------------------------------------
// https://app.codility.com/demo/results/training6HHHHU-YYB
int solution(char *S) 
{
    int i,t,N;
    N = strlen(S);
    char *stack = (char *)calloc(N,sizeof(char));

    t=0;
    for(i=0,t=0; i<N;i++)
    {
        if(S[i]=='(') stack[t++] = S[i];
        else
        {
            if(t>0 && S[i]==')' && stack[t-1]=='(') t--;
            else return 0;
        }
    }
    if(t==0) return 1;
    else return 0;;
}

