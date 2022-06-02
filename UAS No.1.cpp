#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main()
{
    char kota_1[10],kota_2[10],kota_3[10],kota_4[10],kota_5[10];
    int jumlah,panjang, hasil_1,hasil_2,hasil_3,hasil_4,hasil_5,hasil_6,hasil_7;

    //input jumlah kota
	cout<<"---------------------------------------------------------------------------"<<endl;
    cout<<"Berapa jumlah kota dalam kerajaan Britan : ";
    cin>>jumlah;
	cout<<"---------------------------------------------------------------------------"<<endl;

    //input nama kota
    cout<<"Kota Pertama : ";
    cin>>kota_1;
    cout<<"Kota Kedua   : ";
    cin>>kota_2;
    cout<<"Kota Ketiga  : ";
    cin>>kota_3;
    cout<<"Kota Keempat : ";
    cin>>kota_4;
	cout<<"Kota kelima  : ";
	cin>>kota_5;
	cout<<endl;

	//deklarasi graph
	//menampilkan graph yang terjadi
    cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"* Sisi-sisinya adalah : "<<endl;
	cout<<"---------------------------------------------------------------------------"<<endl;
    cout<<kota_1<<kota_2<<",";
    cout<<kota_1<<kota_4<<",";
    cout<<kota_1<<kota_5<<",";
    cout<<kota_2<<kota_3<<",";
    cout<<kota_3<<kota_5<<",";
    cout<<kota_3<<kota_4<<",";
    cout<<kota_4<<kota_5<<endl<<endl;

	//deklarasi edge
	//menampilkan panjang jalan yang menghubungkan vertex
	cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"Panjang jalan antar kota brintan : "<<endl;
	cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"panjang "<<kota_1<<" ke "<<kota_2<< ": "; cin>> hasil_1;
	cout<<"panjang "<<kota_1<<" ke "<<kota_4<< ": "; cin>> hasil_2;
	cout<<"panjang "<<kota_1<<" ke "<<kota_5<< ": "; cin>> hasil_3;
	cout<<"panjang "<<kota_2<<" ke "<<kota_3<< ": "; cin>> hasil_4;
	cout<<"panjang "<<kota_3<<" ke "<<kota_5<< ": "; cin>> hasil_5;
	cout<<"panjang "<<kota_3<<" ke "<<kota_4<< ": "; cin>> hasil_6;
	cout<<"panjang "<<kota_4<<" ke "<<kota_5<< ": "; cin>> hasil_7;
	cout<<endl;

	//deklarasi adjacent
	//menampilkan jalan yang menghubungkan kedua simpul (x,y,z)
	cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"seluruh jalan yang ada dalam kerajaan britan dan panjang jalannya : "<< endl;
	cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"("<<kota_1<<","<<kota_2<<","<<hasil_1<<") ";
	cout<<"("<<kota_1<<","<<kota_4<<","<<hasil_2<<") ";
	cout<<"("<<kota_1<<","<<kota_5<<","<<hasil_3<<") ";
	cout<<"("<<kota_2<<","<<kota_3<<","<<hasil_4<<") ";
	cout<<"("<<kota_3<<","<<kota_5<<","<<hasil_5<<") ";
	cout<<"("<<kota_3<<","<<kota_4<<","<<hasil_6<<") ";
	cout<<"("<<kota_4<<","<<kota_5<<","<<hasil_7<<") ";
	cout<<endl<<endl;

	//hasil
	//menampilkan tempat pedagang berada
	cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"kota tempat pedagang sekarang berada : "<<endl<<endl;
	cout<<kota_1;
	cout<<endl<<endl;

	//menampilkan kota yang diserang naga
	cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"kota yang diserang naga : "<<endl<<endl;
	cout<<kota_3;
	cout<<endl<<endl;

	//menampilkan kota yang terdapat kastil
	cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"kota yang memiliki kastil : "<<endl<<endl;
	cout<<kota_5;
	cout<<endl<<endl;

	//menampilkan vertex tercepat untuk selamat
	cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"jalur yang paling cepat ditempuh : "<<endl<<endl;
	cout<<kota_1<<"-"<<kota_4<<"-"<<kota_5<<endl;
	cout<<endl<<endl;

	//total edge yang harus ditempuh
    cout<<"---------------------------------------------------------------------------"<<endl;
	cout<< "dengan jarak : "<<endl<<endl;
	cout<<hasil_2+hasil_7<<endl<<endl;

	getch();
	return 0;
}
