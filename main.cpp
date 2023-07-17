#include<iostream>
#include<stdio.h>
#include<iomanip>
#include<string.h>
#include<windows.h>
void printboard(char[],char[],int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int);
void introduction();
int lasthouse(int &,int);
using namespace std;
int main()
{
	int x;
	
	char f[100],g[100],h[100],k[100],l[100],n[100];
              cout<<setw(90);
              
              char u[23]="********************";
              for(x=0;x<=22;x++)
	 {
	 	cout<<u[x];
	 	Sleep(25);
	 }
	 
	 cout<<endl;
	char b[21]="WELCOME TO CHESS C++";
	
	cout<<setw(90);
	for(x=0;x<=21;x++)
	 {
	 	cout<<b[x];
	 	Sleep(150);
	 }
	cout<<endl;
cout<<setw(90);


              char v[23]="********************";
              for(x=0;x<=22;x++)
	 {
	 	cout<<v[x];
	 	Sleep(25);
	 }
	 
	 cout<<endl;
              
     cout<<endl;
int m,z;
	char ch;



     for(z=0;z<10;z++)
{

	cout<<"Please Make a Choice :-) "<<endl<<endl;
	cout<<"1. INTRODUCTION "<<endl;
	cout<<"2. LEARN HOW TO PLAY "<<endl;
	cout<<"3. START CHESS C++ "<<endl<<endl;
	cout<<"--> ";
	cin>>m;
	cout<<endl;
	if(m==1)
	{
		char f[100]="Hello!! I am a virtual gaming program";
	for(x=0;x<=39;x++)
	 {
	 	cout<<f[x];
	 	Sleep(70);
	 }
	 cout<<endl;
	 
	    char g[100]="designed to play chess in C++ (a well known computer programming language)"; 
	for(x=0;x<=76;x++)
	 {
	 	cout<<g[x];
	 	Sleep(70);
	 }
	 cout<<endl<<endl;
	 
	 char h[100]="I am a part of creation of my maker known by the name "; 
	for(x=0;x<=55;x++)
	 {
	 	cout<<h[x];
	 	Sleep(70);
	 }
	 cout<<endl<<endl;
	  
	char k[100]="~~ AADHAR JAIN ~~";
	for(x=0;x<=19;x++)
	 {
	 	cout<<k[x];
	 	Sleep(150);
	 }
	 cout<<endl<<endl;
	
	char l[100]="WELL !! I THINK THAT'S ENOUGH OF A INTRO..";
	for(x=0;x<=42;x++)
	 {
	 	cout<<l[x];
	 	Sleep(70);
	 }
	 cout<<endl<<endl;
	
char o[100]="NOW , You should continue with learning about some easy basics to enjoy this chess game. ";
	for(x=0;x<=90;x++)
	 {
	 	cout<<o[x];
	 	Sleep(75);
	 }
	 cout<<endl<<endl;
	 // to make hit enter to continue
     std::cin.ignore();
	std::cout<<"Hit ENTER to continue   ";
    std::cin.get();
    // above three lines
	cout<<endl<<endl;

	

    }
	else if(m==2)
	{
		char f[100]="ALRIGHT !! PLAYING CHESS IN C++ WOULD BE MUCH FUN THAN IT APPEARS.";
   for(x=0;x<=66;x++)
	 {
	 	cout<<f[x];
	 	Sleep(75);
	 }
	 cout<<endl<<endl;

		char g[100]="--> As you start the game , for the first time you are required to input names of both the players.";
for(x=0;x<=99;x++)
	 {
	 	cout<<g[x];
	 	Sleep(90);
	 }
	 cout<<endl<<endl;

		char h[100]="--> Then a layout of chess board would appear containing all the warriors ";
for(x=0;x<=74;x++)
	 {
	 	cout<<h[x];
	 	Sleep(75);
	 }
	 cout<<endl;

		char k[100]="    from either sides , designated with name of players on opposite sides.";
for(x=0;x<=74;x++)
	 {
	 	cout<<k[x];
	 	Sleep(80);
	 }
	 cout<<endl<<endl;

		char l[100]="--> As the game continues you will be asked to select the warrior to move ";
for(x=0;x<=75;x++)
	 {
	 	cout<<l[x];
	 	Sleep(70);
	 }
	 cout<<endl;
			
			char n[100]="    by entering its respective position on chessboard.";
for(x=0;x<=54;x++)
	 {
	 	cout<<n[x];
	 	Sleep(75);
	 }
	 cout<<endl<<endl;
	 
			char o[100]="--> Then make your warrior move by entering its final position on board.";
for(x=0;x<=72;x++)
	 {
	 	cout<<o[x];
	 	Sleep(75);
	 }
	 cout<<endl<<endl;
	 
		    char p[115]="--> FOR HELPING THE FIRST TIME PLAYERS A BOARD SIMILAR TO CHESSBOARD WILL BE PRESENT BESIDE THE MAIN BOARD.";
             for(x=0;x<=106;x++)
	 {
	 	cout<<p[x];
	 	Sleep(95);
	 }
	 cout<<endl;
			
            char q[100]="    , TO FIND POSITIONS AND TO MAKE THE GAMEPLAY EASY AND CONVINIENT. ";
for(x=0;x<=70;x++)
	 {
	 	cout<<q[x];
	 	Sleep(95);
	 }
	 cout<<endl<<endl;

		    char r[115]="--> IN CASE OF ANY INVALID MOVE MADE BY A PLAYER , GAME WILL NOTIFY YOU AND WILL ASK FOR A VALID ONE !! ";
for(x=0;x<=104;x++)
	 {
	 	cout<<r[x];
	 	Sleep(95);
	 }
	 cout<<endl<<endl;
			
			char s[100]="WELL!! THAT'S ALREADY A LOT ABOUT INSTRUCTIONS ";
for(x=0;x<=47;x++)
	 {
	 	cout<<s[x];
	 	Sleep(70);
	 }
	 cout<<endl<<endl;			
			
			char t[100]="YOU SHOULD NOW CONTINUE TO THE GAME TO EXPLORE REMAINING FEATURES BY YOURSELF....";
			for(x=0;x<=81;x++)
	 {
	 	cout<<t[x];
	 	Sleep(95);
	 }
	 cout<<endl<<endl;
			
	 // to make hit enter to continue
     std::cin.ignore();
	std::cout<<"Hit ENTER to continue   ";
    std::cin.get();
    // above three lines

		cout<<endl<<endl;
		
	}

    else if (m==3)
   {
        break;	
   }

   else
   {
   	cout<<"That's an INVALID MOVE!! "<<endl;
   	cout<<"Please make choice from one of the above...."<<endl;
   	return(m);
   }
	
}
	
	
	
	
	

   int elephant1,horse1,camel1,king,queen,camel2,horse2,elephant2;
    int s1,s2,s3,s4,s5,s6,s7,s8;
    int hathi1,godha1,uth1,raja,rani,uth2,godha2,hathi2;
    int S1,S2,S3,S4,S5,S6,S7,S8;

    //variable for comparing returned values from lasthouse to revive warrior

	int  check;

    //Initialising variables with initial value

   elephant1=1;
    horse1=2;
    camel1=3;
    king=4;
    queen=5;
    camel2=6;
    horse2=7;
    elephant2=8;
    s1=9;
    s2=10;
    s3=11;
    s4=12;
    s5=13;
    s6=14;
    s7=15;
    s8=16;

    S1=49;
    S2=50;
    S3=51;
    S4=52;
    S5=53;
    S6=54;
    S7=55;
    S8=56;
    hathi1=57;
    godha1=58;
    uth1=59;
    raja=60;
    rani=61;
    uth2=62;
    godha2=63;
    hathi2=64;

    //yha se shuru code to take values from user to make desired move

	//just to add typewriter effect



	char p1[20],p2[20];

	char c[22]="ENTER PLAYER 1 NAME -";
	for(x=0;x<=22;x++)
	 {
	 	cout<<c[x];
	 	Sleep(100);
	 }
gets(p1);
gets(p1);
	
	cout<<"\n";

	char d[22]="ENTER PLAYER 2 NAME -";
	for(x=0;x<=22;x++)
	 {
	 	cout<<d[x];
	 	Sleep(100);
	 }

	gets(p2);
	cout<<"\n";



	char e[27]="LET'S BEGIN THE GAME......";


	 for(x=0;x<=27;x++)
	 {
	 	cout<<e[x];
	 	Sleep(200);
	 }
	 	cout<<endl;



 //passing arguments to print table initially

	printboard(p1,p2,elephant1,horse1,camel1,king,queen,camel2,horse2,elephant2,s1,s2,s3,s4,s5,s6,s7,s8,hathi1,godha1,uth1,raja,rani,uth2,godha2,hathi2,S1,S2,S3,S4,S5,S6,S7,S8);

int ipos,fpos;
//ipos - initial position and fpos- final position


int j;


for(j=1;j<=1000;j++)
{
//to alternate the chances of the two palyers

    if(j%2==0)
   {

    cout<<p2<<" choose your move "<<endl<<endl;
	cout<<"Enter positon of warrior to move - ";
    cin>>ipos;
   }

   if(j%2!=0)
   {
	cout<<p1<<" choose your move "<<endl<<endl;
	cout<<"Enter positon of warrior to move - ";
    cin>>ipos;

   }

   cout<<"Great! Enter final position - ";
   	cin>>fpos;



//COMPARING EACH WARRIOR FOR THREE CONDIOTIONS
//1.IF IT IS A INVALID MOVE BY CHECKING IF IT IS CUTTING ITS OWN MATES
//2.CHECKING WETHER IT IS CUTTING OPPONENT AND IF IT IS THEN ALLOTING CUTTED OPPONENT AS 100 SO THAT IT DOESNT GETS PRINTED
//3.ELSE CONDITION THAT IF IT IS NORMALLY MOVING

    if(ipos==elephant1)
{

   	//to check wether this move is invalid or not
   	
if(ipos-fpos==8||fpos-ipos==8||ipos-fpos==16||fpos-ipos==16||ipos-fpos==24||fpos-ipos==24||ipos-fpos==32||fpos-ipos==32||ipos-fpos==40||fpos-ipos==40||ipos-fpos==48||fpos-ipos==48||ipos-fpos==56||fpos-ipos==56||ipos-fpos==1||fpos-ipos==1||ipos-fpos==2||fpos-ipos==2||ipos-fpos==3||fpos-ipos==3||ipos-fpos==4||fpos-ipos==4||ipos-fpos==5||fpos-ipos==5||ipos-fpos==6||fpos-ipos==6||ipos-fpos==7||fpos-ipos==7)
{

   if(fpos==elephant1||fpos==horse1||fpos==camel1||fpos==king||fpos==queen||fpos==camel2||fpos==horse2||fpos==elephant2||fpos==s1||fpos==s2||fpos==s3||fpos==s4||fpos==s5||fpos==s6||fpos==s7||fpos==s8)
   {
     cout<<"INVALID MOVE !!";
	  	j--;
	  	cout<<endl;
   }

   //to check wether it is cutting enemy element or not

   else if(fpos==hathi1||fpos==godha1||fpos==uth1||fpos==raja||fpos==rani||fpos==uth2||fpos==godha2||fpos==hathi2||fpos==S1||fpos==S2||fpos==S3||fpos==S4||fpos==S5||fpos==S6||fpos==S7||fpos==S8)
  {
     elephant1=fpos;

	  	//checking which enemy element is cut and removing it
	  	//jinhe remove krna usme 100 daal do , vo print ni honeka (basically a no. above 64)

	  	if(fpos==hathi1)
	  	{
	  		hathi1=100;
		}
   else if(fpos==godha1)
        {
        	godha1=100;
		}
   else if(fpos==uth1)
   {
            uth1=100;
   }
   else if(fpos==raja)
   {
   	       raja=100;
   }
   else if(fpos==rani)
   {
   	       rani=100;
   }
   else if(fpos==uth2)
   {
   	       uth2=100;
   }
   else if(fpos==godha2)
   {
   	      godha2=100;
   }
   else if(fpos==hathi2)
   {
   	     hathi2=100;
   }
   else if(fpos==S1)
   {
          S1=100;
   }
   else if(fpos==S2)
   {
          S2=100;
   }
   else if(fpos==S3)
   {
          S3=100;
   }
   else if(fpos==S4)
   {
          S4=100;
   }
   else if(fpos==S5)
   {
          S5=100;
   }
   else if(fpos==S6)
   {
          S6=100;
   }
   else if(fpos==S7)
   {
          S7=100;
   }
   else if(fpos==S8)
   {
          S8=100;
   }

}

   else
   {
   	elephant1=fpos;
   }

	   printboard(p1,p2,elephant1,horse1,camel1,king,queen,camel2,horse2,elephant2,s1,s2,s3,s4,s5,s6,s7,s8,hathi1,godha1,uth1,raja,rani,uth2,godha2,hathi2,S1,S2,S3,S4,S5,S6,S7,S8);

}

else
{
	cout<<endl;
	cout<<"INVALID MOVE!! TRY AGAIN :) "<<endl;
	j--;
}

}


   else if(ipos==horse1)
{

   	//to check wether this move is invalid or not
   	
if(ipos-fpos==17||fpos-ipos==17||ipos-fpos==15||fpos-ipos==15||ipos-fpos==10||fpos-ipos==10||ipos-fpos==6||fpos-ipos==6)
{

   if(fpos==elephant1||fpos==horse1||fpos==camel1||fpos==king||fpos==queen||fpos==camel2||fpos==horse2||fpos==elephant2||fpos==s1||fpos==s2||fpos==s3||fpos==s4||fpos==s5||fpos==s6||fpos==s7||fpos==s8)
   {
     cout<<"INVALID MOVE !!";
	  	j--;
	  	cout<<endl;
   }

   //to check wether it is cutting enemy element or not

   else if(fpos==hathi1||fpos==godha1||fpos==uth1||fpos==raja||fpos==rani||fpos==uth2||fpos==godha2||fpos==hathi2||fpos==S1||fpos==S2||fpos==S3||fpos==S4||fpos==S5||fpos==S6||fpos==S7||fpos==S8)
{
     horse1=fpos;

	  	//checking which enemy element is cut and removing it
	  	//jinhe remove krna usme 100 daal do , vo print ni honeka (basically a no. above 64)

	  	if(fpos==hathi1)
	  	{
	  		hathi1=100;
		}
   else if(fpos==godha1)
        {
        	godha1=100;
		}
   else if(fpos==uth1)
   {
            uth1=100;
   }
   else if(fpos==raja)
   {
   	       raja=100;
   }
   else if(fpos==rani)
   {
   	       rani=100;
   }
   else if(fpos==uth2)
   {
   	       uth2=100;
   }
   else if(fpos==godha2)
   {
   	      godha2=100;
   }
   else if(fpos==hathi2)
   {
   	     hathi2=100;
   }
   else if(fpos==S1)
   {
          S1=100;
   }
   else if(fpos==S2)
   {
          S2=100;
   }
   else if(fpos==S3)
   {
          S3=100;
   }
   else if(fpos==S4)
   {
          S4=100;
   }
   else if(fpos==S5)
   {
          S5=100;
   }
   else if(fpos==S6)
   {
          S6=100;
   }
   else if(fpos==S7)
   {
          S7=100;
   }
   else if(fpos==S8)
   {
          S8=100;
   }

}

   else
   {
   	horse1=fpos;
   }

	   printboard(p1,p2,elephant1,horse1,camel1,king,queen,camel2,horse2,elephant2,s1,s2,s3,s4,s5,s6,s7,s8,hathi1,godha1,uth1,raja,rani,uth2,godha2,hathi2,S1,S2,S3,S4,S5,S6,S7,S8);

}
  else
  {
	cout<<endl;
	cout<<"INVALID MOVE!! TRY AGAIN :)"<<endl;
	j--;
	
  }  

}

   else if(ipos==camel1)
{

   	//to check wether this move is invalid or not
   	
if(ipos-fpos==9||fpos-ipos==9||ipos-fpos==18||fpos-ipos==18||ipos-fpos==27||fpos-ipos==27||ipos-fpos==36||fpos-ipos==36||ipos-fpos==45||fpos-ipos==45||ipos-fpos==54||fpos-ipos==54||ipos-fpos==63||fpos-ipos==63||ipos-fpos==7||fpos-ipos==7||ipos-fpos==14||fpos-ipos==14||ipos-fpos==21||fpos-ipos==21||ipos-fpos==28||fpos-ipos==28||ipos-fpos==35||fpos-ipos==35||ipos-fpos==42||fpos-ipos==42||ipos-fpos==49||fpos-ipos==49)
{

   if(fpos==elephant1||fpos==horse1||fpos==camel1||fpos==king||fpos==queen||fpos==camel2||fpos==horse2||fpos==elephant2||fpos==s1||fpos==s2||fpos==s3||fpos==s4||fpos==s5||fpos==s6||fpos==s7||fpos==s8)
   {
     cout<<"INVALID MOVE !!";
	  	j--;
	  	cout<<endl;
   }

   //to check wether it is cutting enemy element or not

   else if(fpos==hathi1||fpos==godha1||fpos==uth1||fpos==raja||fpos==rani||fpos==uth2||fpos==godha2||fpos==hathi2||fpos==S1||fpos==S2||fpos==S3||fpos==S4||fpos==S5||fpos==S6||fpos==S7||fpos==S8)
{
     camel1=fpos;

	  	//checking which enemy element is cut and removing it
	  	//jinhe remove krna usme 100 daal do , vo print ni honeka (basically a no. above 64)

	  	if(fpos==hathi1)
	  	{
	  		hathi1=100;
		}
   else if(fpos==godha1)
        {
        	godha1=100;
		}
   else if(fpos==uth1)
   {
            uth1=100;
   }
   else if(fpos==raja)
   {
   	       raja=100;
   }
   else if(fpos==rani)
   {
   	       rani=100;
   }
   else if(fpos==uth2)
   {
   	       uth2=100;
   }
   else if(fpos==godha2)
   {
   	      godha2=100;
   }
   else if(fpos==hathi2)
   {
   	     hathi2=100;
   }
   else if(fpos==S1)
   {
          S1=100;
   }
   else if(fpos==S2)
   {
          S2=100;
   }
   else if(fpos==S3)
   {
          S3=100;
   }
   else if(fpos==S4)
   {
          S4=100;
   }
   else if(fpos==S5)
   {
          S5=100;
   }
   else if(fpos==S6)
   {
          S6=100;
   }
   else if(fpos==S7)
   {
          S7=100;
   }
   else if(fpos==S8)
   {
          S8=100;
   }

}

   else
   {
   	camel1=fpos;
   }

	   printboard(p1,p2,elephant1,horse1,camel1,king,queen,camel2,horse2,elephant2,s1,s2,s3,s4,s5,s6,s7,s8,hathi1,godha1,uth1,raja,rani,uth2,godha2,hathi2,S1,S2,S3,S4,S5,S6,S7,S8);
}
  else
  {
  	cout<<endl;
  	cout<<"INVALID MOVE!! TRY AGAIN :)"<<endl;
  	j--;
  }

}

   else if(ipos==king)
{

   	//to check wether this move is invalid or not
if(ipos-fpos==8||fpos-ipos==8||ipos-fpos==9||fpos-ipos==9||ipos-fpos==7||fpos-ipos==7||ipos-fpos==1||fpos-ipos==1)
{


   if(fpos==elephant1||fpos==horse1||fpos==camel1||fpos==king||fpos==queen||fpos==camel2||fpos==horse2||fpos==elephant2||fpos==s1||fpos==s2||fpos==s3||fpos==s4||fpos==s5||fpos==s6||fpos==s7||fpos==s8)
   {
     cout<<"INVALID MOVE !!";
	  	j--;
	  	cout<<endl;
   }

   //to check wether it is cutting enemy element or not

   else if(fpos==hathi1||fpos==godha1||fpos==uth1||fpos==raja||fpos==rani||fpos==uth2||fpos==godha2||fpos==hathi2||fpos==S1||fpos==S2||fpos==S3||fpos==S4||fpos==S5||fpos==S6||fpos==S7||fpos==S8)
{
     king=fpos;

	  	//checking which enemy element is cut and removing it
	  	//jinhe remove krna usme 100 daal do , vo print ni honeka (basically a no. above 64)

	  	if(fpos==hathi1)
	  	{
	  		hathi1=100;
		}
   else if(fpos==godha1)
        {
        	godha1=100;
		}
   else if(fpos==uth1)
   {
            uth1=100;
   }
   else if(fpos==raja)
   {
   	       raja=100;
   }
   else if(fpos==rani)
   {
   	       rani=100;
   }
   else if(fpos==uth2)
   {
   	       uth2=100;
   }
   else if(fpos==godha2)
   {
   	      godha2=100;
   }
   else if(fpos==hathi2)
   {
   	     hathi2=100;
   }
   else if(fpos==S1)
   {
          S1=100;
   }
   else if(fpos==S2)
   {
          S2=100;
   }
   else if(fpos==S3)
   {
          S3=100;
   }
   else if(fpos==S4)
   {
          S4=100;
   }
   else if(fpos==S5)
   {
          S5=100;
   }
   else if(fpos==S6)
   {
          S6=100;
   }
   else if(fpos==S7)
   {
          S7=100;
   }
   else if(fpos==S8)
   {
          S8=100;
   }

}

   else
   {
   	king=fpos;
   }

	   printboard(p1,p2,elephant1,horse1,camel1,king,queen,camel2,horse2,elephant2,s1,s2,s3,s4,s5,s6,s7,s8,hathi1,godha1,uth1,raja,rani,uth2,godha2,hathi2,S1,S2,S3,S4,S5,S6,S7,S8);

}
   else
    { 
	   cout<<endl;
       cout<<"INVALID MOVE!! TRY AGAIN :)"<<endl;
       j--;
    }
    
}

else if(ipos==queen)
{

   	//to check wether this move is invalid or not
   	
if(ipos-fpos==8||fpos-ipos==8||ipos-fpos==16||fpos-ipos==16||ipos-fpos==24||fpos-ipos==24||ipos-fpos==32||fpos-ipos==32||ipos-fpos==40||fpos-ipos==40||ipos-fpos==48||fpos-ipos==48||ipos-fpos==56||fpos-ipos==56||ipos-fpos==1||fpos-ipos==1||ipos-fpos==2||fpos-ipos==2||ipos-fpos==3||fpos-ipos==3||ipos-fpos==4||fpos-ipos==4||ipos-fpos==5||fpos-ipos==5||ipos-fpos==6||fpos-ipos==6||ipos-fpos==7||fpos-ipos==7||ipos-fpos==9||fpos-ipos==9||ipos-fpos==18||fpos-ipos==18||ipos-fpos==27||fpos-ipos==27||ipos-fpos==36||fpos-ipos==36||ipos-fpos==45||fpos-ipos==45||ipos-fpos==54||fpos-ipos==54||ipos-fpos==63||fpos-ipos==63||ipos-fpos==7||fpos-ipos==7||ipos-fpos==14||fpos-ipos==14||ipos-fpos==21||fpos-ipos==21||ipos-fpos==28||fpos-ipos==28||ipos-fpos==35||fpos-ipos==35||ipos-fpos==42||fpos-ipos==42||ipos-fpos==49||fpos-ipos==49)

{

   if(fpos==elephant1||fpos==horse1||fpos==camel1||fpos==king||fpos==queen||fpos==camel2||fpos==horse2||fpos==elephant2||fpos==s1||fpos==s2||fpos==s3||fpos==s4||fpos==s5||fpos==s6||fpos==s7||fpos==s8)
   {
     cout<<"INVALID MOVE !!";
	  	j--;
	  	cout<<endl;
   }

   //to check wether it is cutting enemy element or not

   else if(fpos==hathi1||fpos==godha1||fpos==uth1||fpos==raja||fpos==rani||fpos==uth2||fpos==godha2||fpos==hathi2||fpos==S1||fpos==S2||fpos==S3||fpos==S4||fpos==S5||fpos==S6||fpos==S7||fpos==S8)
{
     queen=fpos;

	  	//checking which enemy element is cut and removing it
	  	//jinhe remove krna usme 100 daal do , vo print ni honeka (basically a no. above 64)

	  	if(fpos==hathi1)
	  	{
	  		hathi1=100;
		}
   else if(fpos==godha1)
        {
        	godha1=100;
		}
   else if(fpos==uth1)
   {
            uth1=100;
   }
   else if(fpos==raja)
   {
   	       raja=100;
   }
   else if(fpos==rani)
   {
   	       rani=100;
   }
   else if(fpos==uth2)
   {
   	       uth2=100;
   }
   else if(fpos==godha2)
   {
   	      godha2=100;
   }
   else if(fpos==hathi2)
   {
   	     hathi2=100;
   }
   else if(fpos==S1)
   {
          S1=100;
   }
   else if(fpos==S2)
   {
          S2=100;
   }
   else if(fpos==S3)
   {
          S3=100;
   }
   else if(fpos==S4)
   {
          S4=100;
   }
   else if(fpos==S5)
   {
          S5=100;
   }
   else if(fpos==S6)
   {
          S6=100;
   }
   else if(fpos==S7)
   {
          S7=100;
   }
   else if(fpos==S8)
   {
          S8=100;
   }

}

   else
   {
   	queen=fpos;
   }

	   printboard(p1,p2,elephant1,horse1,camel1,king,queen,camel2,horse2,elephant2,s1,s2,s3,s4,s5,s6,s7,s8,hathi1,godha1,uth1,raja,rani,uth2,godha2,hathi2,S1,S2,S3,S4,S5,S6,S7,S8);

}
   else
   {
        cout<<endl;
		cout<<"INVALID MOVE!! TRY AGAIN :)"<<endl;
		j--;	
   } 

}

   else if(ipos==camel2)
{

   	//to check wether this move is invalid or not
if(ipos-fpos==9||fpos-ipos==9||ipos-fpos==18||fpos-ipos==18||ipos-fpos==27||fpos-ipos==27||ipos-fpos==36||fpos-ipos==36||ipos-fpos==45||fpos-ipos==45||ipos-fpos==54||fpos-ipos==54||ipos-fpos==63||fpos-ipos==63||ipos-fpos==7||fpos-ipos==7||ipos-fpos==14||fpos-ipos==14||ipos-fpos==21||fpos-ipos==21||ipos-fpos==28||fpos-ipos==28||ipos-fpos==35||fpos-ipos==35||ipos-fpos==42||fpos-ipos==42||ipos-fpos==49||fpos-ipos==49)
{


   if(fpos==elephant1||fpos==horse1||fpos==camel1||fpos==king||fpos==queen||fpos==camel2||fpos==horse2||fpos==elephant2||fpos==s1||fpos==s2||fpos==s3||fpos==s4||fpos==s5||fpos==s6||fpos==s7||fpos==s8)
   {
     cout<<"INVALID MOVE !!";
	  	j--;
	  	cout<<endl;
   }

   //to check wether it is cutting enemy element or not

   else if(fpos==hathi1||fpos==godha1||fpos==uth1||fpos==raja||fpos==rani||fpos==uth2||fpos==godha2||fpos==hathi2||fpos==S1||fpos==S2||fpos==S3||fpos==S4||fpos==S5||fpos==S6||fpos==S7||fpos==S8)
{
     camel2=fpos;

	  	//checking which enemy element is cut and removing it
	  	//jinhe remove krna usme 100 daal do , vo print ni honeka (basically a no. above 64)

	  	if(fpos==hathi1)
	  	{
	  		hathi1=100;
		}
   else if(fpos==godha1)
        {
        	godha1=100;
		}
   else if(fpos==uth1)
   {
            uth1=100;
   }
   else if(fpos==raja)
   {
   	       raja=100;
   }
   else if(fpos==rani)
   {
   	       rani=100;
   }
   else if(fpos==uth2)
   {
   	       uth2=100;
   }
   else if(fpos==godha2)
   {
   	      godha2=100;
   }
   else if(fpos==hathi2)
   {
   	     hathi2=100;
   }
   else if(fpos==S1)
   {
          S1=100;
   }
   else if(fpos==S2)
   {
          S2=100;
   }
   else if(fpos==S3)
   {
          S3=100;
   }
   else if(fpos==S4)
   {
          S4=100;
   }
   else if(fpos==S5)
   {
          S5=100;
   }
   else if(fpos==S6)
   {
          S6=100;
   }
   else if(fpos==S7)
   {
          S7=100;
   }
   else if(fpos==S8)
   {
          S8=100;
   }

}

   else
   {
   	camel2=fpos;
   }

	   printboard(p1,p2,elephant1,horse1,camel1,king,queen,camel2,horse2,elephant2,s1,s2,s3,s4,s5,s6,s7,s8,hathi1,godha1,uth1,raja,rani,uth2,godha2,hathi2,S1,S2,S3,S4,S5,S6,S7,S8);

}
   else
   {
   	cout<<endl;
   	cout<<"INVALID MOVE!! TRY AGAIN :)"<<endl;
   	j--;
   }

}

else if(ipos==horse2)
{

   	//to check wether this move is invalid or not
if(ipos-fpos==17||fpos-ipos==17||ipos-fpos==15||fpos-ipos==15||ipos-fpos==10||fpos-ipos==10||ipos-fpos==6||fpos-ipos==6)
{

   if(fpos==elephant1||fpos==horse1||fpos==camel1||fpos==king||fpos==queen||fpos==camel2||fpos==horse2||fpos==elephant2||fpos==s1||fpos==s2||fpos==s3||fpos==s4||fpos==s5||fpos==s6||fpos==s7||fpos==s8)
   {
     cout<<"INVALID MOVE !!";
	  	j--;
	  	cout<<endl;
   }

   //to check wether it is cutting enemy element or not

   else if(fpos==hathi1||fpos==godha1||fpos==uth1||fpos==raja||fpos==rani||fpos==uth2||fpos==godha2||fpos==hathi2||fpos==S1||fpos==S2||fpos==S3||fpos==S4||fpos==S5||fpos==S6||fpos==S7||fpos==S8)
{
     horse2=fpos;

	  	//checking which enemy element is cut and removing it
	  	//jinhe remove krna usme 100 daal do , vo print ni honeka (basically a no. above 64)

	  	if(fpos==hathi1)
	  	{
	  		hathi1=100;
		}
   else if(fpos==godha1)
        {
        	godha1=100;
		}
   else if(fpos==uth1)
   {
            uth1=100;
   }
   else if(fpos==raja)
   {
   	       raja=100;
   }
   else if(fpos==rani)
   {
   	       rani=100;
   }
   else if(fpos==uth2)
   {
   	       uth2=100;
   }
   else if(fpos==godha2)
   {
   	      godha2=100;
   }
   else if(fpos==hathi2)
   {
   	     hathi2=100;
   }
   else if(fpos==S1)
   {
          S1=100;
   }
   else if(fpos==S2)
   {
          S2=100;
   }
   else if(fpos==S3)
   {
          S3=100;
   }
   else if(fpos==S4)
   {
          S4=100;
   }
   else if(fpos==S5)
   {
          S5=100;
   }
   else if(fpos==S6)
   {
          S6=100;
   }
   else if(fpos==S7)
   {
          S7=100;
   }
   else if(fpos==S8)
   {
          S8=100;
   }

}

   else
   {
   	horse2=fpos;
   }

	   printboard(p1,p2,elephant1,horse1,camel1,king,queen,camel2,horse2,elephant2,s1,s2,s3,s4,s5,s6,s7,s8,hathi1,godha1,uth1,raja,rani,uth2,godha2,hathi2,S1,S2,S3,S4,S5,S6,S7,S8);

}
  else
  {
  	cout<<endl;
  	cout<<"INVALID MOVE!! TRY AGAIN :)"<<endl;
  	j--;
  }

}

   else if(ipos==elephant2)
{

   	//to check wether this move is invalid or not
if(ipos-fpos==8||fpos-ipos==8||ipos-fpos==16||fpos-ipos==16||ipos-fpos==24||fpos-ipos==24||ipos-fpos==32||fpos-ipos==32||ipos-fpos==40||fpos-ipos==40||ipos-fpos==48||fpos-ipos==48||ipos-fpos==56||fpos-ipos==56||ipos-fpos==1||fpos-ipos==1||ipos-fpos==2||fpos-ipos==2||ipos-fpos==3||fpos-ipos==3||ipos-fpos==4||fpos-ipos==4||ipos-fpos==5||fpos-ipos==5||ipos-fpos==6||fpos-ipos==6||ipos-fpos==7||fpos-ipos==7)
{
	

   if(fpos==elephant1||fpos==horse1||fpos==camel1||fpos==king||fpos==queen||fpos==camel2||fpos==horse2||fpos==elephant2||fpos==s1||fpos==s2||fpos==s3||fpos==s4||fpos==s5||fpos==s6||fpos==s7||fpos==s8)
   {
     cout<<"INVALID MOVE !!";
	  	j--;
	  	cout<<endl;
   }

   //to check wether it is cutting enemy element or not

   else if(fpos==hathi1||fpos==godha1||fpos==uth1||fpos==raja||fpos==rani||fpos==uth2||fpos==godha2||fpos==hathi2||fpos==S1||fpos==S2||fpos==S3||fpos==S4||fpos==S5||fpos==S6||fpos==S7||fpos==S8)
{
     elephant2=fpos;

	  	//checking which enemy element is cut and removing it
	  	//jinhe remove krna usme 100 daal do , vo print ni honeka (basically a no. above 64)

	  	if(fpos==hathi1)
	  	{
	  		hathi1=100;
		}
   else if(fpos==godha1)
        {
        	godha1=100;
		}
   else if(fpos==uth1)
   {
            uth1=100;
   }
   else if(fpos==raja)
   {
   	       raja=100;
   }
   else if(fpos==rani)
   {
   	       rani=100;
   }
   else if(fpos==uth2)
   {
   	       uth2=100;
   }
   else if(fpos==godha2)
   {
   	      godha2=100;
   }
   else if(fpos==hathi2)
   {
   	     hathi2=100;
   }
   else if(fpos==S1)
   {
          S1=100;
   }
   else if(fpos==S2)
   {
          S2=100;
   }
   else if(fpos==S3)
   {
          S3=100;
   }
   else if(fpos==S4)
   {
          S4=100;
   }
   else if(fpos==S5)
   {
          S5=100;
   }
   else if(fpos==S6)
   {
          S6=100;
   }
   else if(fpos==S7)
   {
          S7=100;
   }
   else if(fpos==S8)
   {
          S8=100;
   }

}

   else
   {
   	elephant2=fpos;
   }

	   printboard(p1,p2,elephant1,horse1,camel1,king,queen,camel2,horse2,elephant2,s1,s2,s3,s4,s5,s6,s7,s8,hathi1,godha1,uth1,raja,rani,uth2,godha2,hathi2,S1,S2,S3,S4,S5,S6,S7,S8);

}
   else
   {
   	cout<<endl;
   	cout<<"INVALID MOVE!! TRY AGAIN :)"<<endl;
   	j--;
   }


}

   else if(ipos==s1)
{

   	//to check wether this move is invalid or not

   if(fpos<=ipos||fpos==elephant1||fpos==horse1||fpos==camel1||fpos==king||fpos==queen||fpos==camel2||fpos==horse2||fpos==elephant2||fpos==s1||fpos==s2||fpos==s3||fpos==s4||fpos==s5||fpos==s6||fpos==s7||fpos==s8)
   {
     cout<<"INVALID MOVE !!";
	  	j--;
	  	cout<<endl;

   }

   //to check wether it is cutting enemy element or not

   else if(fpos==hathi1||fpos==godha1||fpos==uth1||fpos==raja||fpos==rani||fpos==uth2||fpos==godha2||fpos==hathi2||fpos==S1||fpos==S2||fpos==S3||fpos==S4||fpos==S5||fpos==S6||fpos==S7||fpos==S8)
{
     //checking for use of wrong move to cut
	//pyada seedha ni kaat skta mtln ipos and fpos ka diffference 8 ni hna chaiye while cutting
	//differnce ya to ho 7 ya 9 ka

	if(fpos-ipos==9||fpos-ipos==7)
	{

     s1=fpos;

	  	//checking which enemy element is cut and removing it
	  	//jinhe remove krna usme 100 daal do , vo print ni honeka (basically a no. above 64)

	  	if(fpos==hathi1)
	  	{
	  		hathi1=100;
		}
   else if(fpos==godha1)
        {
        	godha1=100;
		}
   else if(fpos==uth1)
   {
            uth1=100;
   }
   else if(fpos==raja)
   {
   	       raja=100;
   }
   else if(fpos==rani)
   {
   	       rani=100;
   }
   else if(fpos==uth2)
   {
   	       uth2=100;
   }
   else if(fpos==godha2)
   {
   	      godha2=100;
   }
   else if(fpos==hathi2)
   {
   	     hathi2=100;
   }
   else if(fpos==S1)
   {
          S1=100;
   }
   else if(fpos==S2)
   {
          S2=100;
   }
   else if(fpos==S3)
   {
          S3=100;
   }
   else if(fpos==S4)
   {
          S4=100;
   }
   else if(fpos==S5)
   {
          S5=100;
   }
   else if(fpos==S6)
   {
          S6=100;
   }
   else if(fpos==S7)
   {
          S7=100;
   }
   else if(fpos==S8)
   {
          S8=100;
   }


}

else
 {
 	 cout<<"INVALID MOVE !!";
	  	j--;
	cout<<endl;
 }


}

   else
   {
   	// condition to check ki aakhri ghar to ni pahucha ,agar pahucha to pyada jo chahe vo bn skta hai
   	//or we can say pyada remove ho jayega aur uski jagah nya jinda hua warrior a jayga

   	if(fpos==57||fpos==58||fpos==59||fpos==60||fpos==61||fpos==62||fpos==63||fpos==64)
   	{
   		//created a function which will replace pyada with revived warrior
         label1:
       check=lasthouse(s1,fpos);
	   if(check==5)
	   {
	   	//to check which elephant is dead and to revive only died warrior
	   	//also to check in case both elephants are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(elephant1==100)
	   	   elephant1=fpos;
	else if(elephant2==100)
	       elephant2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label1;
		   }
		      
	   }
  else if(check==6)
	   {
	   		//to check which horse is dead and to revive only died warrior
	   	//also to check in case both horses are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(horse1==100)
	   	   horse1=fpos;
	else if(horse2==100)
	       horse2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label1;
		   }
		   
	   	
	   }
  else if(check==7)
	   {
	   		//to check which camel is dead and to revive only died warrior
	   	//also to check in case both camels are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(camel1==100)
	   	   camel1=fpos;
	else if(camel2==100)
	       camel2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label1;
		   }
	   }
  else if(check==8)
	   {
	   		// to check wether queen is alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(queen==100)
	   	   queen=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label1;
		   }
	   
}
	}
	else
	{
	s1=fpos;
    }

   }

	   printboard(p1,p2,elephant1,horse1,camel1,king,queen,camel2,horse2,elephant2,s1,s2,s3,s4,s5,s6,s7,s8,hathi1,godha1,uth1,raja,rani,uth2,godha2,hathi2,S1,S2,S3,S4,S5,S6,S7,S8);
}


   else if(ipos==s2)
{

   	//to check wether this move is invalid or not

   if(fpos<=ipos||fpos==elephant1||fpos==horse1||fpos==camel1||fpos==king||fpos==queen||fpos==camel2||fpos==horse2||fpos==elephant2||fpos==s1||fpos==s2||fpos==s3||fpos==s4||fpos==s5||fpos==s6||fpos==s7||fpos==s8)
   {
     cout<<"INVALID MOVE !!";
	  	j--;
	  	cout<<endl;
   }

   //to check wether it is cutting enemy element or not

   else if(fpos==hathi1||fpos==godha1||fpos==uth1||fpos==raja||fpos==rani||fpos==uth2||fpos==godha2||fpos==hathi2||fpos==S1||fpos==S2||fpos==S3||fpos==S4||fpos==S5||fpos==S6||fpos==S7||fpos==S8)
{
     //checking for use of wrong move to cut
	//pyada seedha ni kaat skta mtln ipos and fpos ka diffference 8 ni hna chaiye while cutting
	//differnce ya to ho 7 ya 9 ka

	if(fpos-ipos==9||fpos-ipos==7)
	{

     s2=fpos;

	  	//checking which enemy element is cut and removing it
	  	//jinhe remove krna usme 100 daal do , vo print ni honeka (basically a no. above 64)

	  	if(fpos==hathi1)
	  	{
	  		hathi1=100;
		}
   else if(fpos==godha1)
        {
        	godha1=100;
		}
   else if(fpos==uth1)
   {
            uth1=100;
   }
   else if(fpos==raja)
   {
   	       raja=100;
   }
   else if(fpos==rani)
   {
   	       rani=100;
   }
   else if(fpos==uth2)
   {
   	       uth2=100;
   }
   else if(fpos==godha2)
   {
   	      godha2=100;
   }
   else if(fpos==hathi2)
   {
   	     hathi2=100;
   }
   else if(fpos==S1)
   {
          S1=100;
   }
   else if(fpos==S2)
   {
          S2=100;
   }
   else if(fpos==S3)
   {
          S3=100;
   }
   else if(fpos==S4)
   {
          S4=100;
   }
   else if(fpos==S5)
   {
          S5=100;
   }
   else if(fpos==S6)
   {
          S6=100;
   }
   else if(fpos==S7)
   {
          S7=100;
   }
   else if(fpos==S8)
   {
          S8=100;
   }


}

else
 {
 	 cout<<"INVALID MOVE !!";
	  	j--;
	cout<<endl;
 }


}

   else
   {
   	// condition to check ki aakhri ghar to ni pahucha ,agar pahucha to pyada jo chahe vo bn skta hai
   	//or we can say pyada remove ho jayega aur uski jagah nya jinda hua warrior a jayga

   	if(fpos==57||fpos==58||fpos==59||fpos==60||fpos==61||fpos==62||fpos==63||fpos==64)
   	{
   		//created a function which will replace pyada with revived warrior
            label2:
       check=lasthouse(s2,fpos);
	     if(check==5)
	   {
	   	//to check which elephant is dead and to revive only died warrior
	   	//also to check in case both elephants are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(elephant1==100)
	   	   elephant1=fpos;
	else if(elephant2==100)
	       elephant2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label2;
		   }
	   }
  else if(check==6)
	   {
	   	//to check which horse is dead and to revive only died warrior
	   	//also to check in case both horses are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(horse1==100)
	   	   horse1=fpos;
	else if(horse2==100)
	       horse2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label2;
		   }
	   }
  else if(check==7)
	   {
	   		//to check which camel is dead and to revive only died warrior
	   	//also to check in case both camels are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(camel1==100)
	   	   camel1=fpos;
	else if(camel2==100)
	       camel2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label2;
		   }
	   }
  else if(check==8)
	   {
	   	// to check wether queen is alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(queen==100)
	   	   queen=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label2;
		   }
	   }

	}
	else
	{
	 s2=fpos;
    }

   }

	   printboard(p1,p2,elephant1,horse1,camel1,king,queen,camel2,horse2,elephant2,s1,s2,s3,s4,s5,s6,s7,s8,hathi1,godha1,uth1,raja,rani,uth2,godha2,hathi2,S1,S2,S3,S4,S5,S6,S7,S8);
}

