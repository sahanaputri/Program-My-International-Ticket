#include <iostream> //header input output
#include <conio.h> //header getch
#include <fstream> //header membuka dan menutup file
#include <string.h> //header operasi string
#include <string> //header fungsi string
#include <iomanip> //header pemerataan io set flags
#include <time.h>	//Header yang di gunakan untuk operasi pada bahasa C
#include <windows.h>
#include <stdbool.h>
#include <ctype.h>
time_t waktuserver;	
using namespace std; //pengganti std::

char namaFile[]="loginRekam.txt";

int a, b, c, d, jml, jum;
int byr, kembalian;
int totPem = 0;

struct client
{
  string nama[30];
  string *org;
}cl;

struct atasNama
{
    string nama[30][30];
    int umur[10][10];
}an;

struct pesawat
{
    int tiket[10];
    float diskon[10];
    string tujuan[15][15], kelas, kPenerbangan;
    char pswt[10], pil[10][10], pil2[10][10];
}t;

void tampilanAwal () //membuat garis tabel awal tampilan
{
    cout << "========================================================================================================================" << endl;
    cout << "                                          WELCOME TO MY INTERNATIONAL TICKET                                            " << endl;
    cout << "========================================================================================================================" << endl;
}

void tampilanLogin()
{
	int i, menu, tlahir, bulanL, tahunL, simpanIndex, member = 0;
	char nama[20], namad[20], namab[20];
	char jkelamin[5], nikkk[25], umur[50];
	char password[25], passTemp[25], listPassword[20] [20], listUsername[20] [20];
	bool cekSymbol, cekBesar, cekKecil, cekAngka, cekUser;
	
	menu:
		cout << "\n\tSILAHKAN PILIH MENU DI BAWAH";
		cout << "\n\n\t 1. REGISTRASI \n\t 2. LOGIN \n\t 3. KELUAR\n\t PILIH MENU :";
		scanf ("%d", &menu);
		system ("cls");
		switch(menu)
		{
			case 1:
				cout << "\t|SILAHKAN REGISTRASI UNTUK MEMBUAT AKUN|\n";
				cout << "\tNIK\t\t:";
				scanf("%s", nikkk);
				cout << "\tNAMA DEPAN\t:";
				scanf("%s", namad);
				cout << "\tNAMA BELAKANG\t:";
				scanf("%s", namab);
				cout << "\tTANGGAL LAHIR\t:";
				scanf("%s", &tlahir);
				cout << "\tBULAN LAHIR\t:";
				scanf("%s", &bulanL);
				cout << "\tTAHUN LAHIR\t:";
				scanf("%s", &tahunL);
				cout << "\tUMUR ANDA\t:";
				scanf("%s", umur);
				cout << "\tJENIS KELAMIN\t:";
				scanf("%s", jkelamin);
				cout << "\t\t\t\t\t\t|==================================|\n";
				cout << "\t\t\t\t\t\t| SELAMAT DATA DAN BERHASIL DI BUAT|\n";
				cout << "\t\t\t\t\t\t|==================================|\n";
				cout << "\t\t\t\t\t\t|Nama Anda : ";
				scanf("%s", nama);
				while (8 > 7)
				{
					printf("\t\t\t\t\t\t|Buat Password :");
					scanf("%s", password);
					if(strlen(password) > 8){
						cekAngka = false;
						cekBesar = false;
						cekKecil = false;
						cekSymbol = false;
						
						for (i = 0; i < strlen(password); i++){
							if (password[i] >=48 && password[i] <= 57) {
								cekAngka = true;
							}else if(password[i] >= 65 && password[i] <= 90){
								cekBesar = true;
							}else if(password[i] >= 97 && password[i] <= 123){
								cekKecil = true;
							}else{
								cekSymbol = true;
							}
						}
						if(cekAngka == true && cekBesar == true && cekKecil == true && cekSymbol == true){
							
						}else
						{
							cout <<"\t\t\t\t\tPassword harus mengandung angka besar & kecil, huruf, dan symbol\n";
							continue;
						}
						strcpy(passTemp, password);
						if(password == strrev(passTemp)){
							cout << "\t\t\t\t\t\t|PASSWORD ANDA PALINDROME\n";
							continue;
						}
						break;
					}else
					{
						cout << "\t\t\t\t\t\t|Password anda kurang dari 8 digit!";
						continue;
					}
				}
				strcpy (listUsername[member], nama);
				strcpy (listPassword[member], password);
				cout << "\t\t\t\t\t\t ***** Akun anda berhasil di buat *****\n";
				goto menu;
				break;
			case 2:
				while(0<1)
				{
				
				cout << "\t*Silahkan Login Akun*\n";
				cout << "\tUsername :";
				scanf("%s", nama);
				
				cekUser = false;
				
				for(i = 0; listUsername[i] [1] != '\0'; i++){
					
					if(strcmp(listUsername[i], nama) == 0){
						simpanIndex = i;
						cekUser = true;
					}
				}
				if (cekUser == false){
					cout << "\tNama anda tidak ada\n";
					continue;
				}
				cout<< "\tMasukkan Password : ";
				scanf("%s", password);
				if((password) == 0){
					continue;
				}else{
				cout<<"\t Anda Berhasil Login";
				break;
				}
				}
			case 3:	
				cout<<"\t\t =====Terima Kasih=====\n";			
		}
		return;
}

