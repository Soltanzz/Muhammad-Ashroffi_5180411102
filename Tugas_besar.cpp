#include<iostream>
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


using namespace std;

class apoteker
{
	private:
		char* Kode;
		char* Nama;
	
	public:
		void setKD(char* kode);
		void setnama(char* name);
		char* getKD();
		char* getnama();
};

void apoteker::setKD(char* kode)
{
	this->Kode = kode;
}

char* apoteker::getKD()
{
	return Kode;
}

void apoteker::setnama(char* name)
{
	this->Nama = name;
}

char* apoteker::getnama()
{
	return Nama;
}


class dokter
{
	private:
		char* NIP;
		char* nama;
		char* telp;
		char* alamat;
	public:
		void setNip(char* id);
		void setNama(char* name);
		void setTelp(char* num);
		void setAlamat(char* add);
		
		char* getAlamat();
		char* getNip();
		char* getNama();
		char* getTelp();
};

void dokter::setNip(char* id)
{
	this->NIP=id;
}

char* dokter::getNip()
{
	return NIP;
}

void dokter::setNama(char* name)
{
	this->nama=name;
}

char* dokter::getNama()
{
	return nama;
}

void dokter::setTelp(char* num)
{
	this->telp=num;
}

char* dokter::getTelp()
{
	return telp;
}

void dokter::setAlamat(char* add)
{
	this->alamat=add;
}

char* dokter::getAlamat()
{
	return alamat;
}



class pasien
{
	private:
		char* nama;
		char* alamat;
		char* pekerjaan;
		char* lahir;
		char* umur;	
	
	public:
		void set_nama(char* name);
		void set_alamat(char* add);
		void set_pekerjaan(char* job);
		void set_lahir(char* born);
		void set_umur(char* age); 
		
		char* get_pekerjaan();
		char* get_nama();
		char* get_alamat();
		char* get_lahir();
		char* get_umur();
};

void pasien::set_nama(char* name)
{
	this->nama = name;
}

char* pasien::get_nama()
{
	return nama;
}

void pasien::set_lahir(char* born)
{
	this->lahir = born;
}

char* pasien::get_lahir()
{
	return lahir;
}

void pasien::set_umur(char* age)
{
	this->umur = age;
}

char* pasien::get_umur()
{
	return umur;
}

void pasien::set_alamat(char* add)
{
	this->alamat = add;
} 

char* pasien::get_alamat()
{
	return alamat;
}

void pasien::set_pekerjaan(char* job)
{
	this->pekerjaan = job;
} 

char* pasien::get_pekerjaan()
{
	return pekerjaan;
}
/*
int main()
{
	pasien patient;
	char* nama;
	char* lahir;
	int umur;
	char* alamat;
	char* pekerjaan;
	
	patient.set_nama(nama);
	patient.set_lahir(lahir);
	patient.set_umur(umur);
	patient.set_alamat(alamat);
	patient.set_pekerjaan(pekerjaan);
}*/

class ploket
{
	private:
		char* id;
		char* nama;
		char* telp;
	
	public:
		void setID(char* nip);
		void setNAMA(char* name);
		void setTELP(char* phone);
		
		char* getID();
		char* getNAMA();
		char* getTELP();
};

void ploket::setID(char* nip)
{
	this->id = nip;
}

char* ploket::getID()
{
	return id;
}

void ploket::setNAMA(char* name)
{
	this->nama = name;
}

char* ploket::getNAMA()
{
	return nama;
}

void ploket::setTELP(char* phone)
{
	this->telp = phone;
}

char* ploket::getTELP()
{
	return telp;
}

void cek_penyakit(char penyakit[50])
{
	if(strcmp("Panas",penyakit)==0)
	{
		cout<<"\nUntuk penyakit panas ini biasanya anda kurang istirahat, \njadi anda terlalu banyak kesibukan sehingga anda lupa dengan diri anda\n\n";
		cout<<"-----------------------------------------------\n";
		cout<<"|   Silahkan resep dibawa ke bagian apoteker  |\n";
		cout<<"|               Panas tubuh                   |\n";
		cout<<"-----------------------------------------------\n";
	}
	else if(strcmp("Pusing",penyakit)==0)
	{
		cout<<"\nUntuk penyakit pusing ini biasanya anda kurang istirahat, \njadi anda terlalu banyak kesibukan sehingga anda lupa dengan diri anda\n\n";
		cout<<"-----------------------------------------------\n";
		cout<<"|   Silahkan resep dibawa ke bagian apoteker  |\n";
		cout<<"|               Pusing Kepala                 |\n";
		cout<<"-----------------------------------------------\n";
	}
	else if(strcmp("Pilek",penyakit)==0)
	{
		cout<<"\nUntuk penyakit pilek ini biasanya anda kurang istirahat, \njadi anda terlalu banyak kesibukan sehingga anda lupa dengan diri anda\n\n";
		cout<<"-----------------------------------------------\n";
		cout<<"|   Silahkan resep dibawa ke bagian apoteker  |\n";
		cout<<"|             Hidung Tersumbat                |\n";
		cout<<"-----------------------------------------------\n";
	}
	else
	{
		cout<<"Anda baik-baik saja\n";
	}
	
	system("PAUSE");
	system("CLS");
}

