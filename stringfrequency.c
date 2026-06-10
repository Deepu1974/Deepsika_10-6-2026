/*#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "aabcdehbfhbrhhh";
    int n = strlen(str);

    int visited[n];

    for(int i = 0; i < n; i++)
        visited[i] = 0;

    int maxFreq = 0;
    char maxChar;

    for(int i = 0; i < n; i++)
    {
        if(visited[i])
            continue;

        int count = 1;

        for(int j = i + 1; j < n; j++)
        {
            if(str[i] == str[j])
            {
                count++;
                visited[j] = 1;
            }
        }

        if(count > maxFreq)
        {
            maxFreq = count;
            maxChar = str[i];
        }
    }

    printf("Highest Frequency Character = %c", maxChar);

    return 0;
}
*/


#include <stdio.h>
#include <string.h>
int main()
{
	char str[]="abchhhh";
int	l=strlen(str);
	int v[l];
	for(int i=0;i<l;i++)
	{
		v[i]=0;
	}
	int maxf=0;
	char maxc;
	for(int i=0;i<l;i++)
	{
		if(v[i])
		continue;
		int c=1;
		for(int j=i+1;j<l;j++)
		{
			if(str[i]==str[j])
			{
				c++;
				v[j]=1;
			}
		}
		if(c>maxf)
		{
			maxf=c;
			maxc=str[i];
		}
		}
	
	printf("%c",maxc);
	return 0;}
