
#include <iostream>
#include<conio.h>
#include<dos.h>
#include <fstream>
#include<stdio.h>
#include<ctype.h>
using namespace std;



int ascii(char num)
{
    //number
if(num==48)
return(0);

if(num==49)
return(1);

if(num==50)
return(2);

if(num==51)
return(3);

if(num==52)
return(4);

if(num==53)
return(5);

if(num==54)
return(6);

if(num==55)
return(7);

if(num==56)
return(8);

if(num==57)
return(9);



//capital alphabet
if(num==65)
 return(101);
 if(num==66)
 return(201);
 if(num==67)
 return(300);
 if(num==68)
 return(400);
 if(num==69)
 return(500);
 if(num==70)
 return(600);
 if(num==71)
 return(700);
 if(num==72)
 return(800);
 if(num==73)
 return(900);
 if(num==74)
 return(1000);
 if(num==75)
 return(1100);
 if(num==76)
 return(1200);
 if(num==77)
 return(1300);
 if(num==78)
 return(1400);
 if(num==79)
 return(1500);
 if(num==80)
 return(1600);
 if(num==81)
 return(1700);
 if(num==82)
 return(1800);
 if(num==83)
 return(1900);
 if(num==84)
 return(2000);
 if(num==85)
 return(2100);
 if(num==86)
 return(2200);
 if(num==87)
 return(2300);
 if(num==88)
 return(2400);
 if(num==89)
 return(2500);
 if(num==90)
 return(2600);

//small alphabet
if(num==97)
 return(10);
 if(num==98)
 return(20);
 if(num==99)
 return(30);
 if(num==100)
 return(40);
 if(num==101)
 return(50);
 if(num==102)
 return(60);
 if(num==103)
 return(70);
 if(num==104)
 return(80);
 if(num==105)
 return(90);
 if(num==106)
 return(100);
 if(num==107)
 return(110);
 if(num==108)
 return(120);
 if(num==109)
 return(130);
 if(num==110)
 return(140);
 if(num==111)
 return(150);
 if(num==112)
 return(160);
 if(num==113)
 return(170);
 if(num==114)
 return(180);
 if(num==115)
 return(190);
 if(num==116)
 return(200);
 if(num==117)
 return(210);
 if(num==118)
 return(220);
 if(num==119)
 return(230);
 if(num==120)
 return(240);
 if(num==121)
 return(250);
 if(num==122)
 return(260);
 
 //space
 if(num==32)
 return(1000);

 //:
 if(num==58)
 return(9999);

 //(/)
 if(num==47)
 return(1111);

 //end.
 if(num==46)
 return(10101010);

 //,
 if(num==44)
 return(555555);
}




void show(char alp[200])
{
    
    int xe;
for(int a=0;a<201;a++)
{
    xe=ascii(alp[a]);
    cout<<xe<<" ";
    if(xe==10101010)
    break;
}
}




void basic()
{
    char name[20],dob[20],hobbies[20],study[20],fav[20];
    cout<<"\n PLEASE INTRODUCE URSELF (THIS IS ONE TIME PROCEDURE \n";
    
    cout<<"\n WHAT IS YOUR NAME \n";
    cin>>name[1];
    gets(name);
    cout<<"\n WHAT IS YOUR DOB \n ";
    cin>>dob[1];
    gets(dob);
    cout<<"\n HOBBIES \n ";
    cin>>dob[1];
    gets(hobbies);
    cout<<"\n STUDYING WHAT \n ";
    cin>>dob[1];
    gets(study);
    cout<<"\n FAVOURITE THING \n ";
    cin>>dob[1];
    gets(fav);
    ofstream basicf("basicf.txt");
    basicf<<"\n NAME :"<<name;
    basicf<<"\n DOB  :"<<dob;
    basicf<<"\n HOBBIES :"<<hobbies;
    basicf<<"\n STUDYING WHAT :"<<study;
    basicf<<"\n FAVOURITE THING :"<<fav;

    basicf.close();
}





























