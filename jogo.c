#include <iostream>
#include <stdlib.h>
#include <curses.h>
using namespace std;

int main()
{
    char jogoDaVelha [3][3];
    int n =1;
    for(int i =0;i<3;i++){
        for(int ii=0;ii<3;ii++){
            jogoDaVelha[i][ii]=n + '0';
            n++;
        }
    }
    bool vencedor= false;
    char pos;
    char set = 'x';
    int jogadas = 9;
    while(jogadas>0&&vencedor==false){
        for(int i =0;i<3;i++){
        for(int ii=0;ii<3;ii++){
            cout << jogoDaVelha[i][ii] << " ";
        }
            cout << endl;
        }
        cin >> pos;
        if(jogadas%2==1) set = 'x';
        else set = 'o';
        switch(pos){
            case '1':
            jogoDaVelha[0][0] =set;
            jogadas--;
              break;
            case '2':
            jogoDaVelha[0][1] = set;
            jogadas--;
              break;
              case '3':
              jogoDaVelha[0][2] = set; 
              jogadas--;
              break;
              case '4':
              jogoDaVelha[1][0] = set;
              jogadas--;
              break;
              case '5':
              jogoDaVelha[1][1] = set;
              jogadas--;
              break;
              case '6':
              jogoDaVelha[1][2] = set;
              jogadas--;
              break;
              case '7':
              jogoDaVelha[2][0] = set;
              jogadas--;
              break;
              case '8':
              jogoDaVelha[2][1] = set;
              jogadas--;
              break;
              case '9':
              jogoDaVelha[2][2] = set;
              jogadas--;
              break;
              default:
              
              break;
        }
        system("clear");//limpa a tela, vai bugar dependendo do sistema operacional 
        //horizontais
        if(jogoDaVelha[0][0]==jogoDaVelha[0][1]&&jogoDaVelha[0][2]==jogoDaVelha[0][1]){
            vencedor = true;
        }
        if(jogoDaVelha[1][0]==jogoDaVelha[1][1]&&jogoDaVelha[1][2]==jogoDaVelha[1][1]){
            vencedor = true;
        }
        
        if(jogoDaVelha[2][0]==jogoDaVelha[2][1]&&jogoDaVelha[2][2]==jogoDaVelha[2][1]){
            vencedor = true;
        }
        //vertical
        if(jogoDaVelha[1][0]==jogoDaVelha[0][0]&&jogoDaVelha[2][0]==jogoDaVelha[0][0]){
            vencedor = true;
        }
        if(jogoDaVelha[1][1]==jogoDaVelha[0][1]&&jogoDaVelha[2][1]==jogoDaVelha[0][1]){
            vencedor = true;
        }
        if(jogoDaVelha[0][2]==jogoDaVelha[1][2]&&jogoDaVelha[0][2]==jogoDaVelha[2][2]){
            vencedor = true;
        }
        //diagonais
        if(jogoDaVelha[0][0]==jogoDaVelha[1][1]&&jogoDaVelha[1][1]==jogoDaVelha[2][2]){
            vencedor = true;
        }
        if(jogoDaVelha[2][0]==jogoDaVelha[1][1]&&jogoDaVelha[1][1]==jogoDaVelha[0][2]){
            vencedor = true;
        }
        
    }
    if(vencedor==true) {cout << "vencedor: " << set << endl;
    for(int i =0;i<3;i++){
        for(int ii=0;ii<3;ii++){
            cout << jogoDaVelha[i][ii] << " ";
        }
            cout << endl;
        }}
    else { cout << "empate" << endl;
for(int i =0;i<3;i++){
        for(int ii=0;ii<3;ii++){
            cout << jogoDaVelha[i][ii] << " ";
        }
            cout << endl;
        }}
    return 0;
}