void tampilanPesawat () //tabel pesawat yang tersedia
{
    cout << endl;
    cout<<endl;
 	cout<<"\n\t\t*--------------------*--------------------*--------------------*";
  	cout<<"\n\t\t| Nama Pesawat       | Jam Berangkat      | Harga Tiket        |";
  	cout<<"\n\t\t|--------------------|--------------------|--------------------|";
  	cout<<"\n\t\t| 1. Garuda          |       08.30        |    Rp. 1.600.000,- |";
  	cout<<"\n\t\t|--------------------|--------------------|--------------------|";
  	cout<<"\n\t\t| 2. Airbus          |       10.00        |    Rp. 1.700.000,- |";
  	cout<<"\n\t\t|--------------------|--------------------|--------------------|"; 
  	cout<<"\n\t\t| 3. Lion Air        |       12.30        |    Rp. 1.400.000,- |";
  	cout<<"\n\t\t|--------------------|--------------------|--------------------|"; 
  	cout<<"\n\t\t| 4. Air Asia        |       14.00        |    Rp. 1.500.000,- |";
  	cout<<"\n\t\t|--------------------|--------------------|--------------------|"; 
  	cout<<"\n\t\t*--------------------*--------------------*--------------------*";
}

void orang () //pemasukan nama pembeli tiket
{
    cin.ignore();
    cout << "\n   Client " << a << endl;
    cout << "   Nama Lengkap     : "; getline(cin, cl.nama[a]);
    cl.org = &cl.nama[a];
    cout << "   Alamat dari nama client : " << cl.org << endl;
    cout << "   Jumlah Penumpang : "; cin >> jum;
    if (jum > 1)
    {
        for (d = 1; d < jum; d++)
        {
            cin.ignore();
            cout << "   Nama Lengkap     : "; getline(cin, an.nama[a][d]);
            cout << "   Umur" << endl;
            cout << " 1. Dewasa (Lebih dari 14 Tahun)" << endl;
            cout << " 2. Anak-Remaja   (7 Tahun sampai 14 Tahun)" << endl;
            cout << " 3. Balita (Kurang dari 7 Tahun)" << endl;
            cout << "   Pilihan Umur : "; cin >> an.umur[a][d];
        }
    }
}

void pilihanTujuan () //menampilkan list Tujuan tujuan
{
    cout << "   Tujuan Keberangkatan:\n";
    cout << " 1. BANJARMASIN-JAKARTA\n";
    cout << " 2. BANJARMASIN-MAKAASAR\n";
    cout << " 3. BANJARMASIN-BALI\n";
    cout << " 4. BANJARMASIN-SURABAYA\n";
    cout << " 5. BANJARMASIN-PONTIANAK\n";
}

string Tujuan () //untuk pengeluan output hasil dari pemilihan tujuan
{
    if (t.pil[a][b] == '1')
    {
        t.tujuan[a][b] = "BANJARMASIN-JAKARTA";
    }
    else if (t.pil[a][b] == '2')
    {
        t.tujuan[a][b] = "BANJARMASIN-MAKAASAR";
    }
    else if (t.pil[a][b] == '3')
    {
        t.tujuan[a][b] = "BANJARMASIN-BALI";
    }
    else if (t.pil[a][b] == '4')
    {
        t.tujuan[a][b] = "BANJARMASIN-SURABAYA";
    }
    else if (t.pil[a][b] == '5')
    {
        t.tujuan[a][b] = "BANJARMASIN-PONTIANAK";
    }

    return t.tujuan[a][b];
}