else if(ipos==s3)
{

   	//to check wether this move is invalid or not

   if(fpos<=ipos||fpos==elephant1||fpos==horse1||fpos==camel1||fpos==king||fpos==queen||fpos==camel2||fpos==horse2||fpos==elephant2||fpos==s1||fpos==s2||fpos==s3||fpos==s4||fpos==s5||fpos==s6||fpos==s7||fpos==s8)
   {
     cout<<"INVALID MOVE !!";
	  	j--;
	  	cout<<endl;
   }

   //to check wether it is cutting enemy element or not

   else if(fpos==hathi1||fpos==godha1||fpos==uth1||fpos==raja||fpos==rani||fpos==uth2||fpos==godha2||fpos==hathi2||fpos==S1||fpos==S2||fpos==S3||fpos==S4||fpos==S5||fpos==S6||fpos==S7||fpos==S8)
{
     //checking for use of wrong move to cut
	//pyada seedha ni kaat skta mtln ipos and fpos ka diffference 8 ni hna chaiye while cutting
	//differnce ya to ho 7 ya 9 ka

	if(fpos-ipos==9||fpos-ipos==7)
	{

     s3=fpos;

	  	//checking which enemy element is cut and removing it
	  	//jinhe remove krna usme 100 daal do , vo print ni honeka (basically a no. above 64)

	  	if(fpos==hathi1)
	  	{
	  		hathi1=100;
		}
   else if(fpos==godha1)
        {
        	godha1=100;
		}
   else if(fpos==uth1)
   {
            uth1=100;
   }
   else if(fpos==raja)
   {
   	       raja=100;
   }
   else if(fpos==rani)
   {
   	       rani=100;
   }
   else if(fpos==uth2)
   {
   	       uth2=100;
   }
   else if(fpos==godha2)
   {
   	      godha2=100;
   }
   else if(fpos==hathi2)
   {
   	     hathi2=100;
   }
   else if(fpos==S1)
   {
          S1=100;
   }
   else if(fpos==S2)
   {
          S2=100;
   }
   else if(fpos==S3)
   {
          S3=100;
   }
   else if(fpos==S4)
   {
          S4=100;
   }
   else if(fpos==S5)
   {
          S5=100;
   }
   else if(fpos==S6)
   {
          S6=100;
   }
   else if(fpos==S7)
   {
          S7=100;
   }
   else if(fpos==S8)
   {
          S8=100;
   }


}

else
 {
 	 cout<<"INVALID MOVE !!";
	  	j--;
	cout<<endl;
 }


}

   else
   {
   	// condition to check ki aakhri ghar to ni pahucha ,agar pahucha to pyada jo chahe vo bn skta hai
   	//or we can say pyada remove ho jayega aur uski jagah nya jinda hua warrior a jayga

   	if(fpos==57||fpos==58||fpos==59||fpos==60||fpos==61||fpos==62||fpos==63||fpos==64)
   	{
   		//created a function which will replace pyada with revived warrior
             label3:
       check=lasthouse(s3,fpos);
               if(check==5)
	   {
	   	//to check which elephant is dead and to revive only died warrior
	   	//also to check in case both elephants are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(elephant1==100)
	   	   elephant1=fpos;
	else if(elephant2==100)
	       elephant2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label3;
		   }
	   }
  else if(check==6)
	   {
	   //to check which horse is dead and to revive only died warrior
	   	//also to check in case both horses are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(horse1==100)
	   	   horse1=fpos;
	else if(horse2==100)
	       horse2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label3;
		   }

	   }
  else if(check==7)
	   {
	   	//to check which camel is dead and to revive only died warrior
	   	//also to check in case both camels are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(camel1==100)
	   	   camel1=fpos;
	else if(camel2==100)
	       camel2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label3;
		   }

	   }
  else if(check==8)
	   {
	   	// to check wether queen is alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(queen==100)
	   	   queen=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label3;
		   }
	   }
	}
	else
	{
	 s3=fpos;
    }

   }

	   printboard(p1,p2,elephant1,horse1,camel1,king,queen,camel2,horse2,elephant2,s1,s2,s3,s4,s5,s6,s7,s8,hathi1,godha1,uth1,raja,rani,uth2,godha2,hathi2,S1,S2,S3,S4,S5,S6,S7,S8);
}

