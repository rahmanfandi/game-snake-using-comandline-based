#include <conio.h>
#include <iostream.h>
#include <windows.h>
#define ran (rand()%28)+1
#define AA setcolor(7);gotoxy(33,5);cout<<"Level : ";
void gotoxy(unsigned int x, unsigned int y)
{COORD z={x,y};SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),z);}
void setcolor(unsigned short color)
{HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hCon,color);
}

/////////////////////////////////////////////////////////////////////////////
//pelengkap saja
int main();
void tampilan(){
for(int i=0; i<3; i++){Sleep(100); 
system ("mode 50,30");
cout<<"\n___________$$$$$$$$$$$$$$$$$$$$$$$"
"\n________$$$$___$$$$$$$$$$$$$$$$$$$$$"
"\n______$$$$______$$$$$$$$$$$$$$$$$$$$$$"
"\n____$$$$$________$$$$$$$$$$$$$$$$$$$$$$$"
"\n___$$$$$__________$$$$$$$$$$$$$$$$$$$$$$$"
"\n__$$$$$___________$$$$$$$$$$$$$$$$$$$$$$$"
"\n_$$$$$$____________$$$$$$$$$$$$$$$$$$$$$$$$"
"\n_$$$$$$___________$$$$$$$$$___________$$$$$$"
"\n_$$$$$$$_________$$$_$$$_$$$_________$$$$$$$"
"\n_$$$$$$$$______$$$$___$___$$$$______$$$$$$$$"
"\n_$$$$$$$$$$$$$$$$$___$$$___$$$$$$$$$$$$$$$$$"
"\n_$$$_$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$_o$$"
"\n_$$$__$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$__$$$"
"\n__$$$__$’$$$$$$$$$$$$$$$$$$$$$$$$$$$$$__o$$$"
"\n__’$$o__$$__$$’$$$$$$$$$$$$$$’$$__$$_____o$$"
"\n____$$o$____$$__’$$’$$’$$’__$$______$___o$$"
"\n_____$$$o$__$____$$___$$___$$_____$$__o$"
"\n______’$$$$O$____$$____$$___$$ ____o$$$"
"\n_________’$$o$$___$$___$$___$$___o$$$"
"\n___________’$$$$o$o$o$o$o$o$o$o$095$$$___";

system("color f0");Sleep(100); system("color 0f");} 
system("mode 70,33");
setcolor(2);
for(int x=0;x<31;x++){Sleep(10); gotoxy(0,x);printf("%c",176);gotoxy(30,x);;printf("%c",176);}
for(int x=0;x<30;x++){Sleep(10); gotoxy(x,0);printf("%c",176);gotoxy(x,30);;printf("%c",176);}
setcolor(7);
gotoxy(33,2);printf("GAME CACING");
setcolor(7);

gotoxy(33,16);printf("keterangan : ");
gotoxy(33,20);printf("* kecepatan tegantung level ");
gotoxy(33,18);printf("* cacing dapat membus tembok ");
gotoxy(33,19);printf("* mati jika menabrak badanya sendiri ");
gotoxy(33,17);printf("* kontrol dengan tombol panah");
gotoxy(33,21);printf("* p : pause ");
gotoxy(33,22);printf("* r : reset ");
setcolor(2);
gotoxy(40,32);printf("creator. fandi ");
gotoxy(3,14);
cout<<"tekan enter untuk memulai";
getch();gotoxy(3,14);
cout<<"                         ";
}