string kode () //kode penerbangan saat diprint out di teks
{
    if (t.pswt[a] == '1')
    {
        if (t.pil[a][b] == '1')
        {
            t.kPenerbangan = "SI-BJ";
        }
        else if (t.pil[a][b] == '2')
        {
            t.kPenerbangan = "SI-BM";
        }
        else if (t.pil[a][b] == '3')
        {
            t.kPenerbangan = "SI-BB";
        }
        else if (t.pil[a][b] == '4')
        {
            t.kPenerbangan = "SI-BS";
        }
        else if (t.pil[a][b] == '5')
        {
            t.kPenerbangan = "SI-BP";
        }
    }
    else if (t.pswt[a] == '2')
    {
        if (t.pil[a][b] == '1')
        {
            t.kPenerbangan = "YA-BJ";
        }
        else if (t.pil[a][b] == '2')
        {
            t.kPenerbangan = "YA-BM";
        }
        else if (t.pil[a][b] == '3')
        {
            t.kPenerbangan = "YA-BB";
        }
        else if (t.pil[a][b] == '4')
        {
            t.kPenerbangan = "YA-BS";
        }
        else if (t.pil[a][b] == '5')
        {
            t.kPenerbangan = "YA-BP";
        }
    }
    else if (t.pswt[a] == '3')
    {
        if (t.pil[a][b] == '1')
        {
            t.kPenerbangan = "SA-BJ";
        }
        else if (t.pil[a][b] == '2')
        {
            t.kPenerbangan = "SA-BM";
        }
        else if (t.pil[a][b] == '3')
        {
            t.kPenerbangan = "SA-BB";
        }
        else if (t.pil[a][b] == '4')
        {
            t.kPenerbangan = "SA-BS";
        }
        else if (t.pil[a][b] == '5')
        {
            t.kPenerbangan = "SA-BP";
        }
    }
    else if (t.pswt[a] == '4')
    {
        if (t.pil[a][b] == '1')
        {
            t.kPenerbangan = "LA-BJ";
        }
        else if (t.pil[a][b] == '2')
        {
            t.kPenerbangan = "LA-BM";
        }
        else if (t.pil[a][b] == '3')
        {
            t.kPenerbangan = "LA-BB";
        }
        else if (t.pil[a][b] == '4')
        {
            t.kPenerbangan = "LA-BS";
        }
        else if (t.pil[a][b] == '5')
        {
            t.kPenerbangan = "LA-BP";
        }
    }
    return t.kPenerbangan;
}

string tipe () //kelas pesawat
{
    if (t.pil2[a][b] == '1')
    {
        t.kelas = "Ekonomi";
    }
    else if (t.pil2[a][b] == '2')
    {
        t.kelas = "Bisnis";
    }
    return t.kelas;
}

void pilihanKelas () //tabel pilihan kelas pesawat ekonomi atau ekslusif
{
    cout << endl;
    cout << "   Kelas Pesawat\n 1. Ekonomi\n 2. Bisnis\n";
}

void dataTiket () // pemasukan data pilihan tujuan penerbangan
{
    ulang:
    cout << "   Pilihan : "; cin >> t.pil2[a][b];
    if (t.pil2[a][b] == '1')
        {
            cout << "   Tiket Regular, tidak ada tambahan biaya" << endl;
        }
    else if (t.pil2[a][b] == '2')
        {
            cout << "   Tambahan biaya Rp. 500.000,-" << endl;
        }
    else
        {
            cout << "   Salah Input\n";
            goto ulang;
        }
}

