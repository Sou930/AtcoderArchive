/*abc001_c*/
#include <bits/stdc++.h>
using namespace std;
char* pDir[16] = {"N","NNE","NE","ENE","E","ESE","SE","SSE","S","SSW","SW","WSW","W","WNW","NW","NNW"};
int main()
{
	long long Deg, Dis;
	scanf("%lld%lld", &Deg, &Dis);
	Dis = (Dis * 100 / 60 + 5) / 10;
	int W;
	if(Dis <= 2)W = 0;else
	if(Dis <= 15)W = 1;else
	if(Dis <= 33)W = 2;else
	if(Dis <= 54)W = 3;else
	if(Dis <= 79)W = 4;else
	if(Dis <= 107)W = 5;else
	if(Dis <= 138)W = 6;else
	if(Dis <= 171)W = 7;else
	if(Dis <= 207)W = 8;else
	if(Dis <= 244)W = 9;else
	if(Dis <= 284)W = 10;else
	if(Dis <= 326)W = 11;else
	W = 12;
	if(W)cout << pDir[((Deg * 10 + 1125)/2250) % 16] << " " << W;
	else cout << "C 0";
	putchar('\n');
}