class object
{
    public:
int smell,sound,touch,taste,color; 
long size;

void checksmell()
{
    if(smell==0)
    cout<<"fruit";

    if(smell==1)
    cout<<"lemon";

    if(smell==2)
    cout<<"fragrant";

    if(smell==3)
    cout<<"peppermint";

    if(smell==4)
    cout<<"toasted and nutty";

    if(smell==5)
    cout<<"woody";

    if(smell==6)
    cout<<"pungent";

    if(smell==7)
    cout<<"chemical";

    if(smell==8)
    cout<<"decaying";
}


void checksize()
{
    if(size==0)
    cout<<"electron level";

    if(size==1)
    cout<<"atom level";

    if(size==2)
    cout<<"molecule level";

    if(size<3)
    cout<<"matter(mm) level";

        
}



void checkcolor()
{
    if(color==0)
    cout<<"red";

    if(color==1)
    cout<<"blue";

    if(color==2)
    cout<<"green";

    if(color==3)
    cout<<"violet";

    if(color==4)
    cout<<"black";

    if(color==5)
    cout<<"pink";

    if(color==6)
    cout<<"yellow";

    if(color==7)
    cout<<"orange";

    if(color==8)
    cout<<"white";

    if(color==9)
    cout<<"grey";

    if(color==10)
    cout<<"brown";

        
}


void checksound()
{
    if(sound==0)
    cout<<"inaudible";

        if(sound==1)
    cout<<"unpleasant";

        if(sound==2)
    cout<<"soft";


        if(sound==3)
    cout<<"loud";

        if(sound==4)
    cout<<"noise";

        if(sound==5)
    cout<<"music";

        if(sound==6)
    cout<<"harsh";





}

void checktouch()
{
    if(touch==0)
    cout<<"soft";

    if(touch==1)
    cout<<"matte";

    if(touch==2)
    cout<<"rough";

    if(touch==3)
    cout<<"pointy";

    if(touch==4)
    cout<<"shock";

    if(touch==5)
    cout<<"texture";

    if(touch==6)
    cout<<"hairy";

}

void checktaste()
{
    if(taste==0)
    cout<<"sweet";

    if(taste==1)
    cout<<"sour";

    if(taste==2)
    cout<<"pungent";

    if(taste==3)
    cout<<"medicine";

    if(taste==4)
    cout<<"bitter";

    if(taste=5)
    cout<<"salty";
}





















};






