int hargaTiket () //harga tiket
{
    if (t.pswt[a] == '1')
    {
        if (t.pil2[a][b] == '1')
        {
            t.tiket[a] = 1600000 * jum;
        }
        else if (t.pil2[a][b] == '2')
        {
            t.tiket[a] = 1600000 * jum + 500000;
        }
    }
    if (t.pswt[a] == '2')
    {
        if (t.pil2[a][b] == '1')
        {
            t.tiket[a] = 1700000 * jum;
        }
        else if (t.pil2[a][b] == '2')
        {
            t.tiket[a] = 1700000 * jum + 500000;
        }
    }
    if (t.pswt[a] == '3')
    {
        if (t.pil2[a][b] == '1')
        {
            t.tiket[a] = 1400000 * jum;
        }
        else if (t.pil2[a][b] == '2')
        {
            t.tiket[a] = 1400000 * jum + 500000;
        }
    }
    if (t.pswt[a] == '4')
    {
        if (t.pil2[a][b] == '1')
        {
            t.tiket[a] = 1500000 * jum;
        }
        else if (t.pil2[a][b] == '2')
        {
            t.tiket[a] = 1500000 * jum + 500000;
        }
    }
    return t.tiket[a];
}

float diskon()
{
    if (hargaTiket() > 15000000)
    {
        t.diskon[a] = hargaTiket() * 0.4;
    }
    else if (hargaTiket() > 7500000 && hargaTiket() <= 15000000)
    {
        t.diskon[a] = hargaTiket() * 0.25;
    }
    else if (hargaTiket() > 5000000 && hargaTiket() <= 7500000)
    {
        t.diskon[a] = hargaTiket() * 0.15;
    }
    else
    {
        t.diskon[a] = 0;
    }
    return t.diskon[a];
}

int hTiket() //rumus total harga tiket
{
    totPem = hargaTiket() - diskon();
    return totPem;
}

void tampilanAkhir () //menampilkan hasil dari proses
{
    for (a = 1; a <= jml; a++)
    {
        for (b = 1; b <= 1; b++)
        {
            cout << "   Client " << cl.nama[a] <<  " Membeli tiket " << Tujuan() << " dengan pesawat " << kode();
            cout << " kelas " << tipe() <<  "\n   seharga Rp. " << hTiket() << ",-" << endl;
        }
    }
}

void printTabel () //print hasil proses
{
    ofstream file ("Retail.txt");
    cout << endl;
    if (!file.is_open()){
        cout << "TIdak bisa membuka file";
    }
    else {
            cout << endl;
            cout << "================================================================================================================================" << endl;
            file << "================================================================================================================================" << endl;
            cout << " No. |          Nama Client           |        Tujuan       |      Pesawat      |     Kelas     |             Harga            |" << endl;
            file << " No. |          Nama Client           |        Tujuan       |      Pesawat      |     Kelas     |             Harga            |" << endl;
            cout << endl;

            for (a = 1; a <= jml; a++)
            {
                cout << endl;
                cout << setiosflags(ios::right) << setw(2) << a << setiosflags(ios::right) << setw(26) << cl.nama[a];
                file << setiosflags(ios::right) << setw(2) << a << setiosflags(ios::right) << setw(26) << cl.nama[a];
                for (b = 1; b <= 1; b++)
                {
                    totPem = totPem + hTiket();
                    cout << setiosflags(ios::left) << setw(31) << Tujuan() << setiosflags(ios::left) << setw(13) << kode();
                    file << setiosflags(ios::left) << setw(31) << Tujuan() << setiosflags(ios::left) << setw(13) << kode();
                    cout << setiosflags(ios::left) << setw(20) << tipe() << setiosflags(ios::left) << setw(16) << "Rp. " << hTiket() << ",-" << setiosflags(ios::left) << setw(11) << "|" << endl;
                    file << setiosflags(ios::left) << setw(20) << tipe() << setiosflags(ios::left) << setw(16) << "Rp. " << hTiket() << ",-" << setiosflags(ios::left) << setw(11) << "|" << endl;
                }
                cout << "================================================================================================================================" << endl;
                file << "================================================================================================================================" << endl;
                cout << setiosflags(ios::right) << setw(102) << "Total" << setiosflags(ios::left) << setw(6) << "Rp. " << totPem << ",-" << endl;
                file << setiosflags(ios::right) << setw(102) << "Total" << setiosflags(ios::left) << setw(6) << "Rp. " << totPem << ",-" << endl;
                cout << setiosflags(ios::right) << setw(102) << "Bayar" << setiosflags(ios::left) << setw(6) << "Rp. "; cin >> byr;
                file << setiosflags(ios::right) << setw(102) << "Bayar" << setiosflags(ios::left) << setw(6) << "Rp. " << byr << ",-" << endl;
                kembalian = byr - totPem;
                cout << setiosflags(ios::right) << setw(102) << "Kembalian" << setiosflags(ios::left) << setw(6) << "Rp. " << kembalian << ",-" << endl;
                file << setiosflags(ios::right) << setw(102) << "Kembalian" << setiosflags(ios::left) << setw(6) << "Rp. " << kembalian << ",-" << endl;
            }
            file.close();
            cout << endl << "   Rekap data sudah ditulis dan dikirim ke pusat. Terima kasih telah memakai jasa kami" << endl;
    }
}

