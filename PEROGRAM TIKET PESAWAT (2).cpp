#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;
int main ()
{
                char kode_kota,kelas,kembali, username[20], nama[20], password[20];
                int harga_tiket,PPN,jum_bayar;
  
                cout<< "===========================================\n";
                cout<< "Selamat Datang di My International Ticket \n";
                cout<< "===========================================\n";
                cout<< "Silahkan Log in Terlebih Dahulu : \n";
                cout<< "Masukkan Username : ";
                scanf("%s", &username);
                cout<< "Masukkan Password : ";
                scanf("%s", &password); 
                printf("\n");
            
                if(strcmp(username, "Ripa")==0 && strcmp(password, "12345")==0);
  
                do
                {
                                printf("\n__________________ HARGA TIKET PESAWAT ___________________\n");
                                cout<<"\n==========================================================\n";
                                cout<<"Tujuan Anda        Kelas         Kelas        Kelas     \n";
                                cout<<"                   Ekonomi(E)    Bisnis(B)    Eksekutif(X)\n";
                                cout<<"==========================================================\n";
                                cout<<"1. KOREA SELATAN    $35           $50          $70         \n";
                                cout<<"2. LONDON           $45           $60          $80         \n";
                                cout<<"3. NEW YORK         $65           $80          $100        \n";
                                cout<<"4. BANGKOK          $30           $55          $75         \n";
                                cout<<"5. KUALA LUMPUR     $25           $40          $60         \n";
                                cout<<"6. TOKYO            $35           $50          $70         \n";
                                cout<<"7. BERLIN           $40           $65          $85         \n";
                                cout<<"8. BEIJING          $32           $57          $77         \n";
                                cout<<"9. AMSTERDAM        $50           $65          $85         \n";
                                cout<<"10. DUBLIN          $45           $60          $70         \n";
                                cout<<"==========================================================\n";
                                printf("\n___________________ Pilih Kota Tujuan ____________________\n");
                                cout<<"\nMasukan Kode Kota [1-10]             : ";
                                cin>>kode_kota;
                               
                                switch(kode_kota)
                                {
                                     case '1':
                                           {
                                             cout<<"Kota Tujuan Anda                    : KOREA SELATAN\n"<<endl;
                                     printf("___________________ Pilih Kelas Pesawat ___________________");
                                              cout<<"\nMasukan Kode Kelas Pesawat [E/B/X]  : ";
                                              cin>>kelas;
                                              cout<<endl;
                                              if (kelas=='E' || kelas=='e')
                                                  {
                                                      harga_tiket=35*13000;
                                                       PPN=0;
                                                       jum_bayar=harga_tiket+PPN;
                                                       cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                       cout<<"PPN          = Rp."<<PPN<<endl;
                                                       cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                    }
                                                     else if (kelas=='B' || kelas=='b')
                                                       {
                                                           harga_tiket=50*13000;
                                                           PPN=0.05*harga_tiket;
                                                           jum_bayar=harga_tiket+PPN;
                                                           cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                           cout<<"PPN          = Rp."<<PPN<<endl;
                                                           cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                          }
                                                            else if (kelas=='X' || kelas=='x')
                                                            {
                                                               harga_tiket=70*13000;
                                                                PPN=0.1*harga_tiket;
                                                                jum_bayar=harga_tiket+PPN;
                                                                cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                                cout<<"PPN          = Rp."<<PPN<<endl;
                                                                cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                               }
                                                                break;
                                           }
                                           case '2':
                                                 {
                                                    cout<<"Kota Tujuan Anda                    : LONDON\n"<<endl;
                                     printf("___________________ Pilih Kelas Pesawat ___________________");
                                                    cout<<"\nMasukan Kode Kelas Pesawat [E/B/X]  : ";
                                                    cin>>kelas;
                                                    cout<<endl;
                                                    if (kelas=='E' || kelas=='e')
                                                     {
                                                        harga_tiket=45*13000;
                                                        PPN=0;
                                                         jum_bayar=harga_tiket+PPN;
                                                         cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                         cout<<"PPN          = Rp."<<PPN<<endl;
                                                          cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                       }
                                                         else if (kelas=='B' || kelas=='b')
                                                            {
                                                              harga_tiket=60*13000;
                                                               PPN=0.05*harga_tiket;
                                                               jum_bayar=harga_tiket+PPN;
                                                               cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                               cout<<"PPN          = Rp."<<PPN<<endl;
                                                               cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                               }
                                                                 else if (kelas=='X' || kelas=='x')
                                                                {
                                                                   harga_tiket=80*13000;
                                                                    PPN=0.1*harga_tiket;
                                                                     jum_bayar=harga_tiket+PPN;
                                                                     cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                                    cout<<"PPN          = Rp."<<PPN<<endl;
                                                                    cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                                  }
                                                                    break;
                                                         }
                                                         case '3':
                                                 {
                                                    cout<<"Kota Tujuan Anda                    : NEW YORK\n"<<endl;
                                     printf("___________________ Pilih Kelas Pesawat ___________________");
                                                    cout<<"\nMasukan Kode Kelas Pesawat [E/B/X]  : ";
                                                    cin>>kelas;
                                                    cout<<endl;
                                                    if (kelas=='E' || kelas=='e')
                                                     {
                                                        harga_tiket=65*13000;
                                                        PPN=0;
                                                         jum_bayar=harga_tiket+PPN;
                                                         cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                         cout<<"PPN          = Rp."<<PPN<<endl;
                                                          cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                       }
                                                         else if (kelas=='B' || kelas=='b')
                                                            {
                                                              harga_tiket=80*13000;
                                                               PPN=0.05*harga_tiket;
                                                               jum_bayar=harga_tiket+PPN;
                                                               cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                               cout<<"PPN          = Rp."<<PPN<<endl;
                                                               cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                               }
                                                                 else if (kelas=='X' || kelas=='x')
                                                                {
                                                                   harga_tiket=100*13000;
                                                                    PPN=0.1*harga_tiket;
                                                                     jum_bayar=harga_tiket+PPN;
                                                                     cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                                    cout<<"PPN          = Rp."<<PPN<<endl;
                                                                    cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                                  }
                                                                    break;
                                                         }
                                                         case '4':
                                                 {
                                                    cout<<"Kota Tujuan Anda                    : BANGKOK\n"<<endl;
                                     printf("___________________ Pilih Kelas Pesawat ___________________");
                                                    cout<<"\nMasukan Kode Kelas Pesawat [E/B/X]  : ";
                                                    cin>>kelas;
                                                    cout<<endl;
                                                    if (kelas=='E' || kelas=='e')
                                                     {
                                                        harga_tiket=30*13000;
                                                        PPN=0;
                                                         jum_bayar=harga_tiket+PPN;
                                                         cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                         cout<<"PPN          = Rp."<<PPN<<endl;
                                                          cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                       }
                                                         else if (kelas=='B' || kelas=='b')
                                                            {
                                                              harga_tiket=55*13000;
                                                               PPN=0.05*harga_tiket;
                                                               jum_bayar=harga_tiket+PPN;
                                                               cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                               cout<<"PPN          = Rp."<<PPN<<endl;
                                                               cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                               }
                                                                 else if (kelas=='X' || kelas=='x')
                                                                {
                                                                   harga_tiket=75*13000;
                                                                    PPN=0.1*harga_tiket;
                                                                     jum_bayar=harga_tiket+PPN;
                                                                     cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                                    cout<<"PPN          = Rp."<<PPN<<endl;
                                                                    cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                                  }
                                                                    break;
                                                         }
                                                         case '5':
                                                 {
                                                    cout<<"Kota Tujuan Anda                    : KUALA LUMPUR\n"<<endl;
                                     printf("___________________ Pilih Kelas Pesawat ___________________");
                                                    cout<<"\nMasukan Kode Kelas Pesawat [E/B/X]  : ";
                                                    cin>>kelas;
                                                    cout<<endl;
                                                    if (kelas=='E' || kelas=='e')
                                                     {
                                                        harga_tiket=25*13000;
                                                        PPN=0;
                                                         jum_bayar=harga_tiket+PPN;
                                                         cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                         cout<<"PPN          = Rp."<<PPN<<endl;
                                                          cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                       }
                                                         else if (kelas=='B' || kelas=='b')
                                                            {
                                                              harga_tiket=40*13000;
                                                               PPN=0.05*harga_tiket;
                                                               jum_bayar=harga_tiket+PPN;
                                                               cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                               cout<<"PPN          = Rp."<<PPN<<endl;
                                                               cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                               }
                                                                 else if (kelas=='X' || kelas=='x')
                                                                {
                                                                   harga_tiket=60*13000;
                                                                    PPN=0.1*harga_tiket;
                                                                     jum_bayar=harga_tiket+PPN;
                                                                     cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                                    cout<<"PPN          = Rp."<<PPN<<endl;
                                                                    cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                                  }
                                                                    break;
                                                         }
                                                          case '6':
                                                 {
                                                    cout<<"Kota Tujuan Anda                    : TOKYO\n"<<endl;
                                     printf("___________________ Pilih Kelas Pesawat ___________________");
                                                    cout<<"\nMasukan Kode Kelas Pesawat [E/B/X]  : ";
                                                    cin>>kelas;
                                                    cout<<endl;
                                                    if (kelas=='E' || kelas=='e')
                                                     {
                                                        harga_tiket=35*13000;
                                                        PPN=0;
                                                         jum_bayar=harga_tiket+PPN;
                                                         cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                         cout<<"PPN          = Rp."<<PPN<<endl;
                                                          cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                       }
                                                         else if (kelas=='B' || kelas=='b')
                                                            {
                                                              harga_tiket=50*13000;
                                                               PPN=0.05*harga_tiket;
                                                               jum_bayar=harga_tiket+PPN;
                                                               cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                               cout<<"PPN          = Rp."<<PPN<<endl;
                                                               cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                               }
                                                                 else if (kelas=='X' || kelas=='x')
                                                                {
                                                                   harga_tiket=70*13000;
                                                                    PPN=0.1*harga_tiket;
                                                                     jum_bayar=harga_tiket+PPN;
                                                                     cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                                    cout<<"PPN          = Rp."<<PPN<<endl;
                                                                    cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                                  }
                                                                    break;
                                                         }
                                                          case '7':
                                                 {
                                                    cout<<"Kota Tujuan Anda                    : BERLIN\n"<<endl;
                                     printf("___________________ Pilih Kelas Pesawat ___________________");
                                                    cout<<"\nMasukan Kode Kelas Pesawat [E/B/X]  : ";
                                                    cin>>kelas;
                                                    cout<<endl;
                                                    if (kelas=='E' || kelas=='e')
                                                     {
                                                        harga_tiket=40*13000;
                                                        PPN=0;
                                                         jum_bayar=harga_tiket+PPN;
                                                         cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                         cout<<"PPN          = Rp."<<PPN<<endl;
                                                          cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                       }
                                                         else if (kelas=='B' || kelas=='b')
                                                            {
                                                              harga_tiket=65*13000;
                                                               PPN=0.05*harga_tiket;
                                                               jum_bayar=harga_tiket+PPN;
                                                               cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                               cout<<"PPN          = Rp."<<PPN<<endl;
                                                               cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                               }
                                                                 else if (kelas=='X' || kelas=='x')
                                                                {
                                                                   harga_tiket=85*13000;
                                                                    PPN=0.1*harga_tiket;
                                                                     jum_bayar=harga_tiket+PPN;
                                                                     cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                                    cout<<"PPN          = Rp."<<PPN<<endl;
                                                                    cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                                  }
                                                                    break;
                                                         }
                                                          case '8':
                                                 {
                                                    cout<<"Kota Tujuan Anda                    : BEIJING\n"<<endl;
                                     printf("___________________ Pilih Kelas Pesawat ___________________");
                                                    cout<<"\nMasukan Kode Kelas Pesawat [E/B/X]  : ";
                                                    cin>>kelas;
                                                    cout<<endl;
                                                    if (kelas=='E' || kelas=='e')
                                                     {
                                                        harga_tiket=32*13000;
                                                        PPN=0;
                                                         jum_bayar=harga_tiket+PPN;
                                                         cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                         cout<<"PPN          = Rp."<<PPN<<endl;
                                                          cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                       }
                                                         else if (kelas=='B' || kelas=='b')
                                                            {
                                                              harga_tiket=57*13000;
                                                               PPN=0.05*harga_tiket;
                                                               jum_bayar=harga_tiket+PPN;
                                                               cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                               cout<<"PPN          = Rp."<<PPN<<endl;
                                                               cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                               }
                                                                 else if (kelas=='X' || kelas=='x')
                                                                {
                                                                   harga_tiket=77*13000;
                                                                    PPN=0.1*harga_tiket;
                                                                     jum_bayar=harga_tiket+PPN;
                                                                     cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                                    cout<<"PPN          = Rp."<<PPN<<endl;
                                                                    cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                                  }
                                                                    break;
                                                         }
                                                          case '9':
                                                 {
                                                    cout<<"Kota Tujuan Anda                    : AMSTERDAM\n"<<endl;
                                     printf("___________________ Pilih Kelas Pesawat ___________________");
                                                    cout<<"\nMasukan Kode Kelas Pesawat [E/B/X]  : ";
                                                    cin>>kelas;
                                                    cout<<endl;
                                                    if (kelas=='E' || kelas=='e')
                                                     {
                                                        harga_tiket=50*13000;
                                                        PPN=0;
                                                         jum_bayar=harga_tiket+PPN;
                                                         cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                         cout<<"PPN          = Rp."<<PPN<<endl;
                                                          cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                       }
                                                         else if (kelas=='B' || kelas=='b')
                                                            {
                                                              harga_tiket=65*13000;
                                                               PPN=0.05*harga_tiket;
                                                               jum_bayar=harga_tiket+PPN;
                                                               cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                               cout<<"PPN          = Rp."<<PPN<<endl;
                                                               cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                               }
                                                                 else if (kelas=='X' || kelas=='x')
                                                                {
                                                                   harga_tiket=85*13000;
                                                                    PPN=0.1*harga_tiket;
                                                                     jum_bayar=harga_tiket+PPN;
                                                                     cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                                    cout<<"PPN          = Rp."<<PPN<<endl;
                                                                    cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                                  }
                                                                    break;
                                                         }
                                                          case '10':
                                                 {
                                                    cout<<"Kota Tujuan Anda                    : DUBLIN\n"<<endl;
                                     printf("___________________ Pilih Kelas Pesawat ___________________");
                                                    cout<<"\nMasukan Kode Kelas Pesawat [E/B/X]  : ";
                                                    cin>>kelas;
                                                    cout<<endl;
                                                    if (kelas=='E' || kelas=='e')
                                                     {
                                                        harga_tiket=45*13000;
                                                        PPN=0;
                                                         jum_bayar=harga_tiket+PPN;
                                                         cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                         cout<<"PPN          = Rp."<<PPN<<endl;
                                                          cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                       }
                                                         else if (kelas=='B' || kelas=='b')
                                                            {
                                                              harga_tiket=60*13000;
                                                               PPN=0.05*harga_tiket;
                                                               jum_bayar=harga_tiket+PPN;
                                                               cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                               cout<<"PPN          = Rp."<<PPN<<endl;
                                                               cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                               }
                                                                 else if (kelas=='X' || kelas=='x')
                                                                {
                                                                   harga_tiket=70*13000;
                                                                    PPN=0.1*harga_tiket;
                                                                     jum_bayar=harga_tiket+PPN;
                                                                     cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                                    cout<<"PPN          = Rp."<<PPN<<endl;
                                                                    cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                                  }
                                                                    break;
                                                         }
                                                         
                                                default:
                                                cout<<"Anda Salah Memasukan Kode"<<endl; 
                                }
                                printf("\nAnda Ingin Memesan Kembali [Y/T]   : ");
                                cin>>kembali;  
                }
                while(kembali=='Y' || kembali=='y');
                getch();
}