void scan(char owner1[200])
{
    int scanned[25][25];
    int point=0;
    int aaa,iii;
    int ii=0;
for(int aa=0;aa<25;aa++)
{    //cout<<"\n";
     if(scanned[aaa][iii]==10101010)
     break;
for( ii=0;ii<25;ii++)
{

        scanned[aa][ii]=ascii(owner1[point]);
        //cout<<ascii(owner1[point])<<" ";
        point++;
                if(scanned[aa][ii]==10101010||scanned[aa][ii]==1000)
        {
        aaa=aa;
        iii=ii;
        break;
        }
                
}
}





//animals

//dog
object dog;
dog.color=10;
dog.size=1000;
dog.smell=99;
dog.touch=6;
dog.taste=99;
dog.sound=3;

//tiger.
object tiger;
tiger.color=7;
tiger.size=2000;
tiger.smell=10;
tiger.touch=6;
tiger.taste=7;
tiger.sound=3;























































int f=0,d=0;

 //apple
 if(scanned[f][d]==10&&scanned[f][d+1]==160&&scanned[f][d+2]==160&&scanned[f][d+3]==120&&scanned[f][d+4]==50&&scanned[f][d+5]==10101010)
 cout<<"is a red fruit";
 
 //bye
 if(scanned[f][d]==20&&scanned[f][d+1]==250&&scanned[f][d+2]==50&&scanned[f][d+3]==10101010){
 cout<<"bye sir";
 exit(0);
 }
 
  //dog.
 if(scanned[f][d]==40&&scanned[f][d+1]==150&&scanned[f][d+2]==70&&scanned[f][d+3]==10101010)
 cout<<"barks";
  
  
 //wtf.
 if(scanned[f][d]==230&&scanned[f][d+1]==200&&scanned[f][d+2]==60&&scanned[f][d+3]==10101010)
 cout<<"what happened?";

 //okay.
 if(scanned[f][d]==150&&scanned[f][d+1]==110&&scanned[f][d+2]==10&&scanned[f][d+3]==250&&scanned[f][d+4]==10101010){
 cout<<"yes";
 }


 //element1.
 if(scanned[f][d]==50&&scanned[f][d+1]==120&&scanned[f][d+2]==50&&scanned[f][d+3]==130&&scanned[f][d+4]==50&&scanned[f][d+5]==140&&scanned[f][d+6]==200&&scanned[f][d+7]==1&&scanned[f][d+8]==10101010)
 cout<<"hydrogen";

  
 //element2.
 if(scanned[f][d]==50&&scanned[f][d+1]==120&&scanned[f][d+2]==50&&scanned[f][d+3]==130&&scanned[f][d+4]==50&&scanned[f][d+5]==140&&scanned[f][d+6]==200&&scanned[f][d+7]==2&&scanned[f][d+8]==10101010)
 cout<<"helium";
  
 //element3.
 if(scanned[f][d]==50&&scanned[f][d+1]==120&&scanned[f][d+2]==50&&scanned[f][d+3]==130&&scanned[f][d+4]==50&&scanned[f][d+5]==140&&scanned[f][d+6]==200&&scanned[f][d+7]==3&&scanned[f][d+8]==10101010)
 cout<<"lithium";
  
 //element4.
 if(scanned[f][d]==50&&scanned[f][d+1]==120&&scanned[f][d+2]==50&&scanned[f][d+3]==130&&scanned[f][d+4]==50&&scanned[f][d+5]==140&&scanned[f][d+6]==200&&scanned[f][d+7]==4&&scanned[f][d+8]==10101010)
 cout<<"beryllium";
  
 //element5.
 if(scanned[f][d]==50&&scanned[f][d+1]==120&&scanned[f][d+2]==50&&scanned[f][d+3]==130&&scanned[f][d+4]==50&&scanned[f][d+5]==140&&scanned[f][d+6]==200&&scanned[f][d+7]==5&&scanned[f][d+8]==10101010)
 cout<<"boron";
  
 //element6.
 if(scanned[f][d]==50&&scanned[f][d+1]==120&&scanned[f][d+2]==50&&scanned[f][d+3]==130&&scanned[f][d+4]==50&&scanned[f][d+5]==140&&scanned[f][d+6]==200&&scanned[f][d+7]==6&&scanned[f][d+8]==10101010)
 cout<<"carbon";
  
 //element7.
 if(scanned[f][d]==50&&scanned[f][d+1]==120&&scanned[f][d+2]==50&&scanned[f][d+3]==130&&scanned[f][d+4]==50&&scanned[f][d+5]==140&&scanned[f][d+6]==200&&scanned[f][d+7]==7&&scanned[f][d+8]==10101010)
 cout<<"nitrogen";
  
 //element8.
 if(scanned[f][d]==50&&scanned[f][d+1]==120&&scanned[f][d+2]==50&&scanned[f][d+3]==130&&scanned[f][d+4]==50&&scanned[f][d+5]==140&&scanned[f][d+6]==200&&scanned[f][d+7]==8&&scanned[f][d+8]==10101010)
 cout<<"oxygen";
  
 //element9.
 if(scanned[f][d]==50&&scanned[f][d+1]==120&&scanned[f][d+2]==50&&scanned[f][d+3]==130&&scanned[f][d+4]==50&&scanned[f][d+5]==140&&scanned[f][d+6]==200&&scanned[f][d+7]==9&&scanned[f][d+8]==10101010)
 cout<<"fluorine";
  
 //element10.
 if(scanned[f][d]==50&&scanned[f][d+1]==120&&scanned[f][d+2]==50&&scanned[f][d+3]==130&&scanned[f][d+4]==50&&scanned[f][d+5]==140&&scanned[f][d+6]==200&&scanned[f][d+7]==1&&scanned[f][d+8]==0&&scanned[f][d+9]==10101010)
 cout<<"neon";
  
 //element11.
 if(scanned[f][d]==50&&scanned[f][d+1]==120&&scanned[f][d+2]==50&&scanned[f][d+3]==130&&scanned[f][d+4]==50&&scanned[f][d+5]==140&&scanned[f][d+6]==200&&scanned[f][d+7]==1&&scanned[f][d+8]==1&&scanned[f][d+9]==10101010)
 cout<<"sodium";
  
 //element12.
 if(scanned[f][d]==50&&scanned[f][d+1]==120&&scanned[f][d+2]==50&&scanned[f][d+3]==130&&scanned[f][d+4]==50&&scanned[f][d+5]==140&&scanned[f][d+6]==200&&scanned[f][d+7]==1&&scanned[f][d+8]==2&&scanned[f][d+9]==10101010)
 cout<<"magnesium";
  
 //element13.
 if(scanned[f][d]==50&&scanned[f][d+1]==120&&scanned[f][d+2]==50&&scanned[f][d+3]==130&&scanned[f][d+4]==50&&scanned[f][d+5]==140&&scanned[f][d+6]==200&&scanned[f][d+7]==1&&scanned[f][d+8]==3&&scanned[f][d+9]==10101010)
 cout<<"aluminium";
  
 //element14.
 if(scanned[f][d]==50&&scanned[f][d+1]==120&&scanned[f][d+2]==50&&scanned[f][d+3]==130&&scanned[f][d+4]==50&&scanned[f][d+5]==140&&scanned[f][d+6]==200&&scanned[f][d+7]==1&&scanned[f][d+8]==4&&scanned[f][d+9]==10101010)
 cout<<"silicon";

//element15.
 if(scanned[f][d]==50&&scanned[f][d+1]==120&&scanned[f][d+2]==50&&scanned[f][d+3]==130&&scanned[f][d+4]==50&&scanned[f][d+5]==140&&scanned[f][d+6]==200&&scanned[f][d+7]==1&&scanned[f][d+8]==5&&scanned[f][d+9]==10101010)
 cout<<"phosphorus";
  
 //element16.
 if(scanned[f][d]==50&&scanned[f][d+1]==120&&scanned[f][d+2]==50&&scanned[f][d+3]==130&&scanned[f][d+4]==50&&scanned[f][d+5]==140&&scanned[f][d+6]==200&&scanned[f][d+7]==1&&scanned[f][d+8]==6&&scanned[f][d+9]==10101010)
 cout<<"sulfur";
  
 //element17
 if(scanned[f][d]==50&&scanned[f][d+1]==120&&scanned[f][d+2]==50&&scanned[f][d+3]==130&&scanned[f][d+4]==50&&scanned[f][d+5]==140&&scanned[f][d+6]==200&&scanned[f][d+7]==1&&scanned[f][d+8]==7&&scanned[f][d+9]==10101010)
 cout<<"chlorine";
  
 //element18.
 if(scanned[f][d]==50&&scanned[f][d+1]==120&&scanned[f][d+2]==50&&scanned[f][d+3]==130&&scanned[f][d+4]==50&&scanned[f][d+5]==140&&scanned[f][d+6]==200&&scanned[f][d+7]==1&&scanned[f][d+8]==8&&scanned[f][d+9]==10101010)
 cout<<"argon";
  
 //element19.
 if(scanned[f][d]==50&&scanned[f][d+1]==120&&scanned[f][d+2]==50&&scanned[f][d+3]==130&&scanned[f][d+4]==50&&scanned[f][d+5]==140&&scanned[f][d+6]==200&&scanned[f][d+7]==1&&scanned[f][d+8]==9&&scanned[f][d+9]==10101010)
 cout<<"potassium";
  
 //element20.
 if(scanned[f][d]==50&&scanned[f][d+1]==120&&scanned[f][d+2]==50&&scanned[f][d+3]==130&&scanned[f][d+4]==50&&scanned[f][d+5]==140&&scanned[f][d+6]==200&&scanned[f][d+7]==2&&scanned[f][d+8]==0&&scanned[f][d+9]==10101010)
 cout<<"calcium";
  
 //element21.
 if(scanned[f][d]==50&&scanned[f][d+1]==120&&scanned[f][d+2]==50&&scanned[f][d+3]==130&&scanned[f][d+4]==50&&scanned[f][d+5]==140&&scanned[f][d+6]==200&&scanned[f][d+7]==2&&scanned[f][d+8]==1&&scanned[f][d+9]==10101010)
 cout<<"scandium";
  
 //element22.
 if(scanned[f][d]==50&&scanned[f][d+1]==120&&scanned[f][d+2]==50&&scanned[f][d+3]==130&&scanned[f][d+4]==50&&scanned[f][d+5]==140&&scanned[f][d+6]==200&&scanned[f][d+7]==2&&scanned[f][d+8]==2&&scanned[f][d+9]==10101010)
 cout<<"titanium";
  
 //element23.
 if(scanned[f][d]==50&&scanned[f][d+1]==120&&scanned[f][d+2]==50&&scanned[f][d+3]==130&&scanned[f][d+4]==50&&scanned[f][d+5]==140&&scanned[f][d+6]==200&&scanned[f][d+7]==2&&scanned[f][d+8]==3&&scanned[f][d+9]==10101010)
 cout<<"vanadium";
  
 //element24.
 if(scanned[f][d]==50&&scanned[f][d+1]==120&&scanned[f][d+2]==50&&scanned[f][d+3]==130&&scanned[f][d+4]==50&&scanned[f][d+5]==140&&scanned[f][d+6]==200&&scanned[f][d+7]==2&&scanned[f][d+8]==4&&scanned[f][d+9]==10101010)
 cout<<"chromium";
  
 //element25.
 if(scanned[f][d]==50&&scanned[f][d+1]==120&&scanned[f][d+2]==50&&scanned[f][d+3]==130&&scanned[f][d+4]==50&&scanned[f][d+5]==140&&scanned[f][d+6]==200&&scanned[f][d+7]==2&&scanned[f][d+8]==5&&scanned[f][d+9]==10101010)
 cout<<"maganese";
  
 //element26.
 if(scanned[f][d]==50&&scanned[f][d+1]==120&&scanned[f][d+2]==50&&scanned[f][d+3]==130&&scanned[f][d+4]==50&&scanned[f][d+5]==140&&scanned[f][d+6]==200&&scanned[f][d+7]==2&&scanned[f][d+8]==6&&scanned[f][d+9]==10101010)
 cout<<"iron";
  
 //element27.
 if(scanned[f][d]==50&&scanned[f][d+1]==120&&scanned[f][d+2]==50&&scanned[f][d+3]==130&&scanned[f][d+4]==50&&scanned[f][d+5]==140&&scanned[f][d+6]==200&&scanned[f][d+7]==2&&scanned[f][d+8]==7&&scanned[f][d+9]==10101010)
 cout<<"cobalt";
  
 //element28.
 if(scanned[f][d]==50&&scanned[f][d+1]==120&&scanned[f][d+2]==50&&scanned[f][d+3]==130&&scanned[f][d+4]==50&&scanned[f][d+5]==140&&scanned[f][d+6]==200&&scanned[f][d+7]==2&&scanned[f][d+8]==8&&scanned[f][d+9]==10101010)
 cout<<"nickel";
  
 //element29.
 if(scanned[f][d]==50&&scanned[f][d+1]==120&&scanned[f][d+2]==50&&scanned[f][d+3]==130&&scanned[f][d+4]==50&&scanned[f][d+5]==140&&scanned[f][d+6]==200&&scanned[f][d+7]==2&&scanned[f][d+8]==9&&scanned[f][d+9]==10101010)
 cout<<"copper";
  
 //element30.
 if(scanned[f][d]==50&&scanned[f][d+1]==120&&scanned[f][d+2]==50&&scanned[f][d+3]==130&&scanned[f][d+4]==50&&scanned[f][d+5]==140&&scanned[f][d+6]==200&&scanned[f][d+7]==3&&scanned[f][d+8]==0&&scanned[f][d+9]==10101010)
 cout<<"zinc";

 //hi.
 if(scanned[f][d]==80&&scanned[f][d+1]==90&&scanned[f][d+2]==10101010)
 cout<<"hello";
  
 //hello.
 if(scanned[f][d]==80&&scanned[f][d+1]==50&&scanned[f][d+2]==120&&scanned[f][d+3]==120&&scanned[f][d+4]==150&&scanned[f][d+5]==10101010)
 cout<<"hi";
  
 //hey.
 if(scanned[f][d]==80&&scanned[f][d+1]==50&&scanned[f][d+2]==250&&scanned[f][d+3]==10101010)
 cout<<"hello";

 //hi hh.
 if(scanned[f][d]==80&&scanned[f+0][d+0]==80&&scanned[f+0][d+1]==90&&scanned[f+0][d+2]==1000&&scanned[f+1][d+0]==80&&scanned[f+1][d+1]==80&&scanned[f+1][d+2]==10101010)
 cout<<"hi sir";
  
 //hey what is ur name.
 if(scanned[f][d]==80&&scanned[f+0][d+0]==80&&scanned[f+0][d+1]==50&&scanned[f+0][d+2]==250&&scanned[f+0][d+3]==1000&&scanned[f+1][d+0]==230&&scanned[f+1][d+1]==80&&scanned[f+1][d+2]==10&&scanned[f+1][d+3]==200&&scanned[f+1][d+4]==1000&&scanned[f+2][d+0]==90&&scanned[f+2][d+1]==190&&scanned[f+2][d+2]==1000&&scanned[f+3][d+0]==210&&scanned[f+3][d+1]==180&&scanned[f+3][d+2]==1000&&scanned[f+4][d+0]==140&&scanned[f+4][d+1]==10&&scanned[f+4][d+2]==130&&scanned[f+4][d+3]==50&&scanned[f+4][d+4]==10101010)
 cout<<"my name is SPEEDY";
  
//hey.
 if(scanned[f][d]==80&&scanned[f+0][d+0]==80&&scanned[f+0][d+1]==50&&scanned[f+0][d+2]==250&&scanned[f+0][d+3]==10101010)
 cout<<"hello sir";
  
 //what is 1+1.
 if(scanned[f][d]==230&&scanned[f+0][d+0]==230&&scanned[f+0][d+1]==80&&scanned[f+0][d+2]==10&&scanned[f+0][d+3]==200&&scanned[f+0][d+4]==1000&&scanned[f+1][d+0]==90&&scanned[f+1][d+1]==190&&scanned[f+1][d+2]==1000&&scanned[f+2][d+0]==1&&scanned[f+2][d+1]==43&&scanned[f+2][d+2]==1&&scanned[f+2][d+3]==10101010)
 cout<<"are u serious sir,1+1 is 2";
  
 //who made u.
 if(scanned[f][d]==230&&scanned[f+0][d+0]==230&&scanned[f+0][d+1]==80&&scanned[f+0][d+2]==150&&scanned[f+0][d+3]==1000&&scanned[f+1][d+0]==130&&scanned[f+1][d+1]==10&&scanned[f+1][d+2]==40&&scanned[f+1][d+3]==50&&scanned[f+1][d+4]==1000&&scanned[f+2][d+0]==210&&scanned[f+2][d+1]==10101010)
 cout<<"my programmer is ANGELO ANTU";

 //How are you?.
 if(scanned[f][d]==800&&scanned[f+0][d+0]==800&&scanned[f+0][d+1]==150&&scanned[f+0][d+2]==230&&scanned[f+0][d+3]==1000&&scanned[f+1][d+0]==10&&scanned[f+1][d+1]==180&&scanned[f+1][d+2]==50&&scanned[f+1][d+3]==1000&&scanned[f+2][d+0]==250&&scanned[f+2][d+1]==150&&scanned[f+2][d+2]==210&&scanned[f+2][d+3]==63&&scanned[f+2][d+4]==10101010)
 cout<<"i am fine sir thank you , how are you ?";
  
 //How are you doing?.
 if(scanned[f][d]==800&&scanned[f+0][d+0]==800&&scanned[f+0][d+1]==150&&scanned[f+0][d+2]==230&&scanned[f+0][d+3]==1000&&scanned[f+1][d+0]==10&&scanned[f+1][d+1]==180&&scanned[f+1][d+2]==50&&scanned[f+1][d+3]==1000&&scanned[f+2][d+0]==250&&scanned[f+2][d+1]==150&&scanned[f+2][d+2]==210&&scanned[f+2][d+3]==1000&&scanned[f+3][d+0]==40&&scanned[f+3][d+1]==150&&scanned[f+3][d+2]==90&&scanned[f+3][d+3]==140&&scanned[f+3][d+4]==70&&scanned[f+3][d+5]==63&&scanned[f+3][d+6]==10101010)
 cout<<"i am doing fine sir thank you";
  
 //good morning.
 if(scanned[f][d]==70&&scanned[f+0][d+0]==70&&scanned[f+0][d+1]==150&&scanned[f+0][d+2]==150&&scanned[f+0][d+3]==40&&scanned[f+0][d+4]==1000&&scanned[f+1][d+0]==130&&scanned[f+1][d+1]==150&&scanned[f+1][d+2]==180&&scanned[f+1][d+3]==140&&scanned[f+1][d+4]==90&&scanned[f+1][d+5]==140&&scanned[f+1][d+6]==70&&scanned[f+1][d+7]==10101010)
 cout<<"good morning sir.";
  
 //good afternoon.
 if(scanned[f][d]==70&&scanned[f+0][d+0]==70&&scanned[f+0][d+1]==150&&scanned[f+0][d+2]==150&&scanned[f+0][d+3]==40&&scanned[f+0][d+4]==1000&&scanned[f+1][d+0]==10&&scanned[f+1][d+1]==60&&scanned[f+1][d+2]==200&&scanned[f+1][d+3]==50&&scanned[f+1][d+4]==180&&scanned[f+1][d+5]==140&&scanned[f+1][d+6]==150&&scanned[f+1][d+7]==150&&scanned[f+1][d+8]==140&&scanned[f+1][d+9]==10101010)
 cout<<"good afternoon sir";
  
 //good evening sir.
 if(scanned[f][d]==70&&scanned[f+0][d+0]==70&&scanned[f+0][d+1]==150&&scanned[f+0][d+2]==150&&scanned[f+0][d+3]==40&&scanned[f+0][d+4]==1000&&scanned[f+1][d+0]==50&&scanned[f+1][d+1]==220&&scanned[f+1][d+2]==50&&scanned[f+1][d+3]==140&&scanned[f+1][d+4]==90&&scanned[f+1][d+5]==140&&scanned[f+1][d+6]==70&&scanned[f+1][d+7]==1000&&scanned[f+2][d+0]==190&&scanned[f+2][d+1]==90&&scanned[f+2][d+2]==180&&scanned[f+2][d+3]==10101010)
 cout<<"good evening sir";
  
 //good evening.
 if(scanned[f][d]==70&&scanned[f+0][d+0]==70&&scanned[f+0][d+1]==150&&scanned[f+0][d+2]==150&&scanned[f+0][d+3]==40&&scanned[f+0][d+4]==1000&&scanned[f+1][d+0]==50&&scanned[f+1][d+1]==220&&scanned[f+1][d+2]==50&&scanned[f+1][d+3]==140&&scanned[f+1][d+4]==90&&scanned[f+1][d+5]==140&&scanned[f+1][d+6]==70&&scanned[f+1][d+7]==10101010)
 cout<<"good evening sir.";
  
 //good night.
 if(scanned[f][d]==70&&scanned[f+0][d+0]==70&&scanned[f+0][d+1]==150&&scanned[f+0][d+2]==150&&scanned[f+0][d+3]==40&&scanned[f+0][d+4]==1000&&scanned[f+1][d+0]==140&&scanned[f+1][d+1]==90&&scanned[f+1][d+2]==70&&scanned[f+1][d+3]==80&&scanned[f+1][d+4]==200&&scanned[f+1][d+5]==10101010)
 cout<<"good night sir";
  
 //tell me something.
 if(scanned[f][d]==200&&scanned[f+0][d+0]==200&&scanned[f+0][d+1]==50&&scanned[f+0][d+2]==120&&scanned[f+0][d+3]==120&&scanned[f+0][d+4]==1000&&scanned[f+1][d+0]==130&&scanned[f+1][d+1]==50&&scanned[f+1][d+2]==1000&&scanned[f+2][d+0]==190&&scanned[f+2][d+1]==150&&scanned[f+2][d+2]==130&&scanned[f+2][d+3]==50&&scanned[f+2][d+4]==200&&scanned[f+2][d+5]==80&&scanned[f+2][d+6]==90&&scanned[f+2][d+7]==140&&scanned[f+2][d+8]==70&&scanned[f+2][d+9]==10101010)
 cout<<"ask me anything sir";
  
  
 //ok.
 if(scanned[f][d]==150&&scanned[f+0][d+0]==150&&scanned[f+0][d+1]==110&&scanned[f+0][d+2]==10101010)
 cout<<"ok";
  
 //thank you.
 if(scanned[f][d]==200&&scanned[f+0][d+0]==200&&scanned[f+0][d+1]==80&&scanned[f+0][d+2]==10&&scanned[f+0][d+3]==140&&scanned[f+0][d+4]==110&&scanned[f+0][d+5]==1000&&scanned[f+1][d+0]==250&&scanned[f+1][d+1]==150&&scanned[f+1][d+2]==210&&scanned[f+1][d+3]==10101010)
 cout<<"my pleasure.";
  
 //goodbye.
 if(scanned[f][d]==70&&scanned[f+0][d+0]==70&&scanned[f+0][d+1]==150&&scanned[f+0][d+2]==150&&scanned[f+0][d+3]==40&&scanned[f+0][d+4]==20&&scanned[f+0][d+5]==250&&scanned[f+0][d+6]==50&&scanned[f+0][d+7]==10101010)
 cout<<"see you soon sir";
  
 //how can you help me.
 if(scanned[f][d]==80&&scanned[f+0][d+0]==80&&scanned[f+0][d+1]==150&&scanned[f+0][d+2]==230&&scanned[f+0][d+3]==1000&&scanned[f+1][d+0]==30&&scanned[f+1][d+1]==10&&scanned[f+1][d+2]==140&&scanned[f+1][d+3]==1000&&scanned[f+2][d+0]==250&&scanned[f+2][d+1]==150&&scanned[f+2][d+2]==210&&scanned[f+2][d+3]==1000&&scanned[f+3][d+0]==80&&scanned[f+3][d+1]==50&&scanned[f+3][d+2]==120&&scanned[f+3][d+3]==160&&scanned[f+3][d+4]==1000&&scanned[f+4][d+0]==130&&scanned[f+4][d+1]==50&&scanned[f+4][d+2]==10101010)
 cout<<"you can ask me anything sir";
  
 //i have a question can you help me?.
 if(scanned[f][d]==90&&scanned[f+0][d+0]==90&&scanned[f+0][d+1]==1000&&scanned[f+1][d+0]==80&&scanned[f+1][d+1]==10&&scanned[f+1][d+2]==220&&scanned[f+1][d+3]==50&&scanned[f+1][d+4]==1000&&scanned[f+2][d+0]==10&&scanned[f+2][d+1]==1000&&scanned[f+3][d+0]==170&&scanned[f+3][d+1]==210&&scanned[f+3][d+2]==50&&scanned[f+3][d+3]==190&&scanned[f+3][d+4]==200&&scanned[f+3][d+5]==90&&scanned[f+3][d+6]==150&&scanned[f+3][d+7]==140&&scanned[f+3][d+8]==1000&&scanned[f+4][d+0]==30&&scanned[f+4][d+1]==10&&scanned[f+4][d+2]==140&&scanned[f+4][d+3]==1000&&scanned[f+5][d+0]==250&&scanned[f+5][d+1]==150&&scanned[f+5][d+2]==210&&scanned[f+5][d+3]==1000&&scanned[f+6][d+0]==80&&scanned[f+6][d+1]==50&&scanned[f+6][d+2]==120&&scanned[f+6][d+3]==160&&scanned[f+6][d+4]==1000&&scanned[f+7][d+0]==130&&scanned[f+7][d+1]==50&&scanned[f+7][d+2]==63&&scanned[f+7][d+3]==10101010)
 cout<<"ya sure why not";
  
  

}