void printTiket ()
{
    ofstream file ("Tiket.txt");
    cout << endl;
    if (!file.is_open()) {
            cout << "TIdak bisa membuka file";
    }
    else {
        for (a = 1; a <= jml; a++)
        {
            for (b = 1; b <= 1; b++)
            {
                file << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  " << endl << endl;
                file << "   Kelas " << tipe() << endl << endl;
                file << "   Nama" << endl;
                file << "   " << cl.nama[a] << endl << endl;
                file << "   Penerbangan          Kelas" << endl;
                file << "      " << kode() << setiosflags(ios::right) << setw(19) << tipe() << endl << endl;
                file << "            Dari  -   Ke" << endl;
                file << "          " << Tujuan() << endl;
                file << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  " << endl;

                if (jum > 1)
                {
                    for (d = 1; d < jum; d++)
                    {
                        file << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  " << endl << endl;
                        file << "   Kelas " << tipe() << endl << endl;
                        file << "   Nama" << endl;
                        file << "   " << an.nama[a][d] << endl << endl;
                        file << "   Penerbangan          Kelas" << endl;
                        file << "      " << kode() << setiosflags(ios::right) << setw(19) << tipe() << endl << endl;
                        file << "            Dari  -   Ke" << endl;
                        file << "          " << Tujuan() << endl;
                        file << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  " << endl;
                    }
                }
            }
            cout << endl;
        }
    }
}

