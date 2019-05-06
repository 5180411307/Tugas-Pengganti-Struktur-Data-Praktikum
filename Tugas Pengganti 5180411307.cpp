#include <conio.h>
#include <iostream>
#include <windows.h>
using namespace std;

struct data{
char nama_pasien[20],alamat[20],Dokter[20];};
data batas[100];
int a,b,c,d;

void inputdata()
{
    cout<<"\nJumlah Data Yang Akan diinput : ";cin>>b;
   d=0;
   for(c=0;c<b;c++){
   d=d+1;
   cout<<"\nData ke-"<<d<<endl;
   cout<<"Nama Pasien\t: ";cin>>batas[a].nama_pasien;
   cout<<"Alamat\t: ";cin>>batas[a].alamat;
   cout<<"Dokter\t: ";cin>>batas[a].Dokter;
   a++;}system("cls");}



void lihatdata()
{int i,j;
 cout<<"\n================================Menampilkan Data===============================\n\n";
 cout<<"===============================================================================\n";
 cout<<"\tNO\tNama Pasien\tAlamat\t\tDokter\t\n";
 j=0;
 for(i=0;i<a;i++)
 {j=j+1;
  cout<<"===============================================================================\n";
  cout<<"\t"<<j<<"\t";
  cout<<batas[i].nama_pasien<<"\t\t";
  cout<<batas[i].alamat<<"\t\t";
  cout<<batas[i].Dokter<<"\t";cout<<endl;
  }
  cout<<"=============================================================================== ";getch();system("cls");}

void hapusdata()
{int x,y;
 cout<<"Hapus data ke-";cin>>x;
 y=x-1;
 a--;
 for(int i=y;i<a;i++)
 {batas[i]=batas[i+1];}
 system("cls");
 cout<<"\n\n\n\n\n\n\n\n\n++++++++++++++++++++++++++++++ Data ke-"<<x<<" Terhapus ++++++++++++++++++++++++++++++";
 getch();system("cls");
}

void editdata(){
int k,l;
cout<<"Masukan Data yang akan diedit : ";cin>>k;
l=k-1;
cout<<"Nama Pasien\t: ";cin>>batas[l].nama_pasien;
cout<<"Alamat\t: ";cin>>batas[l].alamat;
cout<<"Dokter\t: ";cin>>batas[l].Dokter;
lihatdata();
}

int main()
{     int pilih;
 char w;
 cout<<"\n\n\n\n\n=============================PROGRAM PENGOLAH DATA PASIEN=============================";
 getch();system("cls");
  awal:
  cout<<"\n================================ PILIHAN MENU =================================";
  cout<<"\n1. Masukkan data";
  cout<<"\n2. Hapus Data";
  cout<<"\n3. Lihat Data";
  cout<<"\n4. Edit Data";
  cout<<"\n5. Keluar";
  cout<<"\n\nMasukkan Pilihan : ";
  cin>>pilih;
  if(pilih==1)
   {system("cls");inputdata();goto awal;}
  if(pilih==2)
   {system("cls");hapusdata();goto awal;}
  if(pilih==3)
   {system("cls");lihatdata();goto awal;}
  if(pilih==4)
   {system("cls");editdata();goto awal;}
  if(pilih==5)
   {system("cls");
    cout<<"\n\n\n\n\n\n\n\n                     APAKAH ANDA YAKIN KELUAR DARI PROGRAM??\n\n";
    cout<<"                         [Y]                         [N]                  \n"<<endl;
    cout<<"                                         ";cin>>w;
    if(w=='y'||w=='Y')
    {system("cls");
     cout<<"\n\n\n\n\n******************************* PROGRAM SELESAI *******************************";}
    if(w=='n'||w=='N')
           {system("cls");goto awal;}}
  else
   {system("cls");cout<<"Pilihan 1-5";getch();system("cls");goto awal;}
}
