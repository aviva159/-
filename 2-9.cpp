#include<iostream>
#define INF 1000000000
using namespace std;
int main(){
	FILE *fin, *fout;
	fin = fopen("input.txt","rb");
	fout = fopen("output.txt", "wb");
	
	int x,n = 0;
	int s = 0;
	int min = INF,max = -INF;
	while(fscanf(fin, "%d", &x) == 1){
		s += x;
		if(x < min) min = x;
		if(x > max) max = x;
		n++;
	}
	fprintf(fout, "%d %d %.3f", min, max, (double)s/n);
	fclose(fin);
	fclose(fout);
	return 0;
}