#include<iostream>
using namespace std;
char matrix[3][3]={'1','2','3','4','5','6','7','8','9'};
void display()
{
for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cout<<"\t"<< matrix[i][j]<<" ";
         //   cout<<"\t";
            cout<<"\n    ----------------------------";
        cout<<endl<<endl;

    }
}
char check()
{

  for(int j=0;j<3;j++)
    {
      if(matrix[j][0]=='0'&&matrix[j][1]=='0'&&matrix[j][2]=='0')
       return 'z';
    }

for(int i=0;i<3;i++)
{
  if(matrix[0][i]=='0'&&matrix[1][i]=='0'&&matrix[2][i]=='0')
       return 'z';
}
for(int j=0;j<3;j++)
    {
      if(matrix[j][0]=='X'&&matrix[j][1]=='X'&&matrix[j][2]=='X')
       return 'o';
    }

for(int i=0;i<3;i++)
{
  if(matrix[0][i]=='X'&&matrix[1][i]=='X'&&matrix[2][i]=='X')
       return 'o';
}
if(matrix[0][0]=='0'&&matrix[1][1]=='0'&&matrix[2][2]=='0')
    return 'z';
if(matrix[0][0]=='X'&&matrix[1][1]=='X'&&matrix[2][2]=='X')
    return 'o';
if(matrix[0][2]=='0'&&matrix[1][1]=='0'&&matrix[2][0]=='0')
    return 'z';
if(matrix[0][2]=='X'&&matrix[1][1]=='X'&&matrix[2][0]=='X')
    return 'o';
}
void start()
{
char g;
do
{
 int num=1;
    int i=1,j=0;
    char m,n,a='f';
    int v=0;
    string p1,p2;
    cout<<"enter First's player name : "<<endl<<endl;
    cin>>p1;
    cout<<"enter Second's player name : "<<endl<<endl;
    cin>>p2;
display();

while(i<10)
    {
        if(num==1)
        {
          cout<<p1<<" : index where u want your zero(0) to be placed : "<<endl<<endl;
          cin>>m;
    for(int i=0;i<3;i++)
      {
            for(int j=0;j<3;j++)
            {
                   if(matrix[i][j] == m)
                         { a='t';
                           matrix[i][j]='0';
                        }
            }

      }

        if(a=='t')
    a='f';
           else
           {
               cout<<"INVALID INDEX"<<endl<<endl;
               i--;
           }

num--;
       }
else
{
 cout<<p2<<" : index where u want your cross(X) to be placed : "<<endl<<endl;
           cin>>n;
           for(int i=0;i<3;i++)
           {
               for(int j=0;j<3;j++)
               {
                   if(matrix[i][j]==n)
                   {

                   a='t';
                    matrix[i][j]='X';
               }
           }
           }

num++;
if(a=='t')
    a='f';
           else
           {

           i--;
            cout<<"INVALID INDEX"<<endl<<endl;
           }
}
i++;
 display();
 char ans=check();
    if(ans=='z')
    {   v=1;
        cout<<"----- "<<p1<<" WINS--------"<<endl<<endl;
        break;
    }
     if(ans=='o')
    {   v=1;
        cout<<"----- "<<p2<<" WINS--------"<<endl<<endl;
        break;
    }

}
if(v!=1)
cout<<"----------GAME DRAW-----------"<<endl<<endl;
cout<<"THANKS U GUYS....."<<endl;
cout<<"*********DO YOU WANT TO CONTINUE: (y/n)***********"<<endl<<endl;
cin>>g;
if(g=='y')
{
    char p='1';
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            matrix[i][j]=p++;
    }
}
}while(g=='y');
}

int main()
{
cout<<"SO LET'S START THE GAME" <<endl<<endl;
start();
}
