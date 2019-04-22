#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string.h>

using namespace std;

void gotoxy(),towbot(),pertama(),kedua(),menu_utama(),header(),keluar1(),keluar2(),kembali(),salah(),login();
int loading(),pil;

main()
{
    system("color 90");
    login();
    loading();
    while(4)
    {
        menu_utama();
        switch(pil)
        {
            case 1:
                pertama();
                break;

            case 2:
                kedua();
                break;

            case 3:
                keluar2();
                exit (0);
                break;

            default:
                salah();
                break;
        }
    }
}

void gotoxy(int x, int y)       //fungsi untuk membuat titik kordinat
{
	HANDLE hConsoleOutput;
	COORD dwCursorPosition;
	dwCursorPosition.X=x;
	dwCursorPosition.Y=y;
	hConsoleOutput=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
}

void login()        //subprogram untuk login
{
    header();
    string user, pass ;
    gotoxy(30,6); cout<<"=================================";
    gotoxy(30,7); cout<<"|          Silakan Login        |";
    gotoxy(30,8); cout<<"=================================";
    gotoxy(30,9); cout<<"Username       : ";cin>>user;
    gotoxy(30,10);cout<<"Password       : ";cin>>pass;
    if(user=="admin" && pass=="admin")
    {
        gotoxy(38,12);cout<<"Login Berhasil !!!";Sleep(1500);
        system("cls");
    }
    else
    {
        gotoxy(38,12);cout<<"Login Gagal, Username atau Password Salah !!!";
        getch();
        system("cls");
        login();
    }
}

void towbot()		//SUBPROGRAM nama kelompok
{
	gotoxy(25,5);cout<<"===================================================================\n";Sleep(500);
	gotoxy(25,6); cout<<"|  ========      =      =       =  = = = =      =      ========   |\n";Sleep(500);
	gotoxy(25,7); cout<<"|     ||      =     =   =       =  =     =   =     =      ||      |\n";Sleep(500);
	gotoxy(25,8); cout<<"|     ||      =     =   =   =   =  = = = =   =     =      ||      |\n";Sleep(500);
	gotoxy(25,9); cout<<"|     ||      =     =   =  = =  =  =     =   =     =      ||      |\n";Sleep(500);
	gotoxy(25,10);cout<<"|     ||         =      = =   = =  = = = =      =         ||      |\n";Sleep(500);
	gotoxy(25,11);cout<<"===================================================================\n";Sleep(500);
    gotoxy(25,12);cout<<"Anggota Kelompok:\n";
	gotoxy(25,13);cout<<"\t   Hilmy Farid              1810631170047\n";Sleep(500);  //Sleep untuk delay time
	gotoxy(25,14);cout<<"\t   Lalang Gunawan           1810631170060\n";Sleep(500);
	gotoxy(25,16);cout<<"Press any key to continue...";
	getch();
}

int loading()       //SUBPROGRAM loading
{
    int n,j;
    for(n=0;n<100;n++)
    {
		gotoxy(53,4);cout<<"LOADING "<< n+1<<" %";
        gotoxy(10,5);cout<<"";
        for(j=0;j<n;j++)
        {
            cout<<">";
        }
    Sleep(20);
    system("cls");
    }
    towbot();
}

void header()           //SUBPROGRAM Header
{
    gotoxy(20,2);cout<<"=========================================================";
    gotoxy(20,3);cout<<"||| SELAMAT DATANG PROGRAM PEMESANAN TIKET KERETA API |||";
    gotoxy(20,4);cout<<"|||   PEMESANAN KHUSUS PEMBERANGKATAN DARI JAKARTA    |||";
    gotoxy(20,5);cout<<"=========================================================";
}

