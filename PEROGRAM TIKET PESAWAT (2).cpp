#include <iostream> //header input output
#include <conio.h> //header getch
#include <windows.h> //header system cls
#include <fstream> //header membuka dan menutup file
#include <string.h> //header operasi string
#include <string> //header fungsi string
#include <iomanip> //header pemerataan io set flags
#include <time.h> //Header yang di gunakan untuk operasi pada bahasa C
time_t waktuserver;	
using namespace std; //pengganti std::
char namaFile[]="loginRecord.txt";

struct user{
	char nama [50];
	char username [12];
	char password [10];
	char email [50];
}u;		

struct {
	char *nama[50];
	char *telepon[13];
	char *alamat[70];	
}Identitas;

void waktu(){
	time(&waktuserver);
	struct tm*waktu = localtime (&waktuserver);
	printf ("\n\t\t\t||==========Tanggal: %d/%d/%d=========||\n\n", waktu -> tm_mday, waktu ->tm_mon +1, waktu -> tm_year +1900);
}

void masuk(){
	void daftar();
	/*  Variabel username[12] digunakan untuk menyimpan input username
        yang dilakukan oleh pengguna. Inputan tersebut akan divalidasi
        dengan username yang sudah terdaftar pada file loginRecord.txt   */
	char username[12];
	
	/*  Variabel password[10] digunakan untuk menyimpan input password
        yang dilakukan oleh pengguna. Inputan tersebut akan divalidasi
        dengan password yang sudah terdaftar pada file loginRecord.txt   */
	char password[10];
	
	// Variabel pilihan untuk pilihan user apakah ingin mendaftar, masuk ulang, atau keluar
	int pilihan;
	
	// Membuat pointer record untuk menunjuk pada file "loginRecord.txt"
	FILE *record;
	
	// Membuka file dengan mode "r"
	record = fopen (namaFile, "r");
	if (record == NULL){
		fputs ("Error, tidak terdapat file untuk menyimpan akun\n", stderr);
		exit(1);
	}
	
	// Instruksi untuk login
	printf ("\t\t\t||====================||\n");
	printf ("\t\t\t|| LOGIN\n");
	printf ("\t\t\t||====================||\n");
	printf ("\t\t\t|| Username: ");
	scanf ("%s", username);
	printf ("\t\t\t||====================||\n");
	printf ("\t\t\t|| Password: ");
	scanf ("%s", password);
	printf ("\t\t\t||====================||\n");
	
	// Membersikan layar terminal
	system ("cls");
	
	// Membeaca file "logRecord.txt"
	while (fread(&u, sizeof(u),1,record)){
		 /*  Mengkomparasi username serta password yang diinput user ke dalam fungsi
            masuk() dengan username serta password yang sudah terdaftar */
		if(strcmp(username, u.username)==0 && strcmp(password, u.password)==0){
			printf ("\t\t\t||====================||\n");
			printf ("\t\t\t|| 	Login Berhasil!	 ||\n");
			printf ("\t\t\t||====================||\n");	
		}
		//  Jika akun tidak terdaftar maka akan diberikan pilihan untuk mendaftar, masuk ulang, atau keluar
		else {
			printf ("\t\t\t||============================||\n");
			printf ("\t\t\t|| 	Akun Tidak Terdaftar!	 ||\n");
			printf ("\t\t\t||============================||\n");
			
			instruksi:
			printf ("\t\t\t||============================||\n");
			printf ("\n\t\t\t||Ketik 1 untuk Daftar");
			printf ("\n\t\t\t||Ketik 2 untuk Masuk Ulang");
			printf ("\n\t\t\t||Ketik 3 untuk Keluar\n");
			printf ("\n\t\t\t||============================||\n");
			printf ("\n\t\t\t||Pilihan : ");
			scanf ("%d", &pilihan);
			system ("cls");
			if (pilihan == 1){
				daftar();
			}
			else if (pilihan == 2){
				masuk();
			}
			else if (pilihan == 3){
				exit(1);
			}
			else {
				printf ("Error! Silahkan Masukkan Pilihan dengan Benar \n");
				goto instruksi;
			}
		}
	}
	fclose (record);
	return;
}

void daftar(){
	// Membuat pointer regis untuk file "loginRecord.txt"
	FILE *regis;
	// Membuka file "loginRecord.txt" dengan mode "w"
	regis = fopen(namaFile, "w");
	if (regis == NULL){
		fputs ("ERROR, Tidak terdapat file untuk menyimpan data!\n", stderr);
	}
	
	//Instruksi untuk melakukan registrasi akun 
	printf ("\n\t\t\t Silahkan Registrasi Akun Anda! \n\n");
	getchar ();
	printf ("\n\t\t\t Nama Lengkap: ");
	gets (u.nama);
	printf ("\n\t\t\t Email: ");
	scanf ("%s", u.email);
	printf ("\n\t\t\t Hallo %s! \n", u.nama);
	printf ("\n\t\t\t Silahkan membuat username (max 12 karakter), serta password (max 10 karakter) \n");
	
	// Instruksi untuk menginput username serta password
	printf ("\n\t\t\t Masukkan Username : ");
	scanf ("%s", u.username);
	printf ("\n\t\t\t Masukkan Password : ");
	scanf ("%s", u.password);
	
	// Menuliskan nama yang diinput oleh pengguna kedalam file "loginRecord.txt"
	fwrite (&u, sizeof(u),1,regis);
	fclose (regis);
	printf ("\n\t\t\t Registrasi Selesai! ");
	printf ("\n\t\t\t Akun Anda Terdaftar, Silahkan Mencoba!");
	
	// Membersikan layar terminal
	system("cls");
	// Memanggil fungsi masuk()
	masuk ();	
}


void pilmenu(){
	//variabel pilihan untuk menyimpan pilihan yang diinput user pada switch case
	int pilihan;
	
	instruksi:
	printf ("\t\t\t||======================================||\n");
	printf ("\t\t\t|| 		PILIHAN MENU MASUK	||\n");
	printf ("\t\t\t||======================================||\n");
	printf ("\t\t\t||	No	|	Menu Masuk	||\n");
	printf ("\t\t\t||======================================||\n");
	printf ("\t\t\t||	1	|	Masuk		||\n");
	printf ("\t\t\t||	2	|	Registrasi	||\n");
	printf ("\t\t\t||	4	|	Keluar		||\n");
	printf ("\t\t\t||======================================||\n");
	printf ("\t\t\t||======================================||\n");
	printf ("\t\t\t|| Masukkan pilihan anda : ");
	scanf ("%d", &pilihan);
	printf ("\t\t\t||======================================||\n");
	system ("cls");
	
	/* Percabangan Switch dengan kondisi nilai yang disimpan pada variabel
       pilihan untuk menuju ke pilihan menu masuk yang diinput user  */
	switch (pilihan){
		case 1:
			masuk();
			break;
		case 2:
			daftar();
			break;
		case 3:
			exit(1);
			break;
		default:
			printf ("Error! Silahkan Masukkan Plihan dengan Benar \n");
			break;
	}
}

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

main ()
{
    system("cls");
    tampilanAwal();
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