int main ()
{
    system("cls");
    tampilanAwal();
    tampilanLogin();
    tampilanPesawat();
    cout << endl;
    cout << "   Jumlah Client : "; cin >> jml; //untuk perulangan jumlah client yang membeli tiket pesawat

    for (a = 1; a <= jml; a++) //perulangan jumlah client
    {
        orang();
        ulang1:
        cout << "   Pesawat : "; cin >> t.pswt[a]; //inputan pilihan pesawat

        for (b = 1; b <= 1; b++) //perulangan data pesawat client
        {
            switch (t.pswt[a]) //penyeleksian kondisi pemilihan pesawat
            {
            case '1':
                {
                    cout << endl;
                    pilihanTujuan();
                    kembali1:
                    cout << "   Tujuan Pilihan : "; cin >> t.pil[a][b];

                    switch (t.pil[a][b])
                    {
                        case '1':
                        {

                            cout << endl << "   Tujuan : " << Tujuan () << endl;
                            pilihanKelas();
                            dataTiket();
                            break;
                        }
                        case '2':
                        {
                            cout << endl << "   Tujuan : " << Tujuan () << endl;
                            pilihanKelas();
                            dataTiket();
                            break;
                        }
                        case '3':
                        {
                            cout << endl << "   Tujuan : " << Tujuan () << endl;
                            pilihanKelas();
                            dataTiket();
                            break;
                        }
                        case '4':
                        {
                            cout << endl << "   Tujuan : " << Tujuan () << endl;
                            pilihanKelas();
                            dataTiket();
                            break;
                        }
                        case '5':
                        {
                            cout << endl << "   Tujuan : " << Tujuan () << endl;
                            pilihanKelas();
                            dataTiket();
                            break;
                        }
                        default:
                        {
                            cout << "   Salah Inputan\n";
                            cout << "   Tekan ENTER untuk kembali\n";
                            getch();
                            goto kembali1;
                            break;
                        }
                    }
                    break;
                }
            case '2':
                {
                    cout << endl;
                    pilihanTujuan();
                    kembali2:
                    cout << "   Tujuan Pilihan : "; cin >> t.pil[a][b];

                    switch (t.pil[a][b])
                    {
                        case '1':
                        {
                            cout << endl << "   Tujuan : " << Tujuan () << endl;
                            pilihanKelas();
                            dataTiket();
                            break;
                        }
                        case '2':
                        {
                            cout << endl << "   Tujuan : " << Tujuan () << endl;
                            pilihanKelas();
                            dataTiket();
                            break;
                        }
                        case '3':
                        {
                            cout << endl << "   Tujuan : " << Tujuan () << endl;
                            pilihanKelas();
                            dataTiket();
                            break;
                        }
                        case '4':
                        {
                            cout << endl << "   Tujuan : " << Tujuan () << endl;
                            pilihanKelas();
                            dataTiket();
                            break;
                        }
                        case '5':
                        {
                            cout << endl << "   Tujuan : " << Tujuan () << endl;
                            pilihanKelas();
                            dataTiket();
                            break;
                        }
                        default:
                        {
                            cout << "   Salah Inputan\n";
                            cout << "   Tekan ENTER untuk kembali\n";
                            getch();
                            goto kembali2;
                            break;
                        }
                    }
                    break;
                }
            case '3':
                {
                    cout << endl;
                    pilihanTujuan();
                    kembali3:
                    cout << "   Tujuan Pilihan : "; cin >> t.pil[a][b];

                    switch (t.pil[a][b])
                    {
                        case '1':
                        {
                            cout << endl << "   Tujuan : " << Tujuan () << endl;
                            pilihanKelas();
                            dataTiket();
                            break;
                        }
                        case '2':
                        {
                            cout << endl << "   Tujuan : " << Tujuan () << endl;
                            pilihanKelas();
                            dataTiket();
                            break;
                        }
                        case '3':
                        {
                            cout << endl << "   Tujuan : " << Tujuan () << endl;
                            pilihanKelas();
                            dataTiket();
                            break;
                        }
                        case '4':
                        {
                            cout << endl << "   Tujuan : " << Tujuan () << endl;
                            pilihanKelas();
                            dataTiket();
                            break;
                        }
                        case '5':
                        {
                            cout << endl << "   Tujuan : " << Tujuan () << endl;
                            pilihanKelas();
                            dataTiket();
                            break;
                        }
                        default:
                        {
                            cout << "   Salah Inputan\n";
                            cout << "   Tekan ENTER untuk kembali\n";
                            getch();
                            goto kembali3;
                            break;
                        }
                    }
                    break;
                }
            case '4':
                {
                    cout << endl;
                    pilihanTujuan();
                    kembali4:
                    cout << "   Tujuan Pilihan : "; cin >> t.pil[a][b];

                    switch (t.pil[a][b])
                    {
                        case '1':
                        {
                            cout << endl << "   Tujuan : " << Tujuan () << endl;
                            pilihanKelas();
                            dataTiket();
                            break;
                        }
                        case '2':
                        {
                            cout << endl << "   Tujuan : " << Tujuan () << endl;
                            pilihanKelas();
                            dataTiket();
                            break;
                        }
                        case '3':
                        {
                            cout << endl << "   Tujuan : " << Tujuan () << endl;
                            pilihanKelas();
                            dataTiket();
                            break;
                        }
                        case '4':
                        {
                            cout << endl << "   Tujuan : " << Tujuan () << endl;
                            pilihanKelas();
                            dataTiket();
                            break;
                        }
                        case '5':
                        {
                            cout << endl << "   Tujuan : " << Tujuan () << endl;
                            pilihanKelas();
                            dataTiket();
                            break;
                        }
                        default:
                        {
                            cout << "   Salah Inputan\n";
                            cout << "   Tekan ENTER untuk kembali\n";
                            getch();
                            goto kembali4;
                            break;
                        }
                    }
                    break;
                }
            default: //jika penginputan salah, maka akan langsung mengarah ke default untuk menyatakan kondisi salah
                {
                    cout << "Salah memasukan pilihan\n";
                    goto ulang1;
                    break;
                }
            }
        }
        cout << endl;

    }
    tampilanAkhir(); //menampilkan hasil dari proses dalam main
    cout << endl;
    getch();
    system("cls"); //menghapus tampilan program
    printTabel(); //menampilkan tabel rekap data pelanggan yang membeli tiket
    printTiket (); //menampilkan boarding pass
    cout << endl;

    return 0; //mengembalikan seluruhnya
}
