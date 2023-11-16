#include <iostream>
#define MAKS 8
using namespace std;

main(){

int baris,kolom,hasil;


for (baris =1;baris <=  MAKS; baris++)
    {

            
        
for (kolom = 1; kolom <= MAKS; kolom++)   
                {

                    hasil = baris * kolom;

                    cout <<hasil<<"\t";

    
                                    }
                                                
    }

}