else if(ipos==s4)
{

   	//to check wether this move is invalid or not

   if(fpos<=ipos||fpos==elephant1||fpos==horse1||fpos==camel1||fpos==king||fpos==queen||fpos==camel2||fpos==horse2||fpos==elephant2||fpos==s1||fpos==s2||fpos==s3||fpos==s4||fpos==s5||fpos==s6||fpos==s7||fpos==s8)
   {
     cout<<"INVALID MOVE !!";
	  	j--;
	  	cout<<endl;
   }

   //to check wether it is cutting enemy element or not

   else if(fpos==hathi1||fpos==godha1||fpos==uth1||fpos==raja||fpos==rani||fpos==uth2||fpos==godha2||fpos==hathi2||fpos==S1||fpos==S2||fpos==S3||fpos==S4||fpos==S5||fpos==S6||fpos==S7||fpos==S8)
{
     //checking for use of wrong move to cut
	//pyada seedha ni kaat skta mtln ipos and fpos ka diffference 8 ni hna chaiye while cutting
	//differnce ya to ho 7 ya 9 ka

	if(fpos-ipos==9||fpos-ipos==7)
	{

     s4=fpos;

	  	//checking which enemy element is cut and removing it
	  	//jinhe remove krna usme 100 daal do , vo print ni honeka (basically a no. above 64)

	  	if(fpos==hathi1)
	  	{
	  		hathi1=100;
		}
   else if(fpos==godha1)
        {
        	godha1=100;
		}
   else if(fpos==uth1)
   {
            uth1=100;
   }
   else if(fpos==raja)
   {
   	       raja=100;
   }
   else if(fpos==rani)
   {
   	       rani=100;
   }
   else if(fpos==uth2)
   {
   	       uth2=100;
   }
   else if(fpos==godha2)
   {
   	      godha2=100;
   }
   else if(fpos==hathi2)
   {
   	     hathi2=100;
   }
   else if(fpos==S1)
   {
          S1=100;
   }
   else if(fpos==S2)
   {
          S2=100;
   }
   else if(fpos==S3)
   {
          S3=100;
   }
   else if(fpos==S4)
   {
          S4=100;
   }
   else if(fpos==S5)
   {
          S5=100;
   }
   else if(fpos==S6)
   {
          S6=100;
   }
   else if(fpos==S7)
   {
          S7=100;
   }
   else if(fpos==S8)
   {
          S8=100;
   }


}

else
 {
 	 cout<<"INVALID MOVE !!";
	  	j--;
	cout<<endl;
 }


}

   else
   {
   	// condition to check ki aakhri ghar to ni pahucha ,agar pahucha to pyada jo chahe vo bn skta hai
   	//or we can say pyada remove ho jayega aur uski jagah nya jinda hua warrior a jayga

   	if(fpos==57||fpos==58||fpos==59||fpos==60||fpos==61||fpos==62||fpos==63||fpos==64)
   	{
   		//created a function which will replace pyada with revived warrior
            label4:
       check=lasthouse(s4,fpos);
	          if(check==5)
	   {
	   	//to check which elephant is dead and to revive only died warrior
	   	//also to check in case both elephants are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(elephant1==100)
	   	   elephant1=fpos;
	else if(elephant2==100)
	       elephant2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label4;
		   }
	   }
  else if(check==6)
	   {
	   	//to check which horse is dead and to revive only died warrior
	   	//also to check in case both horses are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(horse1==100)
	   	   horse1=fpos;
	else if(horse2==100)
	       horse2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label4;
		   }

	   }
  else if(check==7)
	   {
	   	//to check which camel is dead and to revive only died warrior
	   	//also to check in case both camels are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(camel1==100)
	   	   camel1=fpos;
	else if(camel2==100)
	       camel2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label4;
		   }

	   }
  else if(check==8)
	   {
	   	// to check wether queen is alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(queen==100)
	   	   queen=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label4;
		   }
	   }
	}
	else
	{
	 s4=fpos;
    }

   }

	   printboard(p1,p2,elephant1,horse1,camel1,king,queen,camel2,horse2,elephant2,s1,s2,s3,s4,s5,s6,s7,s8,hathi1,godha1,uth1,raja,rani,uth2,godha2,hathi2,S1,S2,S3,S4,S5,S6,S7,S8);
}

