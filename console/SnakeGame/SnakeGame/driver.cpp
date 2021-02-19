#include<iostream>
using namespace std;
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>
using namespace std;


//SNAKE GAME
int mapsq;
int mapWidth;
int mapHeight;
//coordinates
int mapX = 4;
int mapY = 3;
int fX;
int fY;
bool gameOver = false;
enum direction {LEFT, RIGHT, UP, DOWN} dir;
//Score
int score = 0;
void draw(){
	srand(time(NULL));
	//random fruit appearances
	fX = rand()%mapWidth;
	fY = rand()%mapHeight;

	for(int i=0; i<mapHeight; i++){
		for(int j=0; j<mapWidth; j++){
			if(i==0 || i==mapHeight-1){
				cout<<"*";
			}
			else if(j==0 || j==mapWidth-1){
				cout<<"*";
			}
			else if(i==mapY && j==mapX){
				cout<<"o";
			}
			else if(i==fY && j==fX){
				cout<<"x";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}

}

void logic(){
	char ch;
	ch = getch();
	switch(ch){
	case 'w':
		dir = UP;
		break;
	case 'a':
		dir = LEFT;
		break;
	case 's':
		dir = DOWN;
		break;
	case 'd':
		dir = RIGHT;
		break;
	case 'x':
		gameOver = true;
		break;
	default:
		break;
	}
}

void setup(){
	system("cls");
	switch(dir){
	case LEFT:
		mapX--;
		break;
	case RIGHT:
		mapX++;
		break;
	case UP:
		mapY--;
		break;
	case DOWN:
		mapY++;
		break;
	}
}

void game(){
	if((mapX == fX) && (mapY == fY)){
		score++;
	}
	/*else if(mapX==mapWidth || mapX==0 || mapY==mapHeight || mapY==0){
		gameOver = true;
	}*/
	else if(mapX==mapWidth){
		mapX=0;
	}
	else if(mapX==0){
		mapX=mapWidth;
	}
	else if(mapY==mapHeight-1){
		mapY=1;
	}
	else if(mapY==1){
		mapY=mapHeight-1;
	}
	cout<<"RAGExo DEV: ZAIN UL MUSTAFA"<<endl<<endl<<"SCORE: "<<score<<endl<<" IF YOU GET RAGED, PLEASE QUIT!"<<endl;
}

int main(){
	int sel;
	cout<<"\tRAGExo DEV: ZAIN UL MUSTAFA"<<endl<<endl<<"HOW TO PLAY:\n   w TO MOVE o UP\n   a TO MOVE o RIGHT\n   s TO MOVE o DOWN\n   d TO MOVE o LEFT\n   PRESS x TO QUIT\n"<<endl<<endl<<"'O THY TESTIFY THOU RAGE THY SHALL OCCUPY.'"<<endl<<"PRESS ANY KEY TO CONTINUE!";
	getch();
	system("cls");
	cout<<"SELECT MAP SIZE: \n   SMALL (1)\n   MEDIUM (2)\n   LARGE (3)";
	cin>>sel;
	switch(sel){
	case 1:
		mapsq = 10;
		break;
	case 2:
		mapsq = 20;
		break;
	case 3:
		mapsq = 30;
		break;
	default:
		mapsq = 10;
		break;
	}
	mapWidth = mapsq;
	mapHeight = mapsq;
	system("cls");
	while(!gameOver){
		draw();
		logic();
		setup();
		game();
		//(10);
	}
	system("cls");
	cout<<"YOUR SCORE IS: "<<score<<endl;
	system("pause");
	return 0;
}