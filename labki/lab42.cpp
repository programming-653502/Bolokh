#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <set>
#include <conio.h>
using namespace std;

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

long long Hash(string &s, long ch)
{
	unsigned long long hash = 0, sn = 51, mod = (1e+9) + 7, temp, sns = 1;
	long first = (ch > 0 ? 0 : s.length() - 1);
	for (int i = first; i < first + s.length() * ch; i += ch)
	{
		temp = (s[i] * sns) % mod;
		hash = (hash + temp) % mod;
		sns = (sns * sn) % mod;
	}
	return hash;
}

void output(string &s)
{
	cout << s << " ";
	for (long i = s.length() - 1; i >= 0; --i)
		cout << s[i];
	cout << "\n";
}

void check(string s, vector < string > &v)
{
	string temp = "";
	s += "!";
	for (long i = 0; i < s.length(); ++i)
	{
		if (isalpha(s[i]))     temp += tolower(s[i]);
		if ((!isalpha(s[i])) && (!temp.empty()))
		{
			v.push_back(temp);
			temp = "";
		}
	}
}

int main()
{
	char *fileName = "input.txt";
	vector < pair < unsigned long long, string > > hash;
	vector < string > words;
	set < unsigned long long > rhash;
	openFile(fileName);
	do
	{
		string s;
		cin >> s;
		check(s, words);
	} while (!feof(stdin));
	for (long i = 0; i < words.size(); ++i)
	{
		unsigned long long h;
		string s = words[i];
		h = Hash(s, 1);
		if (h == 0)   continue;
		hash.push_back(make_pair(Hash(s, 1), s));
		rhash.insert(Hash(s, -1));
	}
	for (long i = 0; i < hash.size(); ++i)
	{
		unsigned long long h = hash[i].first;
		if (rhash.find(h) != rhash.end())
		{
			output(hash[i].second);
			rhash.erase(h);
			rhash.erase(Hash(hash[i].second, -1));
		}
	}
	getch();
    return 0;
}