else if(ipos==s5)
{

   	//to check wether this move is invalid or not

   if(fpos<=ipos||fpos==elephant1||fpos==horse1||fpos==camel1||fpos==king||fpos==queen||fpos==camel2||fpos==horse2||fpos==elephant2||fpos==s1||fpos==s2||fpos==s3||fpos==s4||fpos==s5||fpos==s6||fpos==s7||fpos==s8)
   {
     cout<<"INVALID MOVE !!";
	  	j--;
	  	cout<<endl;
   }

   //to check wether it is cutting enemy element or not

   else if(fpos==hathi1||fpos==godha1||fpos==uth1||fpos==raja||fpos==rani||fpos==uth2||fpos==godha2||fpos==hathi2||fpos==S1||fpos==S2||fpos==S3||fpos==S4||fpos==S5||fpos==S6||fpos==S7||fpos==S8)
{
     //checking for use of wrong move to cut
	//pyada seedha ni kaat skta mtln ipos and fpos ka diffference 8 ni hna chaiye while cutting
	//differnce ya to ho 7 ya 9 ka

	if(fpos-ipos==9||fpos-ipos==7)
	{

     s5=fpos;

	  	//checking which enemy element is cut and removing it
	  	//jinhe remove krna usme 100 daal do , vo print ni honeka (basically a no. above 64)

	  	if(fpos==hathi1)
	  	{
	  		hathi1=100;
		}
   else if(fpos==godha1)
        {
        	godha1=100;
		}
   else if(fpos==uth1)
   {
            uth1=100;
   }
   else if(fpos==raja)
   {
   	       raja=100;
   }
   else if(fpos==rani)
   {
   	       rani=100;
   }
   else if(fpos==uth2)
   {
   	       uth2=100;
   }
   else if(fpos==godha2)
   {
   	      godha2=100;
   }
   else if(fpos==hathi2)
   {
   	     hathi2=100;
   }
   else if(fpos==S1)
   {
          S1=100;
   }
   else if(fpos==S2)
   {
          S2=100;
   }
   else if(fpos==S3)
   {
          S3=100;
   }
   else if(fpos==S4)
   {
          S4=100;
   }
   else if(fpos==S5)
   {
          S5=100;
   }
   else if(fpos==S6)
   {
          S6=100;
   }
   else if(fpos==S7)
   {
          S7=100;
   }
   else if(fpos==S8)
   {
          S8=100;
   }


}

else
 {
 	 cout<<"INVALID MOVE !!";
	  	j--;
	cout<<endl;
 }


}

   else
   {
   	// condition to check ki aakhri ghar to ni pahucha ,agar pahucha to pyada jo chahe vo bn skta hai
   	//or we can say pyada remove ho jayega aur uski jagah nya jinda hua warrior a jayga

   	if(fpos==57||fpos==58||fpos==59||fpos==60||fpos==61||fpos==62||fpos==63||fpos==64)
   	{
   		//created a function which will replace pyada with revived warrior
          label5:
       check=lasthouse(s5,fpos);
	     if(check==5)
	   {
	   	//to check which elephant is dead and to revive only died warrior
	   	//also to check in case both elephants are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(elephant1==100)
	   	   elephant1=fpos;
	else if(elephant2==100)
	       elephant2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label5;
		   }

	   }
  else if(check==6)
	   {
	   	//to check which horse is dead and to revive only died warrior
	   	//also to check in case both horses are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(horse1==100)
	   	   horse1=fpos;
	else if(horse2==100)
	       horse2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label5;
		   }
	   }
  else if(check==7)
	   {
	   	//to check which camel is dead and to revive only died warrior
	   	//also to check in case both camels are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(camel1==100)
	   	   camel1=fpos;
	else if(camel2==100)
	       camel2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label5;
		   }
	   }
  else if(check==8)
	   {
	   	// to check wether queen is alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(queen==100)
	   	   queen=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label5;
		   }

	   }
	}
	else
	{
	 s5=fpos;
    }

   }

	   printboard(p1,p2,elephant1,horse1,camel1,king,queen,camel2,horse2,elephant2,s1,s2,s3,s4,s5,s6,s7,s8,hathi1,godha1,uth1,raja,rani,uth2,godha2,hathi2,S1,S2,S3,S4,S5,S6,S7,S8);
}

else if(ipos==s6)
{

   	//to check wether this move is invalid or not

   if(fpos<=ipos||fpos==elephant1||fpos==horse1||fpos==camel1||fpos==king||fpos==queen||fpos==camel2||fpos==horse2||fpos==elephant2||fpos==s1||fpos==s2||fpos==s3||fpos==s4||fpos==s5||fpos==s6||fpos==s7||fpos==s8)
   {
     cout<<"INVALID MOVE !!";
	  	j--;
	  	cout<<endl;
   }

   //to check wether it is cutting enemy element or not

   else if(fpos==hathi1||fpos==godha1||fpos==uth1||fpos==raja||fpos==rani||fpos==uth2||fpos==godha2||fpos==hathi2||fpos==S1||fpos==S2||fpos==S3||fpos==S4||fpos==S5||fpos==S6||fpos==S7||fpos==S8)
{
     //checking for use of wrong move to cut
	//pyada seedha ni kaat skta mtln ipos and fpos ka diffference 8 ni hna chaiye while cutting
	//differnce ya to ho 7 ya 9 ka

	if(fpos-ipos==9||fpos-ipos==7)
	{

     s6=fpos;

	  	//checking which enemy element is cut and removing it
	  	//jinhe remove krna usme 100 daal do , vo print ni honeka (basically a no. above 64)

	  	if(fpos==hathi1)
	  	{
	  		hathi1=100;
		}
   else if(fpos==godha1)
        {
        	godha1=100;
		}
   else if(fpos==uth1)
   {
            uth1=100;
   }
   else if(fpos==raja)
   {
   	       raja=100;
   }
   else if(fpos==rani)
   {
   	       rani=100;
   }
   else if(fpos==uth2)
   {
   	       uth2=100;
   }
   else if(fpos==godha2)
   {
   	      godha2=100;
   }
   else if(fpos==hathi2)
   {
   	     hathi2=100;
   }
   else if(fpos==S1)
   {
          S1=100;
   }
   else if(fpos==S2)
   {
          S2=100;
   }
   else if(fpos==S3)
   {
          S3=100;
   }
   else if(fpos==S4)
   {
          S4=100;
   }
   else if(fpos==S5)
   {
          S5=100;
   }
   else if(fpos==S6)
   {
          S6=100;
   }
   else if(fpos==S7)
   {
          S7=100;
   }
   else if(fpos==S8)
   {
          S8=100;
   }


}

else
 {
 	 cout<<"INVALID MOVE !!";
	  	j--;
	cout<<endl;
 }


}

   else
   {
   	// condition to check ki aakhri ghar to ni pahucha ,agar pahucha to pyada jo chahe vo bn skta hai
   	//or we can say pyada remove ho jayega aur uski jagah nya jinda hua warrior a jayga

   	if(fpos==57||fpos==58||fpos==59||fpos==60||fpos==61||fpos==62||fpos==63||fpos==64)
   	{
   		//created a function which will replace pyada with revived warrior
          label6:
       check=lasthouse(s6,fpos);
	     if(check==5)
	   {
	   	//to check which elephant is dead and to revive only died warrior
	   	//also to check in case both elephants are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(elephant1==100)
	   	   elephant1=fpos;
	else if(elephant2==100)
	       elephant2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label6;
		   }

	   }
  else if(check==6)
	   {
	   	//to check which horse is dead and to revive only died warrior
	   	//also to check in case both horses are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(horse1==100)
	   	   horse1=fpos;
	else if(horse2==100)
	       horse2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label6;
		   }

	   }
  else if(check==7)
	   {
	   		//to check which camel is dead and to revive only died warrior
	   	//also to check in case both camels are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(camel1==100)
	   	   camel1=fpos;
	else if(camel2==100)
	       camel2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label6;
		   }

	   }
  else if(check==8)
	   {
	   	
// to check wether queen is alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(queen==100)
	   	   queen=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label6;
		   }
	   }
	}
	else
	{
	 s6=fpos;
    }

   }

	   printboard(p1,p2,elephant1,horse1,camel1,king,queen,camel2,horse2,elephant2,s1,s2,s3,s4,s5,s6,s7,s8,hathi1,godha1,uth1,raja,rani,uth2,godha2,hathi2,S1,S2,S3,S4,S5,S6,S7,S8);
}

   else if(ipos==s7)
{

   	//to check wether this move is invalid or not

   if(fpos<=ipos||fpos==elephant1||fpos==horse1||fpos==camel1||fpos==king||fpos==queen||fpos==camel2||fpos==horse2||fpos==elephant2||fpos==s1||fpos==s2||fpos==s3||fpos==s4||fpos==s5||fpos==s6||fpos==s7||fpos==s8)
   {
     cout<<"INVALID MOVE !!";
	  	j--;
	  	cout<<endl;
   }

   //to check wether it is cutting enemy element or not

   else if(fpos==hathi1||fpos==godha1||fpos==uth1||fpos==raja||fpos==rani||fpos==uth2||fpos==godha2||fpos==hathi2||fpos==S1||fpos==S2||fpos==S3||fpos==S4||fpos==S5||fpos==S6||fpos==S7||fpos==S8)
{
    //checking for use of wrong move to cut
	//pyada seedha ni kaat skta mtln ipos and fpos ka diffference 8 ni hna chaiye while cutting
	//differnce ya to ho 7 ya 9 ka

	if(fpos-ipos==9||fpos-ipos==7)
	{

     s7=fpos;

	  	//checking which enemy element is cut and removing it
	  	//jinhe remove krna usme 100 daal do , vo print ni honeka (basically a no. above 64)

	  	if(fpos==hathi1)
	  	{
	  		hathi1=100;
		}
   else if(fpos==godha1)
        {
        	godha1=100;
		}
   else if(fpos==uth1)
   {
            uth1=100;
   }
   else if(fpos==raja)
   {
   	       raja=100;
   }
   else if(fpos==rani)
   {
   	       rani=100;
   }
   else if(fpos==uth2)
   {
   	       uth2=100;
   }
   else if(fpos==godha2)
   {
   	      godha2=100;
   }
   else if(fpos==hathi2)
   {
   	     hathi2=100;
   }
   else if(fpos==S1)
   {
          S1=100;
   }
   else if(fpos==S2)
   {
          S2=100;
   }
   else if(fpos==S3)
   {
          S3=100;
   }
   else if(fpos==S4)
   {
          S4=100;
   }
   else if(fpos==S5)
   {
          S5=100;
   }
   else if(fpos==S6)
   {
          S6=100;
   }
   else if(fpos==S7)
   {
          S7=100;
   }
   else if(fpos==S8)
   {
          S8=100;
   }


}

else
 {
 	 cout<<"INVALID MOVE !!";
	  	j--;
	cout<<endl;
 }

}

   else
   {
   	// condition to check ki aakhri ghar to ni pahucha ,agar pahucha to pyada jo chahe vo bn skta hai
   	//or we can say pyada remove ho jayega aur uski jagah nya jinda hua warrior a jayga

   	if(fpos==57||fpos==58||fpos==59||fpos==60||fpos==61||fpos==62||fpos==63||fpos==64)
   	{
   		//created a function which will replace pyada with revived warrior
            label7:
       check=lasthouse(s7,fpos);
	     if(check==5)
	   {
	   	//to check which elephant is dead and to revive only died warrior
	   	//also to check in case both elephants are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(elephant1==100)
	   	   elephant1=fpos;
	else if(elephant2==100)
	       elephant2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label7;
		   }
	   }
  else if(check==6)
	   {
	   	//to check which horse is dead and to revive only died warrior
	   	//also to check in case both horses are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(horse1==100)
	   	   horse1=fpos;
	else if(horse2==100)
	       horse2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label7;
		   }

	   }
  else if(check==7)
	   {
	   	//to check which camel is dead and to revive only died warrior
	   	//also to check in case both camels are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(camel1==100)
	   	   camel1=fpos;
	else if(camel2==100)
	       camel2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label7;
		   }

	   }
  else if(check==8)
	   {
	   	// to check wether queen is alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(queen==100)
	   	   queen=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label7;
		   }
	   }
	}
	else
	{
	 s7=fpos;
    }

   }

	   printboard(p1,p2,elephant1,horse1,camel1,king,queen,camel2,horse2,elephant2,s1,s2,s3,s4,s5,s6,s7,s8,hathi1,godha1,uth1,raja,rani,uth2,godha2,hathi2,S1,S2,S3,S4,S5,S6,S7,S8);
}

else if(ipos==s8)
{

   	//to check wether this move is invalid or not

   if(fpos<=ipos||fpos==elephant1||fpos==horse1||fpos==camel1||fpos==king||fpos==queen||fpos==camel2||fpos==horse2||fpos==elephant2||fpos==s1||fpos==s2||fpos==s3||fpos==s4||fpos==s5||fpos==s6||fpos==s7||fpos==s8)
   {
     cout<<"INVALID MOVE !!";
	  	j--;
	  	cout<<endl;
   }

   //to check wether it is cutting enemy element or not

   else if(fpos==hathi1||fpos==godha1||fpos==uth1||fpos==raja||fpos==rani||fpos==uth2||fpos==godha2||fpos==hathi2||fpos==S1||fpos==S2||fpos==S3||fpos==S4||fpos==S5||fpos==S6||fpos==S7||fpos==S8)
{
     //checking for use of wrong move to cut
	//pyada seedha ni kaat skta mtln ipos and fpos ka diffference 8 ni hna chaiye while cutting
	//differnce ya to ho 7 ya 9 ka

	if(fpos-ipos==9||fpos-ipos==7)
	{

     s8=fpos;

	  	//checking which enemy element is cut and removing it
	  	//jinhe remove krna usme 100 daal do , vo print ni honeka (basically a no. above 64)

	  	if(fpos==hathi1)
	  	{
	  		hathi1=100;
		}
   else if(fpos==godha1)
        {
        	godha1=100;
		}
   else if(fpos==uth1)
   {
            uth1=100;
   }
   else if(fpos==raja)
   {
   	       raja=100;
   }
   else if(fpos==rani)
   {
   	       rani=100;
   }
   else if(fpos==uth2)
   {
   	       uth2=100;
   }
   else if(fpos==godha2)
   {
   	      godha2=100;
   }
   else if(fpos==hathi2)
   {
   	     hathi2=100;
   }
   else if(fpos==S1)
   {
          S1=100;
   }
   else if(fpos==S2)
   {
          S2=100;
   }
   else if(fpos==S3)
   {
          S3=100;
   }
   else if(fpos==S4)
   {
          S4=100;
   }
   else if(fpos==S5)
   {
          S5=100;
   }
   else if(fpos==S6)
   {
          S6=100;
   }
   else if(fpos==S7)
   {
          S7=100;
   }
   else if(fpos==S8)
   {
          S8=100;
   }


}

else
 {
 	 cout<<"INVALID MOVE !!";
	  	j--;
	cout<<endl;
 }

}

   else
   {
   	// condition to check ki aakhri ghar to ni pahucha ,agar pahucha to pyada jo chahe vo bn skta hai
   	//or we can say pyada remove ho jayega aur uski jagah nya jinda hua warrior a jayga

   	if(fpos==57||fpos==58||fpos==59||fpos==60||fpos==61||fpos==62||fpos==63||fpos==64)
   	{
   		//created a function which will replace pyada with revived warrior
            label8:
       check=lasthouse(s8,fpos);
	     if(check==5)
	   {
	   //to check which elephant is dead and to revive only died warrior
	   	//also to check in case both elephants are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(elephant1==100)
	   	   elephant1=fpos;
	else if(elephant2==100)
	       elephant2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label8;
		   }
	   }
  else if(check==6)
	   {
	   	//to check which horse is dead and to revive only died warrior
	   	//also to check in case both horses are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(horse1==100)
	   	   horse1=fpos;
	else if(horse2==100)
	       horse2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label8;
		   }


	   }
  else if(check==7)
	   {
	   	//to check which camel is dead and to revive only died warrior
	   	//also to check in case both camels are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(camel1==100)
	   	   camel1=fpos;
	else if(camel2==100)
	       camel2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label8;
		   }

	   }
  else if(check==8)
	   {
	   	
// to check wether queen is alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(queen==100)
	   	   queen=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label8;
		   }

	   }
	}
	else
	{
	 s8=fpos;
    }

   }

	   printboard(p1,p2,elephant1,horse1,camel1,king,queen,camel2,horse2,elephant2,s1,s2,s3,s4,s5,s6,s7,s8,hathi1,godha1,uth1,raja,rani,uth2,godha2,hathi2,S1,S2,S3,S4,S5,S6,S7,S8);
}