void menu_utama()       //SUBPROGRAM untuk main menu
{
    system("cls");
    header();
	gotoxy(30,6); cout<<"=================================";
	gotoxy(30,7); cout<<"|    M A I N     M E N U        |";
	gotoxy(30,8); cout<<"=================================";
    gotoxy(30,9); cout<<"|                               |";
	gotoxy(30,10);cout<<"| 1. List Jurusan/Jadwal/Kelas  |";
    gotoxy(30,11);cout<<"|                               |";
    gotoxy(30,12);cout<<"|-------------------------------|";
    gotoxy(30,13);cout<<"|                               |";
	gotoxy(30,14);cout<<"| 2. Pembelian Tiket            |";
    gotoxy(30,15);cout<<"|                               |";
    gotoxy(30,16);cout<<"|-------------------------------|";
    gotoxy(30,17);cout<<"|                               |";
	gotoxy(30,18);cout<<"| 3. Exit                       |";
    gotoxy(30,19);cout<<"|                               |";
	gotoxy(30,20);cout<<"=================================";
	gotoxy(30,21);cout<<"Pilihan Anda : ";cin>>pil;
	fflush(stdin);
}

void salah()        //Subrogram untuk menapilkan salah pada main menu
{
    gotoxy(30,23);cout<<"Kode Yang Anda Input Salah !!!";
    gotoxy(30,24);cout<<"Silahkan Masukan Nilai Antara  1/2/3.";
    getch();
}

void pertama()      //Subrogram untuk menampilkan list Jurusan/Jadwal/Kelas
{
    system("cls");
    header();
    gotoxy(3,6); cout<<"========================================================\n";
    gotoxy(3,7); cout<<"| NO.|    Kode/KA   | Jurusan  | Jadwal Pemberangkatan |\n";
    gotoxy(3,8); cout<<"========================================================\n";
    gotoxy(3,9); cout<<"|    |              |          |  Pagi Jam 07:30       |\n";
    gotoxy(3,10);cout<<"| 1. |   JKT-BDG    | Bandung  |  Siang Jam 14:15      |\n";
    gotoxy(3,11);cout<<"|    | [Agro Wilis] |          |  Sore Jam 15:15       |\n";
    gotoxy(3,12);cout<<"|------------------------------------------------------|\n";
    gotoxy(3,13);cout<<"|    |              |          |  Pagi Jam 08:00       |\n";
    gotoxy(3,14);cout<<"| 2. |   JKT-KRG    | Karawang |  Siang Jam 14:30      |\n";
    gotoxy(3,15);cout<<"|    | [Agro Bromo] |          |  Sore Jam 15:30       |\n";
    gotoxy(3,16);cout<<"|------------------------------------------------------|\n";
    gotoxy(3,17);cout<<"|    |              |          |  Pagi Jam 08:30       |\n";
    gotoxy(3,18);cout<<"| 3. |   JKT-SMR    | Semarang |  Siang Jam 14:45      |\n";
    gotoxy(3,19);cout<<"|    | [Agro Bima]  |          |  Sore Jam 15:45       |\n";
    gotoxy(3,20);cout<<"|------------------------------------------------------|\n";
    gotoxy(3,21);cout<<"|    |              |          |  Pagi Jam 09:00       |\n";
    gotoxy(3,22);cout<<"| 4. |   JKT-SLO    | Solo     |  Siang Jam 15:00      |\n";
    gotoxy(3,23);cout<<"|    | [Agro Mas]   |          |  Sore Jam 16:00       |\n";
    gotoxy(3,24);cout<<"========================================================\n";
    gotoxy(60,6); cout<<"==============================================\n";
    gotoxy(60,7); cout<<"| NO.|      Kelas        |        Harga       |\n";
    gotoxy(60,8); cout<<"|---------------------------------------------|\n";
    gotoxy(60,9); cout<<"|    |                   |                    |\n";
    gotoxy(60,10);cout<<"| 1. |  Eksekutif        |      Rp35.000      |\n";
    gotoxy(60,11);cout<<"|    |                   |                    |\n";
    gotoxy(60,12);cout<<"|    |                   |                    |\n";
    gotoxy(60,13);cout<<"| 2. |  Bisnis           |      Rp25.000      |\n";
    gotoxy(60,14);cout<<"|    |                   |                    |\n";
    gotoxy(60,15);cout<<"|    |                   |                    |\n";
    gotoxy(60,16);cout<<"| 1. |  Ekonomi          |      Rp10.000      |\n";
    gotoxy(60,17);cout<<"|    |                   |                    |\n";
    gotoxy(60,18);cout<<"==============================================\n";
    gotoxy(0,25);cout<<"\nPress any key to back to the menu...";
	cin.get();
}