void kalah(){
system("mode 45,27");
gotoxy(0,0);     
cout<<"\ncacing anda mengalami PLH!!!\n";
cout<<"\n __/////////////////////////////////______"
"\n __//////////////////////////////////______"
"\n _////////////$$$$$$$$$$$///////_____"
"\n _///////////$$$$_____$$////////_____"
"\n _////////// __$$$____$$$$///_____"
"\n _////////$$$$$$$$$$$$$/////_____"
"\n _////// $$$$$$$$$$$$$////_______"
"\n _///// $$$$$$–$$$$$ _________"
"\n _ // ___$$$$$$$$$$_________"
"\n _ / ______$$$$$____________"
"\n _^$$$b______________e$$$”_"
"\n _d$$$$$e__________z$$$$$b_"
"\n 4$$$*$$$$$c____.$$$$$*$$$r"
"\n _””____^*$$$be$$$*”____^”_"
"\n __________”$$$$”__________"
"\n ________.d$$P$$$b_________"
"\n _______d$$P___^$$$b_______"
"\n ___.ed$$$”______”$$$be.___"
"\n _$$$$$$P__________*$$$$$$_"
"\n 4$$$$$P____________$$$$$$”"
"\n\n jangan lupa cuci tangan sebelum makan "
"\n supaya gak cancingan ";

for(int i=0; i<10; i++){Sleep(100); system("color f4");Sleep(100);system("color 4f");}
getch();getch();
main();
}



void menang(){system("mode 20,20");
cout<<"katam...";
}






/////////////////////////////////////////////////////////////////////////////

void game()
{
struct
{ int mx;
  int my;
  int H;
  int V;
int t;
}c[80];
int p=2,b=26,
    H,V,Level=100;

srand(time(NULL));
int amx = ran, amy = ran;

c[0].H=2;c[0].V=0;
c[0].mx=7;c[0].my=20;

setcolor(7);
gotoxy(33,4);printf("panjang cacing : %d",p);
gotoxy(amx,amy);setcolor(4);printf("%c",3);

////game///////
while(1){ 


if(c[0].mx == amx && c[0].my == amy){srand(time(NULL));
gotoxy(amx,amy);setcolor(8);printf("%c",219);
p++;amx = ran;amy = ran;setcolor(7);gotoxy(50,4);cout<<p;}

gotoxy(amx,amy);setcolor(4);printf("%c",3);

switch(c[0].mx){ 
case 0 : c[0].mx=29;break;
case 30: c[0].mx=0;break;
}
switch(c[0].my){ 
case 0 : c[0].my=29;break;
case 30: c[0].my=0;break;
}

if(kbhit()){
c[0].t=getch();
switch(c[0].t){
case 72 :if(c[0].V != 1) c[0].V=0;c[0].H=2;break; 
case 80 :if(c[0].V != 0) c[0].V=1;c[0].H=2;break;
case 75 :if(c[0].H != 1) c[0].H=0;c[0].V=2;break;
case 77 :if(c[0].H != 0) c[0].H=1;c[0].V=2;break;
case 'p':gotoxy(15,15);cout<<"BIJIM!!!";getch();gotoxy(15,15);cout<<"        ";break;
case 'r':gotoxy(3,10);cout<<"tekan enter untuk reset!!!";getch();main();
}}

switch(c[0].H){ 
case 0: c[0].mx--;break;
case 1: c[0].mx++;break;
}
switch(c[0].V){ 
case 0: c[0].my--;break;
case 1: c[0].my++;break;
}

switch(p){
case  2:AA cout<<"pemanasan";Level = 100;break;
case 20:AA cout<<"agak cepet";Level = 50;break;
case 40:AA cout<<"banter     ";Level = 20;break;
case 60:AA cout<<"tewur       ";Level = 10;break;
case 80:AA menang();}




gotoxy(c[0].mx,c[0].my);setcolor(7);printf("%c",219);

gotoxy(c[p].mx,c[p].my);cout<<" ";
for(int i=4; i<p; i++){if (c[0].mx == c[i].mx && c[0].my == c[i].my){
system("color 2f");Sleep(2000); kalah();}}
for (int i=p; i>=0; i-- ){c[i+1].mx = c[i].mx;  c[i+1].my = c[i].my;}//bagian utama
Sleep(Level);
}}
///////////////////////////////////////////////////////////////

main()
{
tampilan();
game();
}