void communicate()
{
    int a=0;
    char owner[200];
    cout<<"\n HELLO I AM AI \n ";

   for(int i=0;i<10;i++)
   {
    cout<<"\n SAY ANYTHING : ";
    cin>>owner[200];
    gets(owner);
    scan(owner);
    cout<<"\n ";

   }
    

    

}







void add()
{
    char a[50],b[50];
    int j=1;
    int eee=0;
    int con=0;
ofstream respond("respond.txt",ios::app);

for(int i=0;i<20;i++)
{
cout<<"\n enter line/word : ";
respond<<"\n  ";
cin>>a[200];
gets(a);
respond<<"\n //"<<a;
if(ascii(a[0])==0)
break;

cout<<"\n if(scanned[f][d]=="<<ascii(a[0]);
respond<<"\n if(scanned[f][d]=="<<ascii(a[0]);
con=0;
eee=0;

for( j=0;j<50;j++)
{

cout<<"&&scanned[f+"<<eee<<"][d+"<<j-con<<"]=="<<ascii(a[j]);
respond<<"&&scanned[f+"<<eee<<"][d+"<<j-con<<"]=="<<ascii(a[j]);
if(ascii(a[j])==1000)
{
    eee++;
    con=j+1;

}

if(ascii(a[j])==10101010)
{
respond<<")";
break;
}

}


cout<<"\n enter response :";
cin>>b[200];
gets(b);
cout<<"\n cout<<"<<b<<";";
respond<<"\n cout<<"<<"#"<<b<<"#"<<";";
}

}



