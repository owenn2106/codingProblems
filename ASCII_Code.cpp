#include <stdio.h>

int main(){
	
	int boardsize,numberofpieces;
	int bidakawal[205][205];
	int Y;
	int X;
	int Q;
	int A,B;
	int counterKnight = 0;
	int counterBishop = 0;
	int counterRook = 0;
	
	scanf("%d %d",&boardsize,&numberofpieces);
	
	for(int k = 1; k <= numberofpieces; k++){
		scanf("%d %d",&X,&Y);
		for(int i = 1; i <= boardsize; i++){
			for(int j = 1; j <= boardsize; j++){
				if(i == X && j == Y){
					bidakawal[i][j] = 1;
				}
			}
		}
	}
	
	scanf("%d",&Q);
	
	for(int k = 1; k <= Q; k++){
		counterKnight = 0;
		counterRook = 0;
		counterBishop = 0;
		scanf("%d %d",&A,&B);
		if(bidakawal[A+1][B+2] == 1 && A+1 <= boardsize && B+2 <= boardsize) counterKnight++;
		if(bidakawal[A+1][B-2] == 1 && A+1 <= boardsize && B-2 >= 1) counterKnight++;
		if(bidakawal[A-1][B+2] == 1 && B+2 <= boardsize && A-1 >= 1) counterKnight++;
		if(bidakawal[A-1][B-2] == 1 && A-1 >= 1 && B-2 >= 1) counterKnight++;
		if(bidakawal[A+2][B+1] == 1 && A+2 <= boardsize && B+1 <= boardsize) counterKnight++;
		if(bidakawal[A+2][B-1] == 1 && A+2 <= boardsize && B-1 >= 1) counterKnight++;
		if(bidakawal[A-2][B+1] == 1 && B+1 <= boardsize && A-2 >= 1) counterKnight++;
		if(bidakawal[A-2][B-1] == 1 && A-2 >= 1 && B-1 >= 1) counterKnight++;
		int Rookba = B;
		int Rookbb = B;
		int Rookaa = A;
		int Rookab = A;
		while(Rookba <= boardsize){
			if(bidakawal[A][Rookba] == 1){
				counterRook++;
				break;
			}else{
				Rookba++;
			}
		}
		while(Rookbb >= 1){
			if(bidakawal[A][Rookbb] == 1){
				counterRook++;
				break;
			}else{
				Rookbb--;
			}
		}
		while(Rookaa <= boardsize){
			if(bidakawal[Rookaa][B] == 1){
				counterRook++;
				break;
			}else{
				Rookaa++;
			}
		}
		while(Rookab >= 1){
			if(bidakawal[Rookab][B] == 1){
				counterRook++;
				break;
			}else{
				Rookab--;
			}
		}
		int bishopA1 = A;
		int bishopB1 = B;
		int bishopA2 = A;
		int bishopB2 = B;
		int bishopA3 = A;
		int bishopB3 = B;
		int bishopA4 = A;
		int bishopB4 = B;
		while(bishopA1 <= boardsize && bishopB1 <= boardsize){
			if(bidakawal[bishopA1][bishopB1] == 1){
				counterBishop++;
				break;
			}else{
				bishopA1++;
				bishopB1++;
			}
		}
		while(bishopA3 <= boardsize && bishopB3 >= 1){
			if(bidakawal[bishopA3][bishopB3] == 1){
				counterBishop++;
				break;
			}else{
				bishopA3++;
				bishopB3--;
			}
		}
		while(bishopA4 >= 1 && bishopB4 <= boardsize){
			if(bidakawal[bishopA4][bishopB4] == 1){
				counterBishop++;
				break;
			}else{
				bishopA4--;
				bishopB4++;
			}
		}
		while(bishopA2 >= 1 && bishopB2 >= 1){
			if(bidakawal[bishopA2][bishopB2] == 1){
				counterBishop++;
				break;
			}else{
				bishopA2--;
				bishopB2--;
			}
		}
		if(counterKnight >= counterBishop && counterKnight >= counterRook){
			printf("1\n");
		}else if(counterBishop > counterKnight && counterBishop >= counterRook){
			printf("2\n");
		}else if(counterRook > counterKnight && counterRook > counterBishop){
			printf("3\n");
		}
	}
	return 0;
}
