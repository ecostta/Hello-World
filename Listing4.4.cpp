//Listing 4.4: A Demonstration of Branching Based on Relational Operators

#include<iostream>
int main()
{
using std::cout;
using std::cin;

int MetsScore, YankeesScore;
cout << "Enter the score for the Mets: ";
cin >> MetsScore;

cout << "Enter the score for the Yankees: ";
cin >> YankeesScore;

if(MetsScore>YankeesScore)
cout << "Let's go Mets!\n";

if(MetsScore<YankeesScore)
{
cout << "Go Yankess!\n";
}

if(MetsScore == YankeesScore)
{

cout << "A tie? Naah, can't be.\n";
cout << "Give me the real score for the Yanks? ";
cin >> YankeesScore;

if(MetsScore>YankeesScore)
cout << "Knew it! Let's go Mets!\n";

if(MetsScore<YankeesScore)
cout << "Knew it! Let's go Yanks!\n";

if(MetsScore == YankeesScore)
cout << "Wow, it really was a tie!\n";
}



cout <<"\nThanks for telling me.\n";
return 0;











}
