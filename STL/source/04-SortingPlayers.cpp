#include <iostream>
#include <list>
using namespace std;

void displayRating(const list<int>& palyerRating){
    for (list<int>::const_iterator i=palyerRating.begin(); i!=palyerRating.end(); i++){
        cout << "Player Rating- " << *i << endl;
    }
}

void InsertPlayerIntoOrderdList( int newPlayerRating, list<int>& playerByRating){
    for (list<int>::iterator i=playerByRating.begin(); i!=playerByRating.end(); i++){
        if(*i > newPlayerRating){
            playerByRating.insert(i , newPlayerRating);
            return;
        }
    }
    playerByRating.push_back(newPlayerRating);
}

int main(){

    list<int> allPlayers = {1,5,6,7,6,3,4,2,7,6,5,7,3,4,2,9,8,10,9};
    list<int> beginers;
    list<int> pros;

    for (list<int>::iterator i=allPlayers.begin(); i!=allPlayers.end(); i++){
        int rating= *i;
        if( rating>=1  && rating<=5){
            InsertPlayerIntoOrderdList(rating, beginers);
        }
        else if(rating>=6  && rating<=10){
            InsertPlayerIntoOrderdList(rating, pros);
        } 
    }
    cout << "------" <<'\n';
    cout << "--- Beginer Players ---" << '\n';
    cout << "------" <<'\n';
    displayRating(beginers);
    cout << "------" <<'\n';
    cout << "--- Pro Players ---" << '\n';
    cout << "------" << '\n';
    displayRating(pros);

}