void kedua()        //Subrogram untuk menampilkan Pembelian Tiket
{
    long int jur,wkt,umr,kls,jum,harga;
    char stj,nama[50][50],ktp[25][25];

    menu:
        system("cls");
        header();
        gotoxy(20,6);cout<<"Masukan Jumlah Penumpang    : ";cin>>jum;
        for (int i=1;i<=jum;i++)
        {
            cout<<"\n\t\t    Penumpang Ke-"<<i<<endl;
            cout<<"\t\t    Nama \t : ";cin>>nama[i];
            fflush(stdin);
            cout<<"\t\t    No. KTP/NIK\t : ";cin>>ktp[i];
            fflush(stdin);
        }

    jur:
        system("cls");
        header();
        gotoxy(30,6); cout<<"=================================";
        gotoxy(30,7); cout<<"| NO.|          Jurusan         |";
        gotoxy(30,8); cout<<"=================================";
        gotoxy(30,9); cout<<"| 1. |   Bandung                |";
        gotoxy(30,10);cout<<"|-------------------------------|";
        gotoxy(30,11);cout<<"| 2. |   Karawang               |";
        gotoxy(30,12);cout<<"|-------------------------------|";
        gotoxy(30,13);cout<<"| 3. |   Semarang               |";
        gotoxy(30,14);cout<<"|-------------------------------|";
        gotoxy(30,15);cout<<"| 4. |   Solo                   |";
        gotoxy(30,16);cout<<"|-------------------------------|";
        gotoxy(30,17);cout<<"| 5. |   Kembali                |";
        gotoxy(30,18);cout<<"=================================";
        gotoxy(30,19);cout<<"Pilih [1-5]: ";cin>>jur;
        fflush(stdin);
        if (jur<=4)
        {
            goto wkt;
        }
        else if (jur==5)
        {
            goto menu;
        }
        else
        {
            gotoxy(30,21);cout<<"INPUT YANG ANDA MASUKAN SALAH !!!";
            getch();
            system("cls");
            goto jur;
        }

    wkt:
        system("cls");
        header();
        gotoxy(30,6); cout<<"================================="<<endl;
        gotoxy(30,7); cout<<"| NO.|          Waktu           |"<<endl;
        gotoxy(30,8); cout<<"================================="<<endl;
        gotoxy(30,9); cout<<"| 1. |   Pagi                   |"<<endl;
        gotoxy(30,10);cout<<"|-------------------------------|"<<endl;
        gotoxy(30,11);cout<<"| 2. |   Siang                  |"<<endl;
        gotoxy(30,12);cout<<"|-------------------------------|"<<endl;
        gotoxy(30,13);cout<<"| 3. |   Sore                   |"<<endl;
        gotoxy(30,14);cout<<"|-------------------------------|"<<endl;
        gotoxy(30,15);cout<<"| 4. |   Kembali                |"<<endl;
        gotoxy(30,16);cout<<"================================="<<endl;
        gotoxy(30,17);cout<<"Pilih [1-4]: ";cin>>wkt;
        fflush(stdin);
        if (wkt<=3)
        {
            goto kls;
        }
        else if  (wkt==4)
        {
            goto jur;
        }
        else
        {
            gotoxy(30,19);cout<<"INPUT YANG ANDA MASUKAN SALAH !!!";
            getch();
            system("cls");
            goto wkt;
        }

    kls:
        system("cls");
        header();
        gotoxy(30,6); cout<<"================================="<<endl;
        gotoxy(30,7); cout<<"| NO.|          Kelas           |"<<endl;
        gotoxy(30,8); cout<<"================================="<<endl;
        gotoxy(30,9); cout<<"| 1. |   Eksekutif              |"<<endl;
        gotoxy(30,10);cout<<"|-------------------------------|"<<endl;
        gotoxy(30,11);cout<<"| 2. |   Bisnis                 |"<<endl;
        gotoxy(30,12);cout<<"|-------------------------------|"<<endl;
        gotoxy(30,13);cout<<"| 3. |   Ekonomi                |"<<endl;
        gotoxy(30,14);cout<<"|-------------------------------|"<<endl;
        gotoxy(30,15);cout<<"| 4. |   Kembali                |"<<endl;
        gotoxy(30,16);cout<<"================================="<<endl;
        gotoxy(30,17);cout<<"Pilih [1-4]: ";cin>>kls;
        fflush(stdin);
        if (kls<=3)
        {
            goto psnn;
        }
        else if (kls==4)
        {
            goto wkt;
        }
        else
        {
            gotoxy(30,19);cout<<"INPUT YANG ANDA MASUKAN SALAH !!!";
            getch();
            system("cls");
            goto kls;
        }

    psnn:
    system("cls");
    header();
    gotoxy(20,7);cout<<"Jumlah Tiket Yang di Pesan : "<<jum<<" Tiket";
    {
        if (kls==1)
        {
            gotoxy(20,8);cout<<"Kelas Yang Dipilih         : Eksekutif";
            gotoxy(20,9);cout<<"Harga Satuan Tiket         : Rp350000";
        }
        else if (kls==2)
        {
            gotoxy(20,8);cout<<"Kelas Yang Dipilih         : Bisnis";
            gotoxy(20,9);cout<<"Harga Satuan Tiket         : Rp250000";
        }
        else if (kls==3)
        {
            gotoxy(20,8);cout<<"Kelas Yang Dipilih         : Ekonomi";
            gotoxy(20,9);cout<<"Harga Satuan Tiket         : Rp100000";
        }
    }
    gotoxy(20,11);cout<<"=========================================================";
    {
        if (kls==1)
        {
            harga=jum*350000;
            gotoxy(20,12);cout<<"Total Harga = Rp"<<harga;
        }
        else if (kls==2)
        {
            harga=jum*250000;
            gotoxy(20,12);cout<<"Total Harga = Rp"<<harga;
        }
        else
        {
            harga=jum*100000;
            gotoxy(20,12);cout<<"Total Harga = Rp"<<harga;
        }
    }
    gotoxy(20,14);cout<<"Apakah Anda Setuju [y/t]: ";cin>>stj;
    system("cls");

    if (stj=='y'||stj=='Y')
    {goto rekap;}
    else
    {goto menu;}

    rekap:
    header();
    gotoxy(20,7);cout<<"=========================================================";
    gotoxy(24,8);cout<<"           TIKET KERETA YANG ANDA PESAN";
    gotoxy(20,9);cout<<"---------------------------------------------------------";
    for (int a=1;a<=jum;a++)
        {
            cout<<"\n\t\t    Nama\t : "<<nama[a];cout<<"\tNo KTP\t : "<<ktp[a];
        }

    switch(jur)
    {
        case 1:
        cout<<"\n\t\t    Kode\t : JKT-BDG";
        cout<<"\n\t\t    Nama KA\t : Agro Wilis";
        break;

        case 2:
        cout<<"\n\t\t    Kode\t : JKT-KRG";
        cout<<"\n\t\t    Nama KA\t : Agro Bromo";
        break;

        case 3:
        cout<<"\n\t\t    Kode\t : JKT-SMR";
        cout<<"\n\t\t    Nama KA\t : Agro Bima";
        break;

        case 4:
        cout<<"\n\t\t    Kode\t : JKT-SL";
        cout<<"\n\t\t    Nama KA\t : Agro Mas";
        break;
    }

    switch(kls)
    {
        case 1:
        cout<<"\n\t\t    Kelas\t : Eksekutif";
        break;

        case 2:
        cout<<"\n\t\t    Kelas\t : Bisnis ";
        break;

        case 3:
        cout<<"\n\t\t    Kelas\t : Ekonomi";
    }

switch(jur)
    {
        case 1:
            if(wkt==1)
                {cout<<"\n\n\t\t    Jadwal Pemberangkatan Pagi Pukul Jam 07:30";}
            else if(wkt==2)
				{cout<<"\n\n\t\t    Jadwal Pemberangkatan Siang Pukul Jam 14:15";}
            else if(wkt==3)
				{cout<<"\n\n\t\t    Jadwal Pemberangkatan Sore Pukul Jam 15:15";}
            break;

        case 2:

            if(wkt==1)
                {cout<<"\n\n\t\t    Jadwal Pemberangkatan Pagi Pukul Jam 08:00";}
            else if(wkt==2)
                {cout<<"\n\n\t\t    Jadwal Pemberangkatan Siang Pukul Jam 14:30";}
            else if(wkt==3)
				{cout<<"\n\n\t\t    Jadwal Pemberangkatan Sore Pukul Jam 15:30";}
            break;

        case 3:

            if(wkt==1)
				{cout<<"\n\n\t\t    Jadwal Pemberangkatan Pagi Pukul Jam 08:30";}
            else if(wkt==2)
				{cout<<"\n\n\t\t    Jadwal Pemberangkatan Siang Pukul Jam 14:45";}
            else if(wkt==3)
				{cout<<"\n\n\t\t    Jadwal Pemberangkatan Sore Pukul Jam 15:45";}
            break;

        case 4:

            if(wkt==1)
				{cout<<"\n\n\t\t    Jadwal Pemberangkatan Pagi Jam Pukul 09:00";}
            else if(wkt==2)
				{cout<<"\n\n\t\t    Jadwal Pemberangkatan Siang Jam Pukul 16:00";}
            else if(wkt==3)
				{cout<<"\n\n\t\t    Jadwal Pemberangkatan Sore Jam Pukul 16:30";}
            break;
             }

    cout<<"\n\t\t    Jumlah Tiket Yang Dipesan "<<jum;
    cout<<"\n\t\t    ---------------------------------------------------------";
    cout<<"\n\t\t    Total         : Rp"<<harga<<",00"<<endl;
    cout<<"\t\t    ========================================================="<<endl;

    keluar1();
    kembali();

}