else if(ipos==hathi1)
{

   	//to check wether this move is invalid or not
if(ipos-fpos==8||fpos-ipos==8||ipos-fpos==16||fpos-ipos==16||ipos-fpos==24||fpos-ipos==24||ipos-fpos==32||fpos-ipos==32||ipos-fpos==40||fpos-ipos==40||ipos-fpos==48||fpos-ipos==48||ipos-fpos==56||fpos-ipos==56||ipos-fpos==1||fpos-ipos==1||ipos-fpos==2||fpos-ipos==2||ipos-fpos==3||fpos-ipos==3||ipos-fpos==4||fpos-ipos==4||ipos-fpos==5||fpos-ipos==5||ipos-fpos==6||fpos-ipos==6||ipos-fpos==7||fpos-ipos==7)
{


   if(fpos==hathi1||fpos==godha1||fpos==uth1||fpos==raja||fpos==rani||fpos==uth2||fpos==godha2||fpos==hathi2||fpos==S1||fpos==S2||fpos==S3||fpos==S4||fpos==S5||fpos==S6||fpos==S7||fpos==S8)
   {
     cout<<"INVALID MOVE !!";
	  	j--;
	  	cout<<endl;
   }

   //to check wether it is cutting enemy element or not

   else if(fpos==elephant1||fpos==horse1||fpos==camel1||fpos==king||fpos==queen||fpos==camel2||fpos==horse2||fpos==elephant2||fpos==s1||fpos==s2||fpos==s3||fpos==s4||fpos==s5||fpos==s6||fpos==s7||fpos==s8)
{
     hathi1=fpos;

	  	//checking which enemy element is cut and removing it
	  	//jinhe remove krna usme 100 daal do , vo print ni honeka (basically a no. above 64)

	  	if(fpos==elephant1)
	  	{
	  		elephant1=100;
		}
   else if(fpos==horse1)
        {
        	horse1=100;
		}
   else if(fpos==camel1)
   {
            camel1=100;
   }
   else if(fpos==king)
   {
   	       king=100;
   }
   else if(fpos==queen)
   {
   	       queen=100;
   }
   else if(fpos==camel2)
   {
   	       camel2=100;
   }
   else if(fpos==horse2)
   {
   	      horse2=100;
   }
   else if(fpos==elephant2)
   {
   	     elephant2=100;
   }
   else if(fpos==s1)
   {
          s1=100;
   }
   else if(fpos==s2)
   {
          s2=100;
   }
   else if(fpos==s3)
   {
          s3=100;
   }
   else if(fpos==s4)
   {
          s4=100;
   }
   else if(fpos==s5)
   {
          s5=100;
   }
   else if(fpos==s6)
   {
          s6=100;
   }
   else if(fpos==s7)
   {
          s7=100;
   }
   else if(fpos==s8)
   {
          s8=100;
   }

}

   else
   {
   	hathi1=fpos;
   }

	   printboard(p1,p2,elephant1,horse1,camel1,king,queen,camel2,horse2,elephant2,s1,s2,s3,s4,s5,s6,s7,s8,hathi1,godha1,uth1,raja,rani,uth2,godha2,hathi2,S1,S2,S3,S4,S5,S6,S7,S8);

}
else
{
	cout<<endl;
	cout<<"INVALID MOVE!! TRY AGAIN :)"<<endl;
	j--;
}



}

else if(ipos==godha1)
{

   	//to check wether this move is invalid or not
if(ipos-fpos==17||fpos-ipos==17||ipos-fpos==15||fpos-ipos==15||ipos-fpos==10||fpos-ipos==10||ipos-fpos==6||fpos-ipos==6)
{


   if(fpos==hathi1||fpos==godha1||fpos==uth1||fpos==raja||fpos==rani||fpos==uth2||fpos==godha2||fpos==hathi2||fpos==S1||fpos==S2||fpos==S3||fpos==S4||fpos==S5||fpos==S6||fpos==S7||fpos==S8)
   {
     cout<<"INVALID MOVE !!";
	  	j--;
	  	cout<<endl;
   }

   //to check wether it is cutting enemy element or not

   else if(fpos==elephant1||fpos==horse1||fpos==camel1||fpos==king||fpos==queen||fpos==camel2||fpos==horse2||fpos==elephant2||fpos==s1||fpos==s2||fpos==s3||fpos==s4||fpos==s5||fpos==s6||fpos==s7||fpos==s8)
{
     godha1=fpos;

	  	//checking which enemy element is cut and removing it
	  	//jinhe remove krna usme 100 daal do , vo print ni honeka (basically a no. above 64)

	  	if(fpos==elephant1)
	  	{
	  		elephant1=100;
		}
   else if(fpos==horse1)
        {
        	horse1=100;
		}
   else if(fpos==camel1)
   {
            camel1=100;
   }
   else if(fpos==king)
   {
   	       king=100;
   }
   else if(fpos==queen)
   {
   	       queen=100;
   }
   else if(fpos==camel2)
   {
   	       camel2=100;
   }
   else if(fpos==horse2)
   {
   	      horse2=100;
   }
   else if(fpos==elephant2)
   {
   	     elephant2=100;
   }
   else if(fpos==s1)
   {
          s1=100;
   }
   else if(fpos==s2)
   {
          s2=100;
   }
   else if(fpos==s3)
   {
          s3=100;
   }
   else if(fpos==s4)
   {
          s4=100;
   }
   else if(fpos==s5)
   {
          s5=100;
   }
   else if(fpos==s6)
   {
          s6=100;
   }
   else if(fpos==s7)
   {
          s7=100;
   }
   else if(fpos==s8)
   {
          s8=100;
   }

}

   else
   {
   	godha1=fpos;
   }

	   printboard(p1,p2,elephant1,horse1,camel1,king,queen,camel2,horse2,elephant2,s1,s2,s3,s4,s5,s6,s7,s8,hathi1,godha1,uth1,raja,rani,uth2,godha2,hathi2,S1,S2,S3,S4,S5,S6,S7,S8);

}
    else
     {
        cout<<endl;
		cout<<"INVALID MOVE!! TRY AGAIN :)"<<endl;
		j--;	
	 }
	 
	 
}

else if(ipos==uth1)
{

   	//to check wether this move is invalid or not
if(ipos-fpos==9||fpos-ipos==9||ipos-fpos==18||fpos-ipos==18||ipos-fpos==27||fpos-ipos==27||ipos-fpos==36||fpos-ipos==36||ipos-fpos==45||fpos-ipos==45||ipos-fpos==54||fpos-ipos==54||ipos-fpos==63||fpos-ipos==63||ipos-fpos==7||fpos-ipos==7||ipos-fpos==14||fpos-ipos==14||ipos-fpos==21||fpos-ipos==21||ipos-fpos==28||fpos-ipos==28||ipos-fpos==35||fpos-ipos==35||ipos-fpos==42||fpos-ipos==42||ipos-fpos==49||fpos-ipos==49)
{
	

   if(fpos==hathi1||fpos==godha1||fpos==uth1||fpos==raja||fpos==rani||fpos==uth2||fpos==godha2||fpos==hathi2||fpos==S1||fpos==S2||fpos==S3||fpos==S4||fpos==S5||fpos==S6||fpos==S7||fpos==S8)
   {
     cout<<"INVALID MOVE !!";
	  	j--;
	  	cout<<endl;
   }

   //to check wether it is cutting enemy element or not

   else if(fpos==elephant1||fpos==horse1||fpos==camel1||fpos==king||fpos==queen||fpos==camel2||fpos==horse2||fpos==elephant2||fpos==s1||fpos==s2||fpos==s3||fpos==s4||fpos==s5||fpos==s6||fpos==s7||fpos==s8)
{
     uth1=fpos;

	  	//checking which enemy element is cut and removing it
	  	//jinhe remove krna usme 100 daal do , vo print ni honeka (basically a no. above 64)

	  	if(fpos==elephant1)
	  	{
	  		elephant1=100;
		}
   else if(fpos==horse1)
        {
        	horse1=100;
		}
   else if(fpos==camel1)
   {
            camel1=100;
   }
   else if(fpos==king)
   {
   	       king=100;
   }
   else if(fpos==queen)
   {
   	       queen=100;
   }
   else if(fpos==camel2)
   {
   	       camel2=100;
   }
   else if(fpos==horse2)
   {
   	      horse2=100;
   }
   else if(fpos==elephant2)
   {
   	     elephant2=100;
   }
   else if(fpos==s1)
   {
          s1=100;
   }
   else if(fpos==s2)
   {
          s2=100;
   }
   else if(fpos==s3)
   {
          s3=100;
   }
   else if(fpos==s4)
   {
          s4=100;
   }
   else if(fpos==s5)
   {
          s5=100;
   }
   else if(fpos==s6)
   {
          s6=100;
   }
   else if(fpos==s7)
   {
          s7=100;
   }
   else if(fpos==s8)
   {
          s8=100;
   }

}

   else
   {
   	uth1=fpos;
   }

	   printboard(p1,p2,elephant1,horse1,camel1,king,queen,camel2,horse2,elephant2,s1,s2,s3,s4,s5,s6,s7,s8,hathi1,godha1,uth1,raja,rani,uth2,godha2,hathi2,S1,S2,S3,S4,S5,S6,S7,S8);

}
   else
   {
   	cout<<endl;
   	cout<<"INVALID MOVE!! TRY AGAIN :)"<<endl;
   	j--;
   }



}

else if(ipos==raja)
{

   	//to check wether this move is invalid or not
if(ipos-fpos==8||fpos-ipos==8||ipos-fpos==9||fpos-ipos==9||ipos-fpos==7||fpos-ipos==7||ipos-fpos==1||fpos-ipos==1)
   {
   	
   
   if(fpos==hathi1||fpos==godha1||fpos==uth1||fpos==raja||fpos==rani||fpos==uth2||fpos==godha2||fpos==hathi2||fpos==S1||fpos==S2||fpos==S3||fpos==S4||fpos==S5||fpos==S6||fpos==S7||fpos==S8)
   {
     cout<<"INVALID MOVE !!";
	  	j--;
	  	cout<<endl;
   }

   //to check wether it is cutting enemy element or not

   else if(fpos==elephant1||fpos==horse1||fpos==camel1||fpos==king||fpos==queen||fpos==camel2||fpos==horse2||fpos==elephant2||fpos==s1||fpos==s2||fpos==s3||fpos==s4||fpos==s5||fpos==s6||fpos==s7||fpos==s8)
{
     raja=fpos;

	  	//checking which enemy element is cut and removing it
	  	//jinhe remove krna usme 100 daal do , vo print ni honeka (basically a no. above 64)

	  	if(fpos==elephant1)
	  	{
	  		elephant1=100;
		}
   else if(fpos==horse1)
        {
        	horse1=100;
		}
   else if(fpos==camel1)
   {
            camel1=100;
   }
   else if(fpos==king)
   {
   	       king=100;
   }
   else if(fpos==queen)
   {
   	       queen=100;
   }
   else if(fpos==camel2)
   {
   	       camel2=100;
   }
   else if(fpos==horse2)
   {
   	      horse2=100;
   }
   else if(fpos==elephant2)
   {
   	     elephant2=100;
   }
   else if(fpos==s1)
   {
          s1=100;
   }
   else if(fpos==s2)
   {
          s2=100;
   }
   else if(fpos==s3)
   {
          s3=100;
   }
   else if(fpos==s4)
   {
          s4=100;
   }
   else if(fpos==s5)
   {
          s5=100;
   }
   else if(fpos==s6)
   {
          s6=100;
   }
   else if(fpos==s7)
   {
          s7=100;
   }
   else if(fpos==s8)
   {
          s8=100;
   }

}

   else
   {
   	raja=fpos;
   }

	   printboard(p1,p2,elephant1,horse1,camel1,king,queen,camel2,horse2,elephant2,s1,s2,s3,s4,s5,s6,s7,s8,hathi1,godha1,uth1,raja,rani,uth2,godha2,hathi2,S1,S2,S3,S4,S5,S6,S7,S8);


}
   else
   {
   	cout<<endl;
   	cout<<"INVALID MOVE!! TRY AGAIN :)"<<endl;
   	j--;
   }





}

else if(ipos==rani)
{

   	//to check wether this move is invalid or not
if(ipos-fpos==8||fpos-ipos==8||ipos-fpos==16||fpos-ipos==16||ipos-fpos==24||fpos-ipos==24||ipos-fpos==32||fpos-ipos==32||ipos-fpos==40||fpos-ipos==40||ipos-fpos==48||fpos-ipos==48||ipos-fpos==56||fpos-ipos==56||ipos-fpos==1||fpos-ipos==1||ipos-fpos==2||fpos-ipos==2||ipos-fpos==3||fpos-ipos==3||ipos-fpos==4||fpos-ipos==4||ipos-fpos==5||fpos-ipos==5||ipos-fpos==6||fpos-ipos==6||ipos-fpos==7||fpos-ipos==7||ipos-fpos==9||fpos-ipos==9||ipos-fpos==18||fpos-ipos==18||ipos-fpos==27||fpos-ipos==27||ipos-fpos==36||fpos-ipos==36||ipos-fpos==45||fpos-ipos==45||ipos-fpos==54||fpos-ipos==54||ipos-fpos==63||fpos-ipos==63||ipos-fpos==7||fpos-ipos==7||ipos-fpos==14||fpos-ipos==14||ipos-fpos==21||fpos-ipos==21||ipos-fpos==28||fpos-ipos==28||ipos-fpos==35||fpos-ipos==35||ipos-fpos==42||fpos-ipos==42||ipos-fpos==49||fpos-ipos==49)
{


   if(fpos==hathi1||fpos==godha1||fpos==uth1||fpos==raja||fpos==rani||fpos==uth2||fpos==godha2||fpos==hathi2||fpos==S1||fpos==S2||fpos==S3||fpos==S4||fpos==S5||fpos==S6||fpos==S7||fpos==S8)
   {
     cout<<"INVALID MOVE !!";
	  	j--;
	  	cout<<endl;
   }

   //to check wether it is cutting enemy element or not

   else if(fpos==elephant1||fpos==horse1||fpos==camel1||fpos==king||fpos==queen||fpos==camel2||fpos==horse2||fpos==elephant2||fpos==s1||fpos==s2||fpos==s3||fpos==s4||fpos==s5||fpos==s6||fpos==s7||fpos==s8)
{
     rani=fpos;

	  	//checking which enemy element is cut and removing it
	  	//jinhe remove krna usme 100 daal do , vo print ni honeka (basically a no. above 64)

	  	if(fpos==elephant1)
	  	{
	  		elephant1=100;
		}
   else if(fpos==horse1)
        {
        	horse1=100;
		}
   else if(fpos==camel1)
   {
            camel1=100;
   }
   else if(fpos==king)
   {
   	       king=100;
   }
   else if(fpos==queen)
   {
   	       queen=100;
   }
   else if(fpos==camel2)
   {
   	       camel2=100;
   }
   else if(fpos==horse2)
   {
   	      horse2=100;
   }
   else if(fpos==elephant2)
   {
   	     elephant2=100;
   }
   else if(fpos==s1)
   {
          s1=100;
   }
   else if(fpos==s2)
   {
          s2=100;
   }
   else if(fpos==s3)
   {
          s3=100;
   }
   else if(fpos==s4)
   {
          s4=100;
   }
   else if(fpos==s5)
   {
          s5=100;
   }
   else if(fpos==s6)
   {
          s6=100;
   }
   else if(fpos==s7)
   {
          s7=100;
   }
   else if(fpos==s8)
   {
          s8=100;
   }

}

   else
   {
   	rani=fpos;
   }

	   printboard(p1,p2,elephant1,horse1,camel1,king,queen,camel2,horse2,elephant2,s1,s2,s3,s4,s5,s6,s7,s8,hathi1,godha1,uth1,raja,rani,uth2,godha2,hathi2,S1,S2,S3,S4,S5,S6,S7,S8);

}
   else
   {
   	cout<<endl;
   	cout<<"INVALID MOVE!! TRY AGAIN :)"<<endl;
   	j--;
   }



}

