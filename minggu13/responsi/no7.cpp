#include <iostream>
using namespace std;

  

int main(){
  int row,spasi,bintang,i,j,k;
  row = 3;
  spasi = (row*2)-1;
  bintang = 1;
  cout << endl;
  cout << "No. 7a" << endl;
  for (j=0; j<=(row*2);j++){
     for(i=1;i<=spasi;i++){
          cout << "   " << " ";
     }
     for(i=1;i<=bintang;i++){
          cout << "*  " << " " ;
     }
     if(j<row){
          spasi = spasi-1;
          bintang = bintang+2;
     }
     else{
          spasi=spasi+1;
          bintang=bintang-2;
     }
     cout << endl;
  }
  cout << endl;
  cout << "No. 7b\n" << endl;
  int baris = 4;
  for(i=0;i<baris;i++){
     for(j=0;j<i;j++){
          cout << "* " << " ";
     }
     cout << "* "<< endl;
  }
  for(i=0;i<baris-1;i++){
     for(j=i;j<baris-1;j++){
          cout << "* " << " ";
     }
     cout << endl;
  }
  
  int baris2 = 4;
  cout << endl;
  cout << "No. 7c\n" << endl;
  for(i=0;i<baris2;i++){
     for(j=0;j<i;j++){
          cout << "  " << "  ";
     }
     cout << "* " << endl;
  }
  for(i=0;i<baris2+1;i++){
          cout << "* " << "  ";
     }
    return 0;
}