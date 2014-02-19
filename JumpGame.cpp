#include <iostream>
using namespace std;

int jump(int A[], int n) {
        
    if(A == NULL)
        return 0;
    if(n == 1)
        return 0;
    int idx = 0;
    int step = 0;
	int max = 0;
	while(max < n -1)
	{
		max = idx + A[idx];
		step++;
		if(max >= n-1)
			return step;
		int temp = 0;
		for(int i = idx + 1; i <= max; i++)
		{
			if(A[i] + i > temp)
			{
				temp = A[i] + i;
				idx = i;
			}
		}
	}
	return step;
}