else if(ipos==uth2)
{

   	//to check wether this move is invalid or not
if(ipos-fpos==9||fpos-ipos==9||ipos-fpos==18||fpos-ipos==18||ipos-fpos==27||fpos-ipos==27||ipos-fpos==36||fpos-ipos==36||ipos-fpos==45||fpos-ipos==45||ipos-fpos==54||fpos-ipos==54||ipos-fpos==63||fpos-ipos==63||ipos-fpos==7||fpos-ipos==7||ipos-fpos==14||fpos-ipos==14||ipos-fpos==21||fpos-ipos==21||ipos-fpos==28||fpos-ipos==28||ipos-fpos==35||fpos-ipos==35||ipos-fpos==42||fpos-ipos==42||ipos-fpos==49||fpos-ipos==49)
{
	

   if(fpos==hathi1||fpos==godha1||fpos==uth1||fpos==raja||fpos==rani||fpos==uth2||fpos==godha2||fpos==hathi2||fpos==S1||fpos==S2||fpos==S3||fpos==S4||fpos==S5||fpos==S6||fpos==S7||fpos==S8)
   {
     cout<<"INVALID MOVE !!";
	  	j--;
	  	cout<<endl;
   }

   //to check wether it is cutting enemy element or not

   else if(fpos==elephant1||fpos==horse1||fpos==camel1||fpos==king||fpos==queen||fpos==camel2||fpos==horse2||fpos==elephant2||fpos==s1||fpos==s2||fpos==s3||fpos==s4||fpos==s5||fpos==s6||fpos==s7||fpos==s8)
{
     uth2=fpos;

	  	//checking which enemy element is cut and removing it
	  	//jinhe remove krna usme 100 daal do , vo print ni honeka (basically a no. above 64)

	  	if(fpos==elephant1)
	  	{
	  		elephant1=100;
		}
   else if(fpos==horse1)
        {
        	horse1=100;
		}
   else if(fpos==camel1)
   {
            camel1=100;
   }
   else if(fpos==king)
   {
   	       king=100;
   }
   else if(fpos==queen)
   {
   	       queen=100;
   }
   else if(fpos==camel2)
   {
   	       camel2=100;
   }
   else if(fpos==horse2)
   {
   	      horse2=100;
   }
   else if(fpos==elephant2)
   {
   	     elephant2=100;
   }
   else if(fpos==s1)
   {
          s1=100;
   }
   else if(fpos==s2)
   {
          s2=100;
   }
   else if(fpos==s3)
   {
          s3=100;
   }
   else if(fpos==s4)
   {
          s4=100;
   }
   else if(fpos==s5)
   {
          s5=100;
   }
   else if(fpos==s6)
   {
          s6=100;
   }
   else if(fpos==s7)
   {
          s7=100;
   }
   else if(fpos==s8)
   {
          s8=100;
   }

}

   else
   {
   	uth2=fpos;
   }

	   printboard(p1,p2,elephant1,horse1,camel1,king,queen,camel2,horse2,elephant2,s1,s2,s3,s4,s5,s6,s7,s8,hathi1,godha1,uth1,raja,rani,uth2,godha2,hathi2,S1,S2,S3,S4,S5,S6,S7,S8);

}
  else
  {
  	cout<<endl;
  	cout<<"INVALID MOVE!! TRY AGAIN :)"<<endl;
  	j--;
  }


}

else if(ipos==godha2)
{

   	//to check wether this move is invalid or not
if(ipos-fpos==17||fpos-ipos==17||ipos-fpos==15||fpos-ipos==15||ipos-fpos==10||fpos-ipos==10||ipos-fpos==6||fpos-ipos==6)
{
	

   if(fpos==hathi1||fpos==godha1||fpos==uth1||fpos==raja||fpos==rani||fpos==uth2||fpos==godha2||fpos==hathi2||fpos==S1||fpos==S2||fpos==S3||fpos==S4||fpos==S5||fpos==S6||fpos==S7||fpos==S8)
   {
     cout<<"INVALID MOVE !!";
	  	j--;
	  	cout<<endl;
   }

   //to check wether it is cutting enemy element or not

   else if(fpos==elephant1||fpos==horse1||fpos==camel1||fpos==king||fpos==queen||fpos==camel2||fpos==horse2||fpos==elephant2||fpos==s1||fpos==s2||fpos==s3||fpos==s4||fpos==s5||fpos==s6||fpos==s7||fpos==s8)
{
     godha2=fpos;

	  	//checking which enemy element is cut and removing it
	  	//jinhe remove krna usme 100 daal do , vo print ni honeka (basically a no. above 64)

	  	if(fpos==elephant1)
	  	{
	  		elephant1=100;
		}
   else if(fpos==horse1)
        {
        	horse1=100;
		}
   else if(fpos==camel1)
   {
            camel1=100;
   }
   else if(fpos==king)
   {
   	       king=100;
   }
   else if(fpos==queen)
   {
   	       queen=100;
   }
   else if(fpos==camel2)
   {
   	       camel2=100;
   }
   else if(fpos==horse2)
   {
   	      horse2=100;
   }
   else if(fpos==elephant2)
   {
   	     elephant2=100;
   }
   else if(fpos==s1)
   {
          s1=100;
   }
   else if(fpos==s2)
   {
          s2=100;
   }
   else if(fpos==s3)
   {
          s3=100;
   }
   else if(fpos==s4)
   {
          s4=100;
   }
   else if(fpos==s5)
   {
          s5=100;
   }
   else if(fpos==s6)
   {
          s6=100;
   }
   else if(fpos==s7)
   {
          s7=100;
   }
   else if(fpos==s8)
   {
          s8=100;
   }

}

   else
   {
   	godha2=fpos;
   }

	   printboard(p1,p2,elephant1,horse1,camel1,king,queen,camel2,horse2,elephant2,s1,s2,s3,s4,s5,s6,s7,s8,hathi1,godha1,uth1,raja,rani,uth2,godha2,hathi2,S1,S2,S3,S4,S5,S6,S7,S8);

}
   else
   {
   	cout<<endl;
   	cout<<"INVALID MOVE!! TRY AGAIN :)"<<endl;
   	j--;
   }



}

else if(ipos==hathi2)
{

   	//to check wether this move is invalid or not
if(ipos-fpos==8||fpos-ipos==8||ipos-fpos==16||fpos-ipos==16||ipos-fpos==24||fpos-ipos==24||ipos-fpos==32||fpos-ipos==32||ipos-fpos==40||fpos-ipos==40||ipos-fpos==48||fpos-ipos==48||ipos-fpos==56||fpos-ipos==56||ipos-fpos==1||fpos-ipos==1||ipos-fpos==2||fpos-ipos==2||ipos-fpos==3||fpos-ipos==3||ipos-fpos==4||fpos-ipos==4||ipos-fpos==5||fpos-ipos==5||ipos-fpos==6||fpos-ipos==6||ipos-fpos==7||fpos-ipos==7)
{
	

   if(fpos==hathi1||fpos==godha1||fpos==uth1||fpos==raja||fpos==rani||fpos==uth2||fpos==godha2||fpos==hathi2||fpos==S1||fpos==S2||fpos==S3||fpos==S4||fpos==S5||fpos==S6||fpos==S7||fpos==S8)
   {
     cout<<"INVALID MOVE !!";
	  	j--;
	  	cout<<endl;
   }

   //to check wether it is cutting enemy element or not

   else if(fpos==elephant1||fpos==horse1||fpos==camel1||fpos==king||fpos==queen||fpos==camel2||fpos==horse2||fpos==elephant2||fpos==s1||fpos==s2||fpos==s3||fpos==s4||fpos==s5||fpos==s6||fpos==s7||fpos==s8)
{
     hathi2=fpos;

	  	//checking which enemy element is cut and removing it
	  	//jinhe remove krna usme 100 daal do , vo print ni honeka (basically a no. above 64)

	  	if(fpos==elephant1)
	  	{
	  		elephant1=100;
		}
   else if(fpos==horse1)
        {
        	horse1=100;
		}
   else if(fpos==camel1)
   {
            camel1=100;
   }
   else if(fpos==king)
   {
   	       king=100;
   }
   else if(fpos==queen)
   {
   	       queen=100;
   }
   else if(fpos==camel2)
   {
   	       camel2=100;
   }
   else if(fpos==horse2)
   {
   	      horse2=100;
   }
   else if(fpos==elephant2)
   {
   	     elephant2=100;
   }
   else if(fpos==s1)
   {
          s1=100;
   }
   else if(fpos==s2)
   {
          s2=100;
   }
   else if(fpos==s3)
   {
          s3=100;
   }
   else if(fpos==s4)
   {
          s4=100;
   }
   else if(fpos==s5)
   {
          s5=100;
   }
   else if(fpos==s6)
   {
          s6=100;
   }
   else if(fpos==s7)
   {
          s7=100;
   }
   else if(fpos==s8)
   {
          s8=100;
   }

}

   else
   {
   	hathi2=fpos;
   }

	   printboard(p1,p2,elephant1,horse1,camel1,king,queen,camel2,horse2,elephant2,s1,s2,s3,s4,s5,s6,s7,s8,hathi1,godha1,uth1,raja,rani,uth2,godha2,hathi2,S1,S2,S3,S4,S5,S6,S7,S8);

}
   else
   {
   	cout<<endl;
   	cout<<"INVALID MOVE! TRY AGAIN :)"<<endl;
   	j--;
   }


}

else if(ipos==S1)
{

   	//to check wether this move is invalid or not

   if(fpos>=ipos||fpos==hathi1||fpos==godha1||fpos==uth1||fpos==raja||fpos==rani||fpos==uth2||fpos==godha2||fpos==hathi2||fpos==S1||fpos==S2||fpos==S3||fpos==S4||fpos==S5||fpos==S6||fpos==S7||fpos==S8)
   {
     cout<<"INVALID MOVE !!";
	  	j--;
	  	cout<<endl;
   }

   //to check wether it is cutting enemy element or not

   else if(fpos==elephant1||fpos==horse1||fpos==camel1||fpos==king||fpos==queen||fpos==camel2||fpos==horse2||fpos==elephant2||fpos==s1||fpos==s2||fpos==s3||fpos==s4||fpos==s5||fpos==s6||fpos==s7||fpos==s8)
{
     //checking for use of wrong move to cut
	//pyada seedha ni kaat skta mtln ipos and fpos ka diffference 8 ni hna chaiye while cutting
	//differnce ya to ho 7 ya 9 ka

	if(ipos-fpos==9||ipos-fpos==7)
	{

     S1=fpos;

	  	//checking which enemy element is cut and removing it
	  	//jinhe remove krna usme 100 daal do , vo print ni honeka (basically a no. above 64)

	  	if(fpos==elephant1)
	  	{
	  		elephant1=100;
		}
   else if(fpos==horse1)
        {
        	horse1=100;
		}
   else if(fpos==camel1)
   {
            camel1=100;
   }
   else if(fpos==king)
   {
   	       king=100;
   }
   else if(fpos==queen)
   {
   	       queen=100;
   }
   else if(fpos==camel2)
   {
   	       camel2=100;
   }
   else if(fpos==horse2)
   {
   	      horse2=100;
   }
   else if(fpos==elephant2)
   {
   	     elephant2=100;
   }
   else if(fpos==s1)
   {
          s1=100;
   }
   else if(fpos==s2)
   {
          s2=100;
   }
   else if(fpos==s3)
   {
          s3=100;
   }
   else if(fpos==s4)
   {
          s4=100;
   }
   else if(fpos==s5)
   {
          s5=100;
   }
   else if(fpos==s6)
   {
          s6=100;
   }
   else if(fpos==s7)
   {
          s7=100;
   }
   else if(fpos==s8)
   {
          s8=100;
   }


}

else
 {
 	 cout<<"INVALID MOVE !!";
	  	j--;
	cout<<endl;
 }


}

   else
   {
   	// condition to check ki aakhri ghar to ni pahucha ,agar pahucha to pyada jo chahe vo bn skta hai
   	//or we can say pyada remove ho jayega aur uski jagah nya jinda hua warrior a jayga

   	if(fpos==1||fpos==2||fpos==3||fpos==4||fpos==5||fpos==6||fpos==7||fpos==8)
   	{
   		//created a function which will replace pyada with revived warrior
      label9:
       check=lasthouse(S1,fpos);
	      if(check==1)
	   {
	   	//to check which elephant is dead and to revive only died warrior
	   	//also to check in case both elephants are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(hathi1==100)
	   	   hathi1=fpos;
	else if(hathi2==100)
	       hathi2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label9;
		   }

	   }
  else if(check==2)
	   {
	   	//to check which horse is dead and to revive only died warrior
	   	//also to check in case both horses are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(godha1==100)
	   	   godha1=fpos;
	else if(godha2==100)
	       godha2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label9;
		   }
	   }
  else if(check==3)
	   {
	   	//to check which camel is dead and to revive only died warrior
	   	//also to check in case both camels are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(uth1==100)
	   	   uth1=fpos;
	else if(uth2==100)
	       uth2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label9;
		   }
	   }
  else if(check==4)
	   {
	   	// to check wether queen is alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(rani==100)
	   	   rani=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label9;
		   }
	   }


	}
	else
	{
	 S1=fpos;
    }

   }

	   printboard(p1,p2,elephant1,horse1,camel1,king,queen,camel2,horse2,elephant2,s1,s2,s3,s4,s5,s6,s7,s8,hathi1,godha1,uth1,raja,rani,uth2,godha2,hathi2,S1,S2,S3,S4,S5,S6,S7,S8);
}

else if(ipos==S2)
{

   	//to check wether this move is invalid or not

   if(fpos>=ipos||fpos==hathi1||fpos==godha1||fpos==uth1||fpos==raja||fpos==rani||fpos==uth2||fpos==godha2||fpos==hathi2||fpos==S1||fpos==S2||fpos==S3||fpos==S4||fpos==S5||fpos==S6||fpos==S7||fpos==S8)
   {
     cout<<"INVALID MOVE !!";
	  	j--;
	  	cout<<endl;
   }

   //to check wether it is cutting enemy element or not

   else if(fpos==elephant1||fpos==horse1||fpos==camel1||fpos==king||fpos==queen||fpos==camel2||fpos==horse2||fpos==elephant2||fpos==s1||fpos==s2||fpos==s3||fpos==s4||fpos==s5||fpos==s6||fpos==s7||fpos==s8)
{
     //checking for use of wrong move to cut
	//pyada seedha ni kaat skta mtln ipos and fpos ka diffference 8 ni hna chaiye while cutting
	//differnce ya to ho 7 ya 9 ka

	if(ipos-fpos==9||ipos-fpos==7)
	{

     S2=fpos;

	  	//checking which enemy element is cut and removing it
	  	//jinhe remove krna usme 100 daal do , vo print ni honeka (basically a no. above 64)

	  	if(fpos==elephant1)
	  	{
	  		elephant1=100;
		}
   else if(fpos==horse1)
        {
        	horse1=100;
		}
   else if(fpos==camel1)
   {
            camel1=100;
   }
   else if(fpos==king)
   {
   	       king=100;
   }
   else if(fpos==queen)
   {
   	       queen=100;
   }
   else if(fpos==camel2)
   {
   	       camel2=100;
   }
   else if(fpos==horse2)
   {
   	      horse2=100;
   }
   else if(fpos==elephant2)
   {
   	     elephant2=100;
   }
   else if(fpos==s1)
   {
          s1=100;
   }
   else if(fpos==s2)
   {
          s2=100;
   }
   else if(fpos==s3)
   {
          s3=100;
   }
   else if(fpos==s4)
   {
          s4=100;
   }
   else if(fpos==s5)
   {
          s5=100;
   }
   else if(fpos==s6)
   {
          s6=100;
   }
   else if(fpos==s7)
   {
          s7=100;
   }
   else if(fpos==s8)
   {
          s8=100;
   }


}

else
 {
 	 cout<<"INVALID MOVE !!";
	  	j--;
	cout<<endl;
 }


}

   else
   {
   	// condition to check ki aakhri ghar to ni pahucha ,agar pahucha to pyada jo chahe vo bn skta hai
   	//or we can say pyada remove ho jayega aur uski jagah nya jinda hua warrior a jayga

   	if(fpos==1||fpos==2||fpos==3||fpos==4||fpos==5||fpos==6||fpos==7||fpos==8)
   	{
   		//created a function which will replace pyada with revived warrior
       label10:
       check=lasthouse(S2,fpos);
	     if(check==1)
	   {
	   	//to check which elephant is dead and to revive only died warrior
	   	//also to check in case both elephants are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(hathi1==100)
	   	   hathi1=fpos;
	else if(hathi2==100)
	       hathi2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label10;
		   }
	   }
  else if(check==2)
	   {
	   	
//to check which horse is dead and to revive only died warrior
	   	//also to check in case both horses are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(godha1==100)
	   	   godha1=fpos;
	else if(godha2==100)
	       godha2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label10;
		   }
	   }
  else if(check==3)
	   {
	   	//to check which camel is dead and to revive only died warrior
	   	//also to check in case both camels are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(uth1==100)
	   	   uth1=fpos;
	else if(uth2==100)
	       uth2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label10;
		   }
	   }
  else if(check==4)
	   {
	   	// to check wether queen is alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(rani==100)
	   	   rani=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label10;
		   }
	   }
	   }

	
	else
	{
	 S2=fpos;
    }

   }

	   printboard(p1,p2,elephant1,horse1,camel1,king,queen,camel2,horse2,elephant2,s1,s2,s3,s4,s5,s6,s7,s8,hathi1,godha1,uth1,raja,rani,uth2,godha2,hathi2,S1,S2,S3,S4,S5,S6,S7,S8);
}

