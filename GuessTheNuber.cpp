#include<cstdlib>
#include<iostream>
#include<ctime>
using namespace std;
int main(){
    char name[20];
    
    cout<<"Enter your name"<<endl;
    cin>>name;
    srand((unsigned int) time(NULL));
    int number = rand()%100+1;
    int guess ;
    int i=1; 
    do{
        cout<<"enter the number b/w zero to 100"<<endl;
        cin>>guess;
        if(guess>number)
            cout<<"guess the lower"<<endl;
        else if(guess<number)
            cout<<"guess the higer"<<endl;
        else
            cout<<"you won";
            i++;
        }while(i<=5) ;
        cout<<"You loose"<<endl;
}
