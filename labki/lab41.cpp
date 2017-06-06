#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
const int MAXN = 1000;

struct pair
{
	int len, pos;
	pair()
	{
		const long INF = 100000000;
		len = INF;
		pos = -1;
	}
};

void NewWord(char *word, char *output, int &outputLen, pair &p, int &count)
{
	if (*word == '\0')    return;
	p.pos = outputLen;
	int len = 0;
	while (*word != '\0')
	{
		output[outputLen] = *word;
		++outputLen;
		++word;
		++len;
	}
	p.len = len;
	++count;
}

void openFile(char *file)
{
	FILE *input;
	input = fopen(file, "r");
	if (!input)
	{
		printf("Error. File is not found.\n");
		getch();
		exit(0);
	}
	else
	{
		fclose(input);
		freopen(file, "r", stdin);
	}
}

void Output(char *output, pair *info, int &count)
{
	int i = 0, j;
	for (i; i < count; ++i)
	{
		j = info->pos;
		for (j; j < (info->pos) + (info->len); ++j)    printf("%c", output[j]);
		++info;
		printf("\n");
	}
	getch();
}

void swap(pair &first, pair &second)
{
	pair temp;
	temp = first;
	first = second;
	second = temp;
}

void Sort(pair *first, pair *last)
{
	pair temp[MAXN], *it;
	it = first;
	int count = 0;
	while (first != last)
	{
		temp[count].pos = first->pos;
		temp[count].len = first->len;
		++count;
		++first;
	}
	int i, j;
	for (i = 0; i < count; ++i)
		for (long j = i + 1; j < count; ++j)
			if (temp[i].len < temp[j].len)
				swap(temp[i], temp[j]);
	i = 0;
	while (it != last)
	{
		it->pos = temp[i].pos;
		it->len = temp[i].len;
		++i;
		++it;
	}
}

int main()
{

	openFile("input.txt");
	char s, word[MAXN], output[MAXN * 10];
	int len = 0, it = 0, outputLen = 0, count = 0;
	pair info[MAXN];
	do
	{
		scanf("%c", &s);
		if (!isalpha(s))
		{
			if (len > 0)
			{
				NewWord(word, output, outputLen, info[count], count);
				memset(word, 0, sizeof(char));
				len = 0;
			}
		}
		else
		{
			word[len] = s;
			++len;
			word[len] = '\0';
		}
		++it;
	} while (!feof(stdin));
	if (len != 0)    word[len - 1] = '\0';
	NewWord(word, output, outputLen, info[count], count);
	Sort(info, info + count);
	Output(output, info, count);
    return 0;
}
