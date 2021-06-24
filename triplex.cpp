#include <iostream>
#include <ctime>
void PrintIntroduction(int Difficulty){
    std :: cout<<"\nYou're a thief robbing a bank of Dificulty: "<<Difficulty;
    std :: cout<<"\nEnter the vault code\n";
}
bool PlayGame(int Difficulty){
    PrintIntroduction(Difficulty);
    const int a=rand()%Difficulty+Difficulty,b=rand()%Difficulty+Difficulty,c=rand()%Difficulty+Difficulty;
    const int CodeSum  = a+b+c;
    const int CodeProduct = a*b*c;

    std::cout<<"The CodeSums upto "<< CodeSum;
    std::cout<<"\nThe code multiplys to give "<< CodeProduct;
    std::cout<<"\nEnter 3 didgit code\n";
    int GA,GB,GC;
    std::cin>>GA>>GB>>GC;
    int GS,GP;
    GS=GA+GB+GC;
    GP=GA*GB*GC;
    if(GS==CodeSum && GP==CodeProduct){
        std::cout<<"Entered the vault successfully move to the next wall";
        return true;
    }
    else{
        std::cout<<"Run the police is here try again\n";
        return false;
    }
}
int main()
{   srand(time(NULL));
    int Levelcomplete=1;
    const int Max=10;

     while(Levelcomplete <= Max){
    bool bLevelcomplete=PlayGame(Levelcomplete);
    std::cin.clear();
    std::cin.ignore();

    if(bLevelcomplete){
        Levelcomplete=Levelcomplete+1;
    }
}
   std::cout<<"\nLooted everything successfull get out of the bank!";
    return 0;
}