#include <stdio.h>
#include <unistd.h>
#include "life.h"

int main(int argc, char *argv[]) {
	readDefaultRounds("numOfRounds.txt");
	readBoardSize("boardSize.txt");

	int board[XSIZE][YSIZE];
	int rounds = DEFAULTROUNDS;

	initBoard(board);
	board[5][5] = ALIVE;
	board[5][6] = ALIVE;
	board[5][7] = ALIVE;
	board[6][6] = ALIVE;

	printf("Playing %d rounds.\n\n", rounds);
	for (int i=0; i<rounds; i++) {
		printf("Round: %d\n", i+1);
		printBoard(board);
		playRound(board);

		sleep(1);
	}

	return 0;
}

void readBoardSize(const char* boardSize){
    FILE* file = fopen("boardSize.txt", "r");
    if(file == NULL){
        printf("Can't open file for reading.\n");
    }else{
        fscanf(file, "%d", &XSIZE);
        fscanf(file, "%d", &YSIZE);
        fclose(file);
    }
}

void readDefaultRounds(const char* numOfRounds){
    FILE* file = fopen("numOfRounds.txt", "r");
    if(file == NULL){
        printf("Can't open file for reading.\n");
    }else{
        fscanf(file, "%d", &DEFAULTROUNDS);
        fclose(file);
    }
}

void initialBoardState(const char* boardState, int vBoard[][YSIZE]){
	FILE* file = fopen("boardState.txt", "r");
	if(file == NULL){
		printf("Can't open file for reading.\n");
	}else{
		for(int i = 0; i < XSIZE; i++){
			for(int j = 0; j < YSIZE; j++){
				fscanf(file, "%d", &vBoard[i][j]);
			}
		}
		fclose(file);
	}
}

void initBoard(int vBoard[][YSIZE]) {
    //for(int i = 0; i < XSIZE; i++){
		//for(int j = 0; j < YSIZE; j++){
			//vBoard[i][j] = DEAD;
		//}
	//}

	initialBoardState("boardState.txt", vBoard);
}

void playRound(int vBoard[][YSIZE]) {
	int tmpBoard[XSIZE][YSIZE];
	initBoard(tmpBoard);

	// perform the algorithm on vBoard, but update tmpBoard
	// with the new state
	
	for(int i = 0; i < XSIZE; i++){
		for(int j = 0; j < YSIZE; j++){
			if(vBoard[i][j] == ALIVE){
				int n = neighbors(vBoard, i, j);
				if(n < 2){
					tmpBoard[i][j] = DEAD;
				}else if(n == 2 || n == 3){
					tmpBoard[i][j] = ALIVE;
				}else{
					tmpBoard[i][j] = DEAD;
				}
			}else if(vBoard[i][j] == DEAD){
				int n = neighbors(vBoard, i, j);
				if(n == 3){
					tmpBoard[i][j] = ALIVE;
				}
			}
			
			
		}
	}

    // copy tmpBoard over vBoard
	for (int y=0; y < YSIZE; y++) {
		for (int x=0; x < XSIZE; x++) {
			vBoard[x][y] = tmpBoard[x][y];
		}
	}
}

int onBoard(int x, int y) {
	if (x < 0 || x >= XSIZE)
		return 0;
	else
		if (y < 0 || y >= YSIZE) return 0;
	else
		return 1;
}

int neighbors(int vBoard[][YSIZE], int x, int y) {
	int n=0;

	int xp1 = x + 1;
	int xm1 = x - 1;
	int yp1 = y + 1;
	int ym1 = y - 1;

	if (onBoard(xm1, y) && vBoard[xm1][y] == ALIVE) n++;
	if (onBoard(xm1, yp1) && vBoard[xm1][yp1] == ALIVE) n++;
	if (onBoard(x, yp1) && vBoard[x][yp1] == ALIVE) n++;
	if (onBoard(xp1, yp1) && vBoard[xp1][yp1] == ALIVE) n++;
	if (onBoard(xp1, y) && vBoard[xp1][y] == ALIVE) n++;
	if (onBoard(xp1, ym1) && vBoard[xp1][ym1] == ALIVE) n++;
	if (onBoard(x, ym1) && vBoard[x][ym1] == ALIVE) n++;
	if (onBoard(xm1, ym1) && vBoard[xm1][ym1] == ALIVE) n++;

	return n;
}

void printBoard(int vBoard[XSIZE][YSIZE]) {
	for(int i = 0; i < XSIZE; i++){
		for(int j = 0; j < YSIZE; j++){
			printf("%d ", vBoard[i][j]);
			if(j == YSIZE - 1){
				printf("\n");
			}
		}
	}
}