void ambil(char nama[50], char umur[10], char alamat[50], char penyakit[50])
{
	pasien patient;
	apoteker apotik;
	char obat1[20] = "Paracetamol";
	char obat2[20] = "Antalgin";
	char obat3[20] = "Procold";
	
	cout<<"Nama \t\t: "<<patient.get_nama()<<endl;
	cout<<"Umur \t\t: "<<patient.get_umur()<<endl;
	cout<<"Alamat \t\t: "<<patient.get_alamat()<<endl;
	
	if(strcmp("Panas",penyakit)==0)
	{
		apotik.setnama(obat1);
		cout<<"obat anda \t: "<<apotik.getnama()<<"\n";
	}
	else if(strcmp("Pusing",penyakit)==0)
	{
		apotik.setnama(obat2);
		cout<<"obat anda \t: "<<apotik.getnama()<<"\n";
	}
	else if(strcmp("Pilek",penyakit)==0)
	{
		apotik.setnama(obat3);
		cout<<"obat anda \t: "<<apotik.getnama()<<"\n";
	}
	cout<<"-----------------------------------------\n";
	cout<<"Diminum 3x sehari sebelum makan\n";
	cout<<"1tablet untuk dewasa\n\n";
	cout<<"Terima Kasih, Semoga Cepat Sembuh :)";
}

int main()
{
	pasien patient;
	dokter dr;
	ploket loket;
	apoteker apotik;
	
	char obat1[20] = "Paracetamol";
	char obat2[20] = "Antalgin";
	char obat3[20] = "Procold";
	
	char id[15] = "111222333444";
	char nama_p[50] = "Faiq Firdausy";
	loket.setID(id);
	loket.setNAMA(nama_p);
	
	char nip[15] = "5114100063";
	char nama_dr[50] = "Dr. Hamka Aminullah";
	dr.setNip(nip);
	dr.setNama(nama_dr);
	
	char nama[50];
	char lahir[20];
	char umur[10];
	char alamat[50];
	char pekerjaan[25];
	char penyakit[50];
	
	cout<<"---------------------------"<<endl;
	cout<<"SISTEM INFORMASI PUSKESMAS"<<endl;
	cout<<"---------------------------\n"<<endl;
	cout<<"Silahkan Daftar Terlebih Dahulu !!\n\n";
	
	cout<<"Nama Lengkap \t: ";
	gets(nama);
	patient.set_nama(nama);
	cout<<"Tanggal Lahir \t: ";	
	gets(lahir);
	patient.set_lahir(lahir);
	cout<<"Umur \t\t: ";
	gets(umur);
	patient.set_umur(umur);	
	cout<<"Alamat \t\t: ";
	gets(alamat);
	patient.set_alamat(alamat);
	cout<<"Pekerjaan \t: ";
	gets(pekerjaan);
	patient.set_pekerjaan(pekerjaan);
	
	cout<<"\nPendaftaran Sukses !!!\n"<<endl;
	system("PAUSE");
	system("CLS");
	
	cout<<"Harap Tunggu ";
	Sleep(2000);
	cout<<". ";
	Sleep(2000);
	cout<<". ";
	Sleep(2000);
	cout<<". \n\n";
	Sleep(2000);
			
	cout<<"umum"<<endl;
	cout<<dr.getNip()<<endl;
	cout<<dr.getNama()<<endl;
	
	cout<<"\nNama \t: "<<patient.get_nama()<<endl;
	cout<<"Keluhan : ";
	gets(penyakit);

	cek_penyakit(penyakit);
	//ambil(nama, umur, alamat, penyakit);	
	
	cout<<"Nama \t\t: "<<patient.get_nama()<<endl;
	cout<<"Umur \t\t: "<<patient.get_umur()<<endl;
	cout<<"Alamat \t\t: "<<patient.get_alamat()<<endl;
	
	if(strcmp("Panas",penyakit)==0)
	{
		apotik.setnama(obat1);
		cout<<"obat anda \t: "<<apotik.getnama()<<"\n";
	}
	else if(strcmp("Pusing",penyakit)==0)
	{
		apotik.setnama(obat2);
		cout<<"obat anda \t: "<<apotik.getnama()<<"\n";
	}
	else if(strcmp("Pilek",penyakit)==0)
	{
		apotik.setnama(obat3);
		cout<<"obat anda \t: "<<apotik.getnama()<<"\n";
	}
	
	cout<<"Diminum 3x sehari sebelum makan\n";
	cout<<"1tablet untuk dewasa\n\n";
	cout<<"Terima Kasih, Semoga Cepat Sembuh :)";																																																																																																																																																																							
}
