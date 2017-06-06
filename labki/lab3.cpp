#include <iostream>
#include <stdlib.h>
#include <vector>
#define max(a, b) ((a > b) ? a : b)
using namespace std;
const double EPS = 1E-9;

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	int **a = new int *[n];
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
		{
			if (j == 0)   a[i] = new int[m];
			scanf("%d", &a[i][j]);
		}

	int rang = max(n, m);
	vector <char> line_used(n);
	for (int i = 0; i < m; ++i) {
		int j;
		for (j = 0; j < n; ++j)
			if (!line_used[j] && abs(a[j][i]) > EPS)
				break;
		if (j == n)    --rang;
		else {
			line_used[j] = true;
			for (int p = i + 1; p < m; ++p)
				a[j][p] /= a[j][i];
			for (int k = 0; k < n; ++k)
				if (k != j && abs(a[k][i]) > EPS)
					for (int p = i + 1; p < m; ++p)
						a[k][p] -= a[j][p] * a[k][i];
		}
	}
	printf("%d\n", rang);
	//system("pause");
    return 0;
}
