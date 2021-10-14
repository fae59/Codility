#include <stdio.h>
#include <string.h>

char * solution(char *S)
{

	char szKind[3][3][10] = {{".mp3", ".aac", ".flac"}, 
	{".jpg", ".bmp", ".gid"},
	{".mp4", ".avi", ".mkv"},};
	
	int nTipo[4] = {0};
	while (1)
	{
		char tam_nome[30] = {0,};
		int nSize;
		//int nRet = sscanf(S, "%s %db", tam_nome, /*sizeof(tam_nome), */&nSize);
		
		int i = 0;
		for(i = 0 ; i < strlen(S) ; i++)
		{
			if(S[i] == 'b')
				break;
		}
		int nn = 0;
		int np = 0;
		int nCheck = 0;
		char sTem[100] = {0,};
		for(int j = 0 ; j < i ; j++)
		{
			if(S[j] == ' ')
			{
				nCheck = 1;
				continue;
			}
			if(nCheck == 0)
			{
				tam_nome[nn] = S[j];
				nn++;
			}
			else
			{
				sTem[np] = S[j];
				np++;
			}


		}

		nSize = 0;
		for(int jj = 0 ; jj < sTem.size() ; jj++)
		{
			nSize = nSize * 10 + (sTem[jj] - '0')
		}

		//nSize = atoi(sTem);
		//S = strchr(S, '\n'); 
		S += (i+2);
		
		for(i = strlen(tam_nome) - 1 ; i > -1 ; i--)
		{
			if(tam_nome[i] == '.')
				break;
		}
		
		char *pExt;// = strrchr(tam_nome, '.');
		pExt = tam_nome + i;
		bool b = true;
		int i;
		for ( i = 0; i < 3; i ++)
		{
			for (int j = 0; j < 3; j ++)
			{
				int bCmp = 1;
				for(int ii = 0 ; ii < pExt.size() ; ii ++)
				{
					if(pExt[ii] != szKind[i][j][ii])
					{
						bCmp = 0;
						break;
					}
				}
			
				if (bCmp == 1)
				{
					b = false;
					nTipo[i] += nSize;
				}
			}
		}
		if (b)
			nTipo[3] += nSize;

		if (strlen(S) < 2)
			break;
	}

	char pret[1000] = {0,};
	sprintf(pret, "music %db\nimages %db\nmovies %db\nother %db", nTipo[0], nTipo[1], nTipo[2], nTipo[3]);

	return pret;
}
