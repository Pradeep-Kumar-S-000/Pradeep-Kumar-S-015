#include <iostream>
#include<conio.h>
using namespace std;
bool gameover;
const int width = 20;
const int height = 20;
int x, y, fruitx, fruity, score;
enum edirection{ stop = 0, left, right, up, down};
edirection dir;

void setup(){
    
    gameover = false;
    dir = stop;
    x = width/2;
    y = height/2;
    fruitx = rand()%width;
    fruity = rand()%height;
    score = 0;
    
}


void draw(){
    
    system("cls");
    
    for(int i = 0; i < width; i++)
    cout << "#";
    
    cout << endl;
    
    for(int i = 0; i < height; i++){
        
        for(int j = 0; j < width; j++){
            
            if(j == 0 || j == width - 1)
            cout << "#";
            
            if(i == y && j == x)
            cout << "o";
            
            else if(i == fruity && j == fruitx)
            cout << "f";
            
            else
            cout << " ";
        }
        cout << endl;
    }
    
    for(int i = 0; i < width; i++)
    cout << "#";
    
    cout << endl;
    cout << "score :" << score <<endl;
}

void input(){
    
    if(_kbhit()){
        
        
        switch(getch()){
            
            case 'a':
            dir = ::left;
            break;
            
            case 'd':
            dir = ::right;
            break;
            
            case 'w':
            dir = ::up;
            break;
            
            case 's':
            dir = ::down;
            break;
            
            case 'x':
            gameover = true;
            break;
            
        }
    }
            
 }
    

void logic(){
    
    switch(dir){
        
        case ::left:
        x--;
        break;
        
        case ::right:
        x++;
        break;
        
        case up:
        y--;
        break;
        
        case down:
        y++;
        break;
        
        default:
        break;
    }
    if(x > width || x < 0 || y > height || y < 0)
    gameover = true;
    
    if(x == fruitx && y == fruity)
    {
        score += 10;
        fruitx = rand()%width;
        fruity = rand()%height;
    }
    }
    

int main(){
    
    setup();
    
    while(!gameover){
        draw();
        input();
        logic();
        _sleep(100);
       
    }
    return 0;
}