void kembali()      //Subrogram untuk untuk beli tiket lagi atau keluar dari program
{
    int stj;
    cout<<endl<<endl;
    cout<<"\t\t\t        ================================="<<endl;
    cout<<"\t\t\t        | 1. |   Pesan Tiket Lagi       |"<<endl;
    cout<<"\t\t\t        |-------------------------------|"<<endl;
    cout<<"\t\t\t        | 2. |   Kembali ke Menu        |"<<endl;
    cout<<"\t\t\t        |-------------------------------|"<<endl;
    cout<<"\t\t\t        | 3. |   Keluar                 |"<<endl;
    cout<<"\t\t\t        ================================="<<endl;
    cout<<"\t\t\t        Pilih [1-3] : ";cin>>stj;
    if (stj==1)
    {
        kedua();
    }
    else if(stj==2)
    {
        menu_utama();
    }
    else if(stj==3)
    {
        keluar2();
        ExitProcess(0);
    }
    else
    {
        cout<<"\t\t    INPUT YANG ANDA MASUKAN SALAH !!!"<<endl;
        getch();
        kembali();

    }

}

void keluar1()      //Subrogram untuk keluar setelah pembelian
{
	char x[]={"\t\t      .:Terima Kasih Semoga Perjalanan Anda Menyenangkan:."};
		int a,b,i,n;
		n=strlen(x);
		for(i=0;i<n;i++)
		{	for(a=0;a<=99999;a++){
				for(b=0;b<=120;b++){
				}
			}
			cout<<x[i];
		}
	Sleep(1500);
}

void keluar2()      //Subrogram Untuk Keluar dari Program
{
    system("cls");
    header();
	char x[]={".:Terima Kasih Telah Menggunakan Program Kami:."};			//Ucapan Selamat
    int a,b,i,n;
    n=strlen(x);
    for(i=0;i<n;i++)
		{for(a=0;a<=99999;a++)
            {
                for(b=0;b<=120;b++){}
            }
			gotoxy(25+i,7);cout<<x[i];
		}
	Sleep(1000);
}