void addobj()
{
    ofstream obj("object.txt",ios::app);
    char name[20];
    int color,touch,taste,sound,smell;
    long size;

for(int x=0;x<20;x++)
{

    cout<<"\n enter object name :";
    cin>>name[20];
    gets(name);

    if(ascii(name[20])==0)
    break;

    cout<<"\n enter color (red[0],blue[1],green[2],violet[3],black[4],pink[5],yellow[6],orange[7],white[8],grey[9],brown[10],any[11],none[12]) :";
    cin>>color;
   

    cout<<"\n enter touch (soft[0],matte[1],rough[2],pointy[3],shock[4],texture[5],hairy[6],any[7],none[8]) :";
    cin>>touch;
   

    cout<<"\n enter taste (sweet[0],sour[1],pungent[2],chemical[3],bitter[4],salty[5]),any[6],none[7] :";
    cin>>taste;
    

    cout<<"\n enter size in mm (electron[0],atom[1],matter[above3]) :";
    cin>>size;

    cout<<"\n enter sound (inaudible[0],unpleasant[1],soft[2],loud[3],noise[4],music[5],harsh[6]),any[7],none[8] :";
    cin>>sound;
   

    cout<<"\n enter smell (fruity[0],lemon[1],fragrant[2],mint[3],nutty[4],woody[5],pungent[6],chemical[7],decaying[8]),any[9],none[10] :";
    cin>>smell;



    obj<<"\n"<<"//"<<name;
    obj<<"\n"<<"object ";
    for(int i=0;i<20;i++)
    {
    obj<<name[i];
    if(ascii(name[i+1])==10101010)
    {
        obj<<";";
        break;
    }
    }
    
    obj<<"\n"<<name<<"color="<<color<<";";
    obj<<"\n"<<name<<"size="<<size<<";";
    obj<<"\n"<<name<<"smell="<<smell<<";";
    obj<<"\n"<<name<<"touch="<<touch<<";";
    obj<<"\n"<<name<<"taste="<<taste<<";";
    obj<<"\n"<<name<<"sound="<<sound<<";";
    

    obj<<"\n";
    obj<<"\n";
    obj.close();



}
}






int main()
{
   
    system("cls");
    cout<<"\n HELLO I AM AI";
   
    
    
     fstream gg;

    char rea[200];
    gg.open("basicf.txt",ios::in);
    while(gg.getline(rea,200))
    { 
        
        cout<<rea<<"\n";
        
    }

communicate();


    
    gg.close();
    
    
    
    
    int d,d1,m,m1,y,y1,y2,y3;
    d=ascii(rea[7]);
    d1=ascii(rea[8]);
    m=ascii(rea[10]);
    m1=ascii(rea[11]);
    y=ascii(rea[13]);
    y1=ascii(rea[14]);
    y2=ascii(rea[15]);
    y3=ascii(rea[16]);


    int date,month,year;
    date=d*10+d1;
    month=m*10+m1;
    year=y*1000+y1*100+y2*10+y3;

    cout<<"\n YOUR AGE IS :";
    cout<<2021-year;
    
    
    
    return 0;

}