#include <stdio.h>

void draw_board(char* board){
	puts("   |   |");
	printf(" %c | %c | %c\n",board[6],board[7],board[8]);
	puts("   |   |");
	puts("-----------");
	puts("   |   |");
	printf(" %c | %c | %c\n",board[3],board[4],board[5]);
	puts("   |   |");
	puts("-----------");
	puts("   |   |");
	printf(" %c | %c | %c\n",board[0],board[1],board[2]);
	puts("   |   |");
}

int isWinner(char* bo, char le){
	return ((bo[6] == le && bo[7] == le && bo[8] == le) || // across the top
    (bo[3] == le && bo[4] == le && bo[5] == le) || // across the middle
    (bo[0] == le && bo[1] == le && bo[2] == le) || // across the bottom
    (bo[6] == le && bo[3] == le && bo[0] == le) || // down the left side
    (bo[7] == le && bo[4] == le && bo[1] == le) || // down the middle
    (bo[8] == le && bo[5] == le && bo[2] == le) || // down the right side
    (bo[6] == le && bo[4] == le && bo[2] == le) || // diagonal
    (bo[8] == le && bo[4] == le && bo[0] == le)); // diagonal
}

int isFull(char *bo){
	for(int i =0;i<9;++i)if(bo[i]==' ')return 0;
	return 1;
}

char reverse(char letter){
	if(letter=='X')return 'O'; else return 'X';
}

int computerMove(char *bo,char letter){
	int r;
	for(int idc=0;idc<2;++idc){
		for(int i =0;i<9;++i){
			if(bo[i]==' '){
				bo[i]=letter;
				r=isWinner(bo,letter); bo[i]=' ';
				if(r)return i;
			}
		}
		letter = reverse(letter);
	}
	if(bo[4]==' ')return 4;
	if(bo[0]==' ')return 0;
	if(bo[2]==' ')return 2;
	if(bo[6]==' ')return 6;
	if(bo[8]==' ')return 8;
	if(bo[1]==' ')return 1;
	if(bo[3]==' ')return 3;
	if(bo[5]==' ')return 5;
	if(bo[7]==' ')return 7;
}


int main(){
	char board[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
	int in;
	char playerLetter = ' ';
xoro:
	printf("X or O : ");
	scanf("%c",&playerLetter);
	if(playerLetter!='X' && playerLetter!='O'){
		puts("invalid input");
		goto xoro;
	}
	char aiLetter = reverse(playerLetter);
	if(aiLetter=='X')
		board[computerMove(board,aiLetter)]=aiLetter;
	while(1){
		draw_board(board);
moveInput:
		printf("Your move: ");
		scanf("%d",&in);
		--in;
		if(in>8 || in<0){
			puts("invalid input");
			goto moveInput;
		}
		if(board[in]!=' '){
			puts("no");
			continue;
		}
		board[in]=playerLetter;
		if(isWinner(board,playerLetter)){
			draw_board(board);
			puts("you won!");
			break;
		}
		if(isFull(board)){
			draw_board(board);
			puts("draw");
			break;
		}
		board[computerMove(board,aiLetter)]=aiLetter;
		if(isWinner(board,aiLetter)){
			draw_board(board);
			puts("betterlucknexttime");
			break;
		}
	}
}

