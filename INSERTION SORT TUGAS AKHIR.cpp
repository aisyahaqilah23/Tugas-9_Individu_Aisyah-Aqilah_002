#include<iostream>
using namespace std;

// fungsi utama atau program utama
int main(){

	//Inisialisasi Variabel dengan tipe data integer
    int looping1, looping2, batas_elemen, temp, input_elemen[50];
    
    
    cout<<"\t\tINSERTION SORT KELOMPOK 8 B\n";  //Menampilkan tulisan "INSERTION SORT KELOMPOK 8 B"
    
    cout<<"\nInput Batas Elemen Array	: ";	//Input Batas array menggunakan angka
    cin>>batas_elemen;
    cout<<"\nInput List Array	: \n";			//Input elemen array menggunakan angka
    
    
    //perulangan atau looping untuk memasukkan list array
    for(looping1=0; looping1<batas_elemen; looping1++)
    {
    	cout << "Elemen ke-"<<looping1<< ": "; 		//Menampilkan tulisan "Elemen ke-"
    	
    	//perintah untuk memasukkan elemen array
    	cin>>input_elemen[looping1];
    } 
    
    //perulangan atau looping untuk proses sorting
    for(looping1=1; looping1<=batas_elemen-1; looping1++)
    {
    	//Variabel untuk menyimpan array sementara
        temp=input_elemen[looping1];
        looping2=looping1-1;
 
 		//Digunakan untuk perbandingan
        while((temp<input_elemen[looping2])&&(looping2>=0)) //temp : sebagai tempat penyimpanan sementara saat menukar nilai
        {
        	//perintah untuk memindahkan elemen array kedepan sesuai urutan
            input_elemen[looping2+1]=input_elemen[looping2];
            looping2=looping2-1;
        }
        
        //Perintah untuk mengurutkan elemen array dari yang terkecil
        input_elemen[looping2+1]=temp;
    }
 
    cout<<"\nHASIL SETELAH SORTING\n";  // Menampilkan tulisan "HASIL SETELAH SORTING"
    
    //perulangan atau looping untuk menampilkan hasil sorting
    for(looping1=0; looping1<batas_elemen; looping1++)
    {
    	//Perintah menampilkan hasil sorting
        cout<<"[" <<input_elemen[looping1]<< "] ";
    }
 
    return 0; //end code
}