else if(ipos==S3)
{

   	//to check wether this move is invalid or not

   if(fpos>=ipos||fpos==hathi1||fpos==godha1||fpos==uth1||fpos==raja||fpos==rani||fpos==uth2||fpos==godha2||fpos==hathi2||fpos==S1||fpos==S2||fpos==S3||fpos==S4||fpos==S5||fpos==S6||fpos==S7||fpos==S8)
   {
     cout<<"INVALID MOVE !!";
	  	j--;
	  	cout<<endl;
   }

   //to check wether it is cutting enemy element or not

   else if(fpos==elephant1||fpos==horse1||fpos==camel1||fpos==king||fpos==queen||fpos==camel2||fpos==horse2||fpos==elephant2||fpos==s1||fpos==s2||fpos==s3||fpos==s4||fpos==s5||fpos==s6||fpos==s7||fpos==s8)
{
     //checking for use of wrong move to cut
	//pyada seedha ni kaat skta mtln ipos and fpos ka diffference 8 ni hna chaiye while cutting
	//differnce ya to ho 7 ya 9 ka

	if(ipos-fpos==9||ipos-fpos==7)
	{

     S3=fpos;

	  	//checking which enemy element is cut and removing it
	  	//jinhe remove krna usme 100 daal do , vo print ni honeka (basically a no. above 64)

	  	if(fpos==elephant1)
	  	{
	  		elephant1=100;
		}
   else if(fpos==horse1)
        {
        	horse1=100;
		}
   else if(fpos==camel1)
   {
            camel1=100;
   }
   else if(fpos==king)
   {
   	       king=100;
   }
   else if(fpos==queen)
   {
   	       queen=100;
   }
   else if(fpos==camel2)
   {
   	       camel2=100;
   }
   else if(fpos==horse2)
   {
   	      horse2=100;
   }
   else if(fpos==elephant2)
   {
   	     elephant2=100;
   }
   else if(fpos==s1)
   {
          s1=100;
   }
   else if(fpos==s2)
   {
          s2=100;
   }
   else if(fpos==s3)
   {
          s3=100;
   }
   else if(fpos==s4)
   {
          s4=100;
   }
   else if(fpos==s5)
   {
          s5=100;
   }
   else if(fpos==s6)
   {
          s6=100;
   }
   else if(fpos==s7)
   {
          s7=100;
   }
   else if(fpos==s8)
   {
          s8=100;
   }


}

else
 {
 	 cout<<"INVALID MOVE !!";
	  	j--;
	cout<<endl;
 }

}

   else
   {
   	// condition to check ki aakhri ghar to ni pahucha ,agar pahucha to pyada jo chahe vo bn skta hai
   	//or we can say pyada remove ho jayega aur uski jagah nya jinda hua warrior a jayga

   	if(fpos==1||fpos==2||fpos==3||fpos==4||fpos==5||fpos==6||fpos==7||fpos==8)
   	{
   		//created a function which will replace pyada with revived warrior
      label11:
       check=lasthouse(S3,fpos);
	     if(check==1)
	   {
	   		//to check which elephant is dead and to revive only died warrior
	   	//also to check in case both elephants are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(hathi1==100)
	   	   hathi1=fpos;
	else if(hathi2==100)
	       hathi2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label11;
		   }

	   }
  else if(check==2)
	   {
	   	//to check which horse is dead and to revive only died warrior
	   	//also to check in case both horses are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(godha1==100)
	   	   godha1=fpos;
	else if(godha2==100)
	       godha2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label11;
		   }
		   
	   }
  else if(check==3)
	   {
	   	//to check which camel is dead and to revive only died warrior
	   	//also to check in case both camels are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(uth1==100)
	   	   uth1=fpos;
	else if(uth2==100)
	       uth2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label11;
		   }
	   }
  else if(check==4)
	   {
	   	// to check wether queen is alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(rani==100)
	   	   rani=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label11;
		   }
	   }
	   }

	
	else
	{
	 S3=fpos;
    }

   }

	   printboard(p1,p2,elephant1,horse1,camel1,king,queen,camel2,horse2,elephant2,s1,s2,s3,s4,s5,s6,s7,s8,hathi1,godha1,uth1,raja,rani,uth2,godha2,hathi2,S1,S2,S3,S4,S5,S6,S7,S8);
}

else if(ipos==S4)
{

   	//to check wether this move is invalid or not

   if(fpos>=ipos||fpos==hathi1||fpos==godha1||fpos==uth1||fpos==raja||fpos==rani||fpos==uth2||fpos==godha2||fpos==hathi2||fpos==S1||fpos==S2||fpos==S3||fpos==S4||fpos==S5||fpos==S6||fpos==S7||fpos==S8)
   {
     cout<<"INVALID MOVE !!";
	  	j--;
	  	cout<<endl;
   }

   //to check wether it is cutting enemy element or not

   else if(fpos==elephant1||fpos==horse1||fpos==camel1||fpos==king||fpos==queen||fpos==camel2||fpos==horse2||fpos==elephant2||fpos==s1||fpos==s2||fpos==s3||fpos==s4||fpos==s5||fpos==s6||fpos==s7||fpos==s8)
{
     //checking for use of wrong move to cut
	//pyada seedha ni kaat skta mtln ipos and fpos ka diffference 8 ni hna chaiye while cutting
	//differnce ya to ho 7 ya 9 ka

	if(ipos-fpos==9||ipos-fpos==7)
	{

     S4=fpos;

	  	//checking which enemy element is cut and removing it
	  	//jinhe remove krna usme 100 daal do , vo print ni honeka (basically a no. above 64)

	  	if(fpos==elephant1)
	  	{
	  		elephant1=100;
		}
   else if(fpos==horse1)
        {
        	horse1=100;
		}
   else if(fpos==camel1)
   {
            camel1=100;
   }
   else if(fpos==king)
   {
   	       king=100;
   }
   else if(fpos==queen)
   {
   	       queen=100;
   }
   else if(fpos==camel2)
   {
   	       camel2=100;
   }
   else if(fpos==horse2)
   {
   	      horse2=100;
   }
   else if(fpos==elephant2)
   {
   	     elephant2=100;
   }
   else if(fpos==s1)
   {
          s1=100;
   }
   else if(fpos==s2)
   {
          s2=100;
   }
   else if(fpos==s3)
   {
          s3=100;
   }
   else if(fpos==s4)
   {
          s4=100;
   }
   else if(fpos==s5)
   {
          s5=100;
   }
   else if(fpos==s6)
   {
          s6=100;
   }
   else if(fpos==s7)
   {
          s7=100;
   }
   else if(fpos==s8)
   {
          s8=100;
   }


}

else
 {
 	 cout<<"INVALID MOVE !!";
	  	j--;
	cout<<endl;
 }

}

   else
   {
   	// condition to check ki aakhri ghar to ni pahucha ,agar pahucha to pyada jo chahe vo bn skta hai
   	//or we can say pyada remove ho jayega aur uski jagah nya jinda hua warrior a jayga

   	if(fpos==1||fpos==2||fpos==3||fpos==4||fpos==5||fpos==6||fpos==7||fpos==8)
   	{
	   
   		//created a function which will replace pyada with revived warrior
       label12:
       check=lasthouse(S4,fpos);
	      if(check==1)
	   {
	   	//to check which elephant is dead and to revive only died warrior
	   	//also to check in case both elephants are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(hathi1==100)
	   	   hathi1=fpos;
	else if(hathi2==100)
	       hathi2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label12;
		   }
	   }
  else if(check==2)
	   {
	   	//to check which horse is dead and to revive only died warrior
	   	//also to check in case both horses are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(godha1==100)
	   	   godha1=fpos;
	else if(godha2==100)
	       godha2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label12;
		   }
	   }
  else if(check==3)
	   {
	   	//to check which camel is dead and to revive only died warrior
	   	//also to check in case both camels are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(uth1==100)
	   	   uth1=fpos;
	else if(uth2==100)
	       uth2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label12;
		   }

	   }
  else if(check==4)
	   {
	 // to check wether queen is alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(rani==100)
	   	   rani=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label12;
		   }
	   }

	}
	else
	{
	 S4=fpos;
	   
    }

}

	   printboard(p1,p2,elephant1,horse1,camel1,king,queen,camel2,horse2,elephant2,s1,s2,s3,s4,s5,s6,s7,s8,hathi1,godha1,uth1,raja,rani,uth2,godha2,hathi2,S1,S2,S3,S4,S5,S6,S7,S8);
}

else if(ipos==S5)
{

   	//to check wether this move is invalid or not

   if(fpos>=ipos||fpos==hathi1||fpos==godha1||fpos==uth1||fpos==raja||fpos==rani||fpos==uth2||fpos==godha2||fpos==hathi2||fpos==S1||fpos==S2||fpos==S3||fpos==S4||fpos==S5||fpos==S6||fpos==S7||fpos==S8)
   {
     cout<<"INVALID MOVE !!";
	  	j--;
	  	cout<<endl;
   }

   //to check wether it is cutting enemy element or not

   else if(fpos==elephant1||fpos==horse1||fpos==camel1||fpos==king||fpos==queen||fpos==camel2||fpos==horse2||fpos==elephant2||fpos==s1||fpos==s2||fpos==s3||fpos==s4||fpos==s5||fpos==s6||fpos==s7||fpos==s8)
{
     //checking for use of wrong move to cut
	//pyada seedha ni kaat skta mtln ipos and fpos ka diffference 8 ni hna chaiye while cutting
	//differnce ya to ho 7 ya 9 ka

	if(ipos-fpos==9||ipos-fpos==7)
	{

     S5=fpos;

	  	//checking which enemy element is cut and removing it
	  	//jinhe remove krna usme 100 daal do , vo print ni honeka (basically a no. above 64)

	  	if(fpos==elephant1)
	  	{
	  		elephant1=100;
		}
   else if(fpos==horse1)
        {
        	horse1=100;
		}
   else if(fpos==camel1)
   {
            camel1=100;
   }
   else if(fpos==king)
   {
   	       king=100;
   }
   else if(fpos==queen)
   {
   	       queen=100;
   }
   else if(fpos==camel2)
   {
   	       camel2=100;
   }
   else if(fpos==horse2)
   {
   	      horse2=100;
   }
   else if(fpos==elephant2)
   {
   	     elephant2=100;
   }
   else if(fpos==s1)
   {
          s1=100;
   }
   else if(fpos==s2)
   {
          s2=100;
   }
   else if(fpos==s3)
   {
          s3=100;
   }
   else if(fpos==s4)
   {
          s4=100;
   }
   else if(fpos==s5)
   {
          s5=100;
   }
   else if(fpos==s6)
   {
          s6=100;
   }
   else if(fpos==s7)
   {
          s7=100;
   }
   else if(fpos==s8)
   {
          s8=100;
   }


}

else
 {
 	 cout<<"INVALID MOVE !!";
	  	j--;
	cout<<endl;
 }

}

   else
   {
   	// condition to check ki aakhri ghar to ni pahucha ,agar pahucha to pyada jo chahe vo bn skta hai
   	//or we can say pyada remove ho jayega aur uski jagah nya jinda hua warrior a jayga

   	if(fpos==1||fpos==2||fpos==3||fpos==4||fpos==5||fpos==6||fpos==7||fpos==8)
   	{
   		//created a function which will replace pyada with revived warrior
        label13:
       check=lasthouse(S5,fpos);
	     if(check==1)
	   {
	   		//to check which elephant is dead and to revive only died warrior
	   	//also to check in case both elephants are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(hathi1==100)
	   	   hathi1=fpos;
	else if(hathi2==100)
	       hathi2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label13;
		   }

	   }
  else if(check==2)
	   {
	   	//to check which horse is dead and to revive only died warrior
	   	//also to check in case both horses are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(godha1==100)
	   	   godha1=fpos;
	else if(godha2==100)
	       godha2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label13;
		   }
	   }
  else if(check==3)
	   {
	   	
	//to check which camel is dead and to revive only died warrior
	   	//also to check in case both camels are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(uth1==100)
	   	   uth1=fpos;
	else if(uth2==100)
	       uth2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label13;
		   }

	   }
  else if(check==4)
	   {
	   	// to check wether queen is alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(rani==100)
	   	   rani=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label13;
		   }
	   }
	   }

	
	else
	{
	 S5=fpos;
    }

   }

	   printboard(p1,p2,elephant1,horse1,camel1,king,queen,camel2,horse2,elephant2,s1,s2,s3,s4,s5,s6,s7,s8,hathi1,godha1,uth1,raja,rani,uth2,godha2,hathi2,S1,S2,S3,S4,S5,S6,S7,S8);
}

   else if(ipos==S6)
{

   	//to check wether this move is invalid or not

   if(fpos>=ipos||fpos==hathi1||fpos==godha1||fpos==uth1||fpos==raja||fpos==rani||fpos==uth2||fpos==godha2||fpos==hathi2||fpos==S1||fpos==S2||fpos==S3||fpos==S4||fpos==S5||fpos==S6||fpos==S7||fpos==S8)
   {
     cout<<"INVALID MOVE !!";
	  	j--;
	  	cout<<endl;
   }

   //to check wether it is cutting enemy element or not

   else if(fpos==elephant1||fpos==horse1||fpos==camel1||fpos==king||fpos==queen||fpos==camel2||fpos==horse2||fpos==elephant2||fpos==s1||fpos==s2||fpos==s3||fpos==s4||fpos==s5||fpos==s6||fpos==s7||fpos==s8)
{
     //checking for use of wrong move to cut
	//pyada seedha ni kaat skta mtln ipos and fpos ka diffference 8 ni hna chaiye while cutting
	//differnce ya to ho 7 ya 9 ka

	if(ipos-fpos==9||ipos-fpos==7)
	{

     S6=fpos;

	  	//checking which enemy element is cut and removing it
	  	//jinhe remove krna usme 100 daal do , vo print ni honeka (basically a no. above 64)

	  	if(fpos==elephant1)
	  	{
	  		elephant1=100;
		}
   else if(fpos==horse1)
        {
        	horse1=100;
		}
   else if(fpos==camel1)
   {
            camel1=100;
   }
   else if(fpos==king)
   {
   	       king=100;
   }
   else if(fpos==queen)
   {
   	       queen=100;
   }
   else if(fpos==camel2)
   {
   	       camel2=100;
   }
   else if(fpos==horse2)
   {
   	      horse2=100;
   }
   else if(fpos==elephant2)
   {
   	     elephant2=100;
   }
   else if(fpos==s1)
   {
          s1=100;
   }
   else if(fpos==s2)
   {
          s2=100;
   }
   else if(fpos==s3)
   {
          s3=100;
   }
   else if(fpos==s4)
   {
          s4=100;
   }
   else if(fpos==s5)
   {
          s5=100;
   }
   else if(fpos==s6)
   {
          s6=100;
   }
   else if(fpos==s7)
   {
          s7=100;
   }
   else if(fpos==s8)
   {
          s8=100;
   }


}

else
 {
 	 cout<<"INVALID MOVE !!";
	  	j--;
	cout<<endl;
 }

}

   else
   {
   	// condition to check ki aakhri ghar to ni pahucha ,agar pahucha to pyada jo chahe vo bn skta hai
   	//or we can say pyada remove ho jayega aur uski jagah nya jinda hua warrior a jayga

   	if(fpos==1||fpos==2||fpos==3||fpos==4||fpos==5||fpos==6||fpos==7||fpos==8)
   	{
   		//created a function which will replace pyada with revived warrior
            label14:
       check=lasthouse(S6,fpos);
	    if(check==1)
	   {
	   	//to check which elephant is dead and to revive only died warrior
	   	//also to check in case both elephants are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(hathi1==100)
	   	   hathi1=fpos;
	else if(hathi2==100)
	       hathi2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label14;
		   }
	   }
  else if(check==2)
	   {
	   	//to check which horse is dead and to revive only died warrior
	   	//also to check in case both horses are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(godha1==100)
	   	   godha1=fpos;
	else if(godha2==100)
	       godha2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label14;
		   }
	   }
  else if(check==3)
	   {
	   	//to check which camel is dead and to revive only died warrior
	   	//also to check in case both camels are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(uth1==100)
	   	   uth1=fpos;
	else if(uth2==100)
	       uth2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label14;
		   }
	   }
  else if(check==4)
	   {
	   	// to check wether queen is alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(rani==100)
	   	   rani=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label14;
		   }
	   }
	   }

	
	else
	{
	 S6=fpos;
    }

   }

	   printboard(p1,p2,elephant1,horse1,camel1,king,queen,camel2,horse2,elephant2,s1,s2,s3,s4,s5,s6,s7,s8,hathi1,godha1,uth1,raja,rani,uth2,godha2,hathi2,S1,S2,S3,S4,S5,S6,S7,S8);
}

