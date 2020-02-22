#include <stdio.h>

#define N 4
#define R 3

int selected[R];

//중복 순열
void sol1(int depth)
{
	int i;
	if (R == depth) {
		for (i = 0; i<R; i++) {
			printf("%d ", selected[i]);
		}
		printf("\n");
		return;
	}
	for (i = 1; i <= N; i++) {
		selected[depth] = i;
		sol1(depth + 1);
	}
}

//중복 조합
void sol2(int depth, int index)
{
	int i;
	if (R == depth) {
		for (i = 0; i<R; i++) {
			printf("%d ", selected[i]);
		}
		printf("\n");
		return;
	}
	for (i = index; i <= N; i++) {
		selected[depth] = i;
		sol2(depth + 1, i);
	}
}

//조합
void sol3(int depth,int index)
{
	int i;
	if (R == depth) {
		for (i = 0; i<R; i++) {
			printf("%d ", selected[i]);
		}
		printf("\n");
		return;
	}
	for (i = index; i <= N; i++) {
		selected[depth] = i;
		sol3(depth + 1, i + 1);
	}
}

int main()
{
	sol1(0);
	sol2(0, 1);
	sol3(0, 1);
	return 0;
}