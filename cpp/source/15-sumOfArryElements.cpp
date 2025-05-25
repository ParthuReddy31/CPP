#include <iostream>

using namespace std;

double sumArray( double* arry, int size){
    double sum = 0;
    for (int i = 0; i< size ; i++ ){
        sum += *(arry+i);
    }
    return sum;
}

int main(){
    int size = 4;
    double sales[] = {22, 44, 55, 66} ;
    double TotalSales = sumArray(sales, 4);
    cout << "Total sales : " << TotalSales << '\n';

}