else if(ipos==S7)
{

   	//to check wether this move is invalid or not

   if(fpos>=ipos||fpos==hathi1||fpos==godha1||fpos==uth1||fpos==raja||fpos==rani||fpos==uth2||fpos==godha2||fpos==hathi2||fpos==S1||fpos==S2||fpos==S3||fpos==S4||fpos==S5||fpos==S6||fpos==S7||fpos==S8)
   {
     cout<<"INVALID MOVE !!";
	  	j--;
	  	cout<<endl;
   }

   //to check wether it is cutting enemy element or not

   else if(fpos==elephant1||fpos==horse1||fpos==camel1||fpos==king||fpos==queen||fpos==camel2||fpos==horse2||fpos==elephant2||fpos==s1||fpos==s2||fpos==s3||fpos==s4||fpos==s5||fpos==s6||fpos==s7||fpos==s8)
{
    //checking for use of wrong move to cut
	//pyada seedha ni kaat skta mtln ipos and fpos ka diffference 8 ni hna chaiye while cutting
	//differnce ya to ho 7 ya 9 ka

	if(ipos-fpos==9||ipos-fpos==7)
	{

     S7=fpos;

	  	//checking which enemy element is cut and removing it
	  	//jinhe remove krna usme 100 daal do , vo print ni honeka (basically a no. above 64)

	  	if(fpos==elephant1)
	  	{
	  		elephant1=100;
		}
   else if(fpos==horse1)
        {
        	horse1=100;
		}
   else if(fpos==camel1)
   {
            camel1=100;
   }
   else if(fpos==king)
   {
   	       king=100;
   }
   else if(fpos==queen)
   {
   	       queen=100;
   }
   else if(fpos==camel2)
   {
   	       camel2=100;
   }
   else if(fpos==horse2)
   {
   	      horse2=100;
   }
   else if(fpos==elephant2)
   {
   	     elephant2=100;
   }
   else if(fpos==s1)
   {
          s1=100;
   }
   else if(fpos==s2)
   {
          s2=100;
   }
   else if(fpos==s3)
   {
          s3=100;
   }
   else if(fpos==s4)
   {
          s4=100;
   }
   else if(fpos==s5)
   {
          s5=100;
   }
   else if(fpos==s6)
   {
          s6=100;
   }
   else if(fpos==s7)
   {
          s7=100;
   }
   else if(fpos==s8)
   {
          s8=100;
   }


}

else
 {
 	 cout<<"INVALID MOVE !!";
	  	j--;
	cout<<endl;
 }

}

   else
   {
   	// condition to check ki aakhri ghar to ni pahucha ,agar pahucha to pyada jo chahe vo bn skta hai
   	//or we can say pyada remove ho jayega aur uski jagah nya jinda hua warrior a jayga

   	if(fpos==1||fpos==2||fpos==3||fpos==4||fpos==5||fpos==6||fpos==7||fpos==8)
   	{
   		//created a function which will replace pyada with revived warrior
            label15:
       check=lasthouse(S7,fpos);
        if(check==1)
	   {
	   		//to check which elephant is dead and to revive only died warrior
	   	//also to check in case both elephants are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(hathi1==100)
	   	   hathi1=fpos;
	else if(hathi2==100)
	       hathi2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label15;
		   }
	   }
  else if(check==2)
	   {
	   	//to check which horse is dead and to revive only died warrior
	   	//also to check in case both horses are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(godha1==100)
	   	   godha1=fpos;
	else if(godha2==100)
	       godha2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label15;
		   }

	   }
  else if(check==3)
	   {
	   	
	//to check which camel is dead and to revive only died warrior
	   	//also to check in case both camels are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(uth1==100)
	   	   uth1=fpos;
	else if(uth2==100)
	       uth2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label15;
		   }
	   }
  else if(check==4)
	   {
	   	// to check wether queen is alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(rani==100)
	   	   rani=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label15;
		   }
	   }
	   }

	
	else
	{
	 S7=fpos;
    }

   }

	   printboard(p1,p2,elephant1,horse1,camel1,king,queen,camel2,horse2,elephant2,s1,s2,s3,s4,s5,s6,s7,s8,hathi1,godha1,uth1,raja,rani,uth2,godha2,hathi2,S1,S2,S3,S4,S5,S6,S7,S8);
}

else if(ipos==S8)
{

   	//to check wether this move is invalid or not

   if(fpos>=ipos||fpos==hathi1||fpos==godha1||fpos==uth1||fpos==raja||fpos==rani||fpos==uth2||fpos==godha2||fpos==hathi2||fpos==S1||fpos==S2||fpos==S3||fpos==S4||fpos==S5||fpos==S6||fpos==S7||fpos==S8)
   {
     cout<<"INVALID MOVE !!";
	  	j--;
	  	cout<<endl;
   }

   //to check wether it is cutting enemy element or not

   else if(fpos==elephant1||fpos==horse1||fpos==camel1||fpos==king||fpos==queen||fpos==camel2||fpos==horse2||fpos==elephant2||fpos==s1||fpos==s2||fpos==s3||fpos==s4||fpos==s5||fpos==s6||fpos==s7||fpos==s8)
{
	//checking for use of wrong move to cut
	//pyada seedha ni kaat skta mtln ipos and fpos ka diffference 8 ni hna chaiye while cutting
	//differnce ya to ho 7 ya 9 ka

	if(ipos-fpos==9||ipos-fpos==7)
	{

     S8=fpos;

	  	//checking which enemy element is cut and removing it
	  	//jinhe remove krna usme 100 daal do , vo print ni honeka (basically a no. above 64)

	  	if(fpos==elephant1)
	  	{
	  		elephant1=100;
		}
   else if(fpos==horse1)
        {
        	horse1=100;
		}
   else if(fpos==camel1)
   {
            camel1=100;
   }
   else if(fpos==king)
   {
   	       king=100;
   }
   else if(fpos==queen)
   {
   	       queen=100;
   }
   else if(fpos==camel2)
   {
   	       camel2=100;
   }
   else if(fpos==horse2)
   {
   	      horse2=100;
   }
   else if(fpos==elephant2)
   {
   	     elephant2=100;
   }
   else if(fpos==s1)
   {
          s1=100;
   }
   else if(fpos==s2)
   {
          s2=100;
   }
   else if(fpos==s3)
   {
          s3=100;
   }
   else if(fpos==s4)
   {
          s4=100;
   }
   else if(fpos==s5)
   {
          s5=100;
   }
   else if(fpos==s6)
   {
          s6=100;
   }
   else if(fpos==s7)
   {
          s7=100;
   }
   else if(fpos==s8)
   {
          s8=100;
   }


}

else
 {
 	 cout<<"INVALID MOVE !!";
	  	j--;
	cout<<endl;
 }



}

   else
   {
   	// condition to check ki aakhri ghar to ni pahucha ,agar pahucha to pyada jo chahe vo bn skta hai
   	//or we can say pyada remove ho jayega aur uski jagah nya jinda hua warrior a jayga

   	if(fpos==1||fpos==2||fpos==3||fpos==4||fpos==5||fpos==6||fpos==7||fpos==8)
   	{
   		//created a function which will replace pyada with revived warrior
       label16:
       check=lasthouse(S8,fpos);
	     if(check==1)
	   {
	   	//to check which elephant is dead and to revive only died warrior
	   	//also to check in case both elephants are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(hathi1==100)
	   	   hathi1=fpos;
	else if(hathi2==100)
	       hathi2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label16;
		   }

	   }
  else if(check==2)
	   {
	   	
//to check which horse is dead and to revive only died warrior
	   	//also to check in case both horses are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(godha1==100)
	   	   godha1=fpos;
	else if(godha2==100)
	       godha2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label16;
		   }
	   }
  else if(check==3)
	   {
	   	//to check which camel is dead and to revive only died warrior
	   	//also to check in case both camels are alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(uth1==100)
	   	   uth1=fpos;
	else if(uth2==100)
	       uth2=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label16;
		   }

	   }
  else if(check==4)
	   {
	   	// to check wether queen is alive then asking user to choose different
	   	//warrior to revive
	   	
	   	if(rani==100)
	   	   rani=fpos;
		 else
		   {
		   	cout<<"INVALID MOVE , TRY AGAIN"<<endl<<endl;
		   	goto label16;
		   }
	   }
	   }

	
	else
	{
	 S8=fpos;
    }

   }

	   printboard(p1,p2,elephant1,horse1,camel1,king,queen,camel2,horse2,elephant2,s1,s2,s3,s4,s5,s6,s7,s8,hathi1,godha1,uth1,raja,rani,uth2,godha2,hathi2,S1,S2,S3,S4,S5,S6,S7,S8);
}

//CONDITION TO CHECK WHETHER KING IS DEFEATED BY CHECKING IF IT VALUE IS 100

if(king==100)
{
	cout<<p2<<" wins!!!";
	break;
}

else if(raja==100)
{
	cout<<p1<<" wins!!!";
	break;
}

//iske aage hai for loop ka bracket bnd

}


}



void printboard(char p1[],char p2[],int elephant1,int horse1,int camel1,int king,int queen,int camel2,int horse2,int elephant2,int s1,int s2,int s3,int s4,int s5,int s6,int s7,int s8,int hathi1,int godha1,int uth1,int raja,int rani,int uth2,int godha2,int hathi2,int S1,int S2,int S3,int S4,int S5,int S6,int S7,int S8)
{

    int z=2;
   int b,c,d,e,f,g,h,k;
   b=17;
   c=18;
   d=19;
   e=20;
   f=21;
   g=22;
   h=23;
   k=24;


 int a[65];
    int i;

    for(i=1;i<=64;i++)
    {
        a[i]=i;
    }

   //just for sake of pattern

   cout<<"                                               "<<p1<<"                                                        "<<endl;
   cout<<"---------------------------------------------------------------------------------------------------------"<<endl;

    cout<<"|            |            |            |            |            |            |            |            |"<<endl;

    //starting printing board

    cout<<"|";

           for(i=1;i<=64;i++)
    {
        //just for pattern



                   if(a[i]==elephant1)
              cout<<" elephant 1 |";
      else if(a[i]==horse1)
              cout<<"  horse 1   |";
      else if(a[i]==camel1)
              cout<<"  camel 1   |";
      else if(a[i]==king)
              cout<<"    king    |";
      else if(a[i]==queen)
              cout<<"   queen    |";
      else if(a[i]==camel2)
              cout<<"  camel 2   |";
      else if(a[i]==horse2)
              cout<<"  horse 2   |";
      else if(a[i]==elephant2)
              cout<<" elephant 2 |";
      else if(a[i]==s1)
              cout<<" soldier 1  |";
      else if(a[i]==s2)
              cout<<" soldier 2  |";
      else if(a[i]==s3)
              cout<<" soldier 3  |";
      else if(a[i]==s4)
              cout<<" soldier 4  |";
      else if(a[i]==s5)
              cout<<" soldier 5  |";
      else if(a[i]==s6)
              cout<<" soldier 6  |";
      else if(a[i]==s7)
              cout<<" soldier 7  |";
      else if(a[i]==s8)
              cout<<" soldier 8  |";
      else if(a[i]==hathi1)
              cout<<" ELEPHANT 1 |";
      else if(a[i]==godha1)
              cout<<"  HORSE 1   |";
      else if(a[i]==uth1)
              cout<<"  CAMEL 1   |";
      else if(a[i]==raja)
              cout<<"    KING    |";
      else if(a[i]==rani)
              cout<<"   QUEEN    |";
      else if(a[i]==uth2)
              cout<<"  CAMEL 2   |";
      else if(a[i]==godha2)
              cout<<"  HORSE 2   |";
      else if(a[i]==hathi2)
              cout<<" ELEPHANT 2 |";
      else if(a[i]==S1)
              cout<<" SOLDIER 1  |";
      else if(a[i]==S2)
              cout<<" SOLDIER 2  |";
      else if(a[i]==S3)
              cout<<" SOLDIER 3  |";
      else if(a[i]==S4)
              cout<<" SOLDIER 4  |";
      else if(a[i]==S5)
              cout<<" SOLDIER 5  |";
      else if(a[i]==S6)
              cout<<" SOLDIER 6  |";
      else if(a[i]==S7)
              cout<<" SOLDIER 7  |";
      else if(a[i]==S8)
              cout<<" SOLDIER 8  |";
       else
              cout<<"            |";


        //to change line after printing 8 elements
        //---to print line after every line change

        if(i==8||i==16||i==24||i==32||i==40||i==48||i==56||i==64)
        {
            //to print the helping table of numbers bilkul brabr m


            

            cout<<"         ";
			cout<<"-------------------------------------------------";



			cout<<endl;


             cout<<"|            |            |            |            |            |            |            |            |";
                          cout<<"         ";
                    if(z==2)
                          {
                          	cout<<"|  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |";
                          	cout<<endl;
                          	z++;
						  }
			else
				{

					if(z==3)
					{
			cout<<"|  9  |  10 |  11 |  12 |  13 |  14 |  15 |  16 |"<<endl;
						z++;
					}
					else
					{

            cout<<"|  "<<b<<" |  "<<c<<" |  "<<d<<" |  "<<e<<" |  "<<f<<" |  "<<g<<" |  "<<h<<" |  "<<k<<" |"<<endl;
                          b+=8;
                          c+=8;
						  d+=8;
						  e+=8;
						  f+=8;
						  g+=8;
						  h+=8;
						  k+=8;
					}
                }
            cout<<"---------------------------------------------------------------------------------------------------------";
			cout<<"         ";
			cout<<"-------------------------------------------------";

            cout<<endl;


          if(i==8||i==16||i==24||i==32||i==40||i==48||i==56)
            {
             cout<<"|            |            |            |            |            |            |            |            |";


				   cout<<endl;


            cout<<"|";
             }

            }
         }

    cout<<"                                               "<<p2<<"                                                        "<<endl;
    }

int lasthouse(int &z,int rpos)
{
	char replace[10];
	cout<<endl;
	cout<<"ALRIGHT !! YOU REACHED LAST HOUSE "<<endl;
	   cout<<" IT UNLOCKS A CHANCE TO REVIVE ANY OF YOUR DEAD WARRIOR"<<endl;
	   cout<<"ENTER YOUR CHOICE - ";
	   gets(replace);
	   gets(replace);

	   if(strcmpi(replace,"elephant")==0)
	   {
	   	if(rpos==1||rpos==2||rpos==3||rpos==4||rpos==5||rpos==6||rpos==7||rpos==8)
		   {
		      z=100;
		    return(1);
	       }
	    else
	      {
            z=100;
			return(2);
		  }

	   }
	  else if(strcmpi(replace,"horse")==0)
	   {
	   	if(rpos==1||rpos==2||rpos==3||rpos==4||rpos==5||rpos==6||rpos==7||rpos==8)
		   {
		      z=100;
		    return(3);
	       }
	    else
	      {
            z=100;
			return(4);
		  }

	   }
	  else if(strcmpi(replace,"camel")==0)
	   {
	   	if(rpos==1||rpos==2||rpos==3||rpos==4||rpos==5||rpos==6||rpos==7||rpos==8)
		   {
		      z=100;
		    return(5);
	       }
	    else
	      {
            z=100;
			return(6);
		  }

	   }
	  else if(strcmpi(replace,"queen")==0)
	   {
	   	if(rpos==1||rpos==2||rpos==3||rpos==4||rpos==5||rpos==6||rpos==7||rpos==8)
		   {
		      z=100;
		    return(7);
	       }
	    else
	      {
            z=100;
			return(8);
		  }

	   }


}

int starting()
{
	
}

