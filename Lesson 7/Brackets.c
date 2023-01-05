// Brackets //-----------------------------------------------------------------------
// https://app.codility.com/demo/results/trainingPGYF42-CMU
int solution(char *S) 
{
    int i;
    int N = strlen(S);

    for(i=0;i<N/2;i++)
    {
        //printf("%d %c %c\n",i,S[i],S[N-1-i]);
        if(S[i]=='(' || S[i]==')')
        {
            if(S[i]=='(')
            {
                if(S[N-1-i]-S[i]!=1) return 0;
            }else {
            if(S[i]-S[i-1]!=1 && S[N-i]-S[N-1-i]!=1) return 0;
            }
        }
        else {
        if(S[N-1-i]-S[i]!=2) return 0;
        }
    }
    return 1;
}

//  https://app.codility.com/demo/results/trainingF96JQY-P43                
int solution(char *S) 
{
    int i,j,N;
    N=strlen(S);
    char *top;
    top = (char *)malloc(sizeof(char)*N);

    j=0;
    for(i=0;i<N;i++)
    {
        if(S[i]=='(' || S[i]=='[' || S[i]=='{')
        {
            top[j]=S[i];
            j++;
        }
		else 
			if (j>0 && ((S[i]==')' && top[j-1]=='(')
					  ||(S[i]=='}' && top[j-1]=='{')
					  ||(S[i]==']' && top[j-1]=='[')))
				{
					j--;
				}
		else return 0;
            
	}
	if (j==0) 
        return 1;
    else
        return 0;
}
