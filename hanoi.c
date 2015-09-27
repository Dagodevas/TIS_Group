#include<iostream>

using namespace std;
void prenos(int,char,char,char);

int main(){
    int poc;
    cout<<"Pocet diskov:";
    cin>>poc;
    cout<<endl;
    prenos(poc,'A','B','C');
    system("PAUSE");
    return 0;
}

void prenos(int count, char vez1, char vez3 , char vez2){
     
     if (count>0){
        prenos(count -1 , vez1 , vez2 , vez3);              
        cout<< "Prenes disk " << count << " z veze " << vez1 << " do veze " << vez3 << endl;
        prenos(count-1 , vez2,vez3,vez1);
        }    
}         
