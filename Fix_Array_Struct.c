#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct data_mahasiswa_upn_jatim{
	char nama[40];
	char npm[12];
	char email[40];
	char nohp[20];
	char kota_asal[15];
	char tb[4];
	char bb[4];
}mhs;

int main (){
	int i=0,j=1,tipe,bagian,yesno,urutan;
	mhs daftar [50];
	
pilih:
	printf("=------------= Program Data Mahasiswa =-------------=\n");
	printf("Pilih yang anda inginkan :\n\n1.Menambahkan Data Mahasiswa. \n2.Lihat List Data. \n3.Update Data. \n4.Hapus Data.\n5.Keluar Program. \n");
	printf("pilih \t: ");
	scanf("%d",&tipe);
	
	if(tipe==1){
		printf("=------------= Program Data Mahasiswa =-------------=\n");
		i=1;
		do{
			system ("cls");
		
			printf("\nMahasiswa ke- %d \n",i);
			printf("\nMasukkan Nama anda\t\t: ");
			scanf(" %[^\n]%*c",&daftar[i].nama);
			printf("\nMasukkan NPM anda\t\t: ");
			scanf(" %[^\n]%*c",&daftar[i].npm);
			printf("\nMasukkan Email anda\t\t: ");
			scanf(" %[^\n]%*c",&daftar[i].email);
			printf("\nMasukkan Nomor HP\t\t: ");
			scanf(" %[^\n]%*c",&daftar[i].nohp);
			printf("\nMasukkan Kota Asal anda\t\t: ");
			scanf(" %[^\n]%*c",&daftar[i].kota_asal);
			printf("\nMasukkan Tinggi Badan anda\t: ");
			scanf(" %[^\n]%*c",&daftar[i].tb);
			printf("\nMasukkan Berat Badan\t\t: ");
			scanf(" %[^\n]%*c",&daftar[i].bb);
			i++,j++;
			
			printf("Apakah anda ingin menginput kembali ?\n1.Ya 2.Tidak =");
			scanf("%d",&yesno);						
		}
		while (yesno == 1);
		
		if(yesno == 2){
			system("cls");
			goto pilih;
		}				
	}
	else if (tipe==2){
		system("cls");
		printf("=------------= Program Data Mahasiswa =-------------=\n");
		if(i==0){
			printf("\t\tData Anda Belum Terinput\t\n");
			system("pause");
			system("cls");
			goto pilih;
		}
		else {
			for(i=1;i<j;i++){
				printf("\n\nMahasiswa ke- %d\n",i);
				printf("\nNama\t\t : %s",&daftar[i].nama);
				printf("\nNPM\t\t : %s",&daftar[i].npm);
				printf("\nEmail\t\t : %s",&daftar[i].email);
				printf("\nNomor HP\t : %s",&daftar[i].nohp);
				printf("\nKota Asal\t : %s",&daftar[i].kota_asal);
				printf("\nTinggi Badan\t : %s",&daftar[i].tb);
				printf("\nBerat Badan\t : %s\n\n",&daftar[i].bb);
			}
			system("pause");
			system("cls");
			goto pilih;
		}		
	}
	else if(tipe == 3){
		system("cls");
		printf("=------------= Program Data Mahasiswa =-------------=\n");
		if(i == 0){
			printf("\t\t Data Anda Belum Terinput\t\n");
			system("pause");
			system("cls");
			goto pilih;
		}
		else{
			for (i=1;i<j;i++){
				printf("\n\nMahasiswa ke- %d\n",i);
				printf("\nNama\t\t : %s",&daftar[i].nama);
				printf("\nNPM\t\t : %s",&daftar[i].npm);
				printf("\nEmail\t\t : %s",&daftar[i].email);
				printf("\nNomor HP\t : %s",&daftar[i].nohp);
				printf("\nKota Asal\t : %s",&daftar[i].kota_asal);
				printf("\nTinggi Badan\t : %s",&daftar[i].tb);
				printf("\nBerat Badan\t : %s\n",&daftar[i].bb);
			}
			printf("\nMasukkan Nomor yang ingin anda update datanya :");
			scanf("%d",&i);
			system("cls");
			
			printf("=------------= Program Data Mahasiswa =-------------=\n");
			printf("Masukkan data apa yang akan anda ubah\n ");
			printf("\n1.Nama\n2.NPM\n3.Email\n4.Nomor HP\n5.Kota Asal\n6.Tinggi Badan\n7.Berat Badan\n");
			printf("Pilih :");
			scanf("%d",&bagian);
			
			if (bagian == 1){
			printf("\nNama :");
			scanf(" %[^\n]%*c",&daftar[i].nama);
			}
			
			else if (bagian == 2){
			printf("\nNPM :");
			scanf(" %[^\n]%*c",&daftar[i].npm);
			}	
				
			else if (bagian == 3){
			printf("\nEmail :");
			scanf(" %[^\n]%*c",&daftar[i].email);
			}
			
			else if (bagian == 4){
			printf("\nNomor HP :");
			scanf(" %[^\n]%*c",&daftar[i].nohp);
			}
			
			else if (bagian == 5){
			printf("\nKota Asal :");
			scanf(" %[^\n]%*c",&daftar[i].kota_asal);
			}
			
			else if (bagian == 6){
			printf("\nTinggi Badan :");
			scanf(" %[^\n]%*c",&daftar[i].tb);
			}
				
			else if (bagian == 7){
			printf("\nBerat Badan :");
			scanf(" %[^\n]%*c",&daftar[i].bb);
			}
		}
		system("cls");
		goto pilih;	
	}
	else if (tipe==4){
		system("cls");
		printf("=------------= Program Data Mahasiswa =-------------=\n");
		if(i == 0){
			printf("\t\t Data Anda Belum Terinput\t\n");
			system("pause");
			system("cls");
			goto pilih;
		}
		else{
			for (i=1;i<j;i++){
				printf("\n\nMahasiswa ke- %d\n",i);
				printf("\nNama\t\t : %s",&daftar[i].nama);
				printf("\nNPM\t\t : %s",&daftar[i].npm);
				printf("\nEmail\t\t : %s",&daftar[i].email);
				printf("\nNomor HP\t : %s",&daftar[i].nohp);
				printf("\nKota Asal\t : %s",&daftar[i].kota_asal);
				printf("\nTinggi Badan\t : %s",&daftar[i].tb);
				printf("\nBerat Badan\t : %s\n",&daftar[i].bb);
			}
			printf("\n Masukkan Mahasiswa keberapa yang ingin anda Hapus dari list Data :");
			scanf("%d",&urutan);
			for(urutan;urutan<i;urutan++){
				strcpy(daftar[urutan].nama,daftar[urutan+1].nama);
				strcpy(daftar[urutan].npm,daftar[urutan+1].npm);
				strcpy(daftar[urutan].email,daftar[urutan+1].email);
				strcpy(daftar[urutan].nohp,daftar[urutan+1].nohp);
				strcpy(daftar[urutan].kota_asal,daftar[urutan+1].kota_asal);
				strcpy(daftar[urutan].tb,daftar[urutan+1].tb);
				strcpy(daftar[urutan].bb,daftar[urutan+1].bb);
			}
		}
		system("cls");
		goto pilih;
	}
	else if (tipe == 5){
		system("cls");
		printf("=------------= Program Data Mahasiswa =-------------=\n");
		printf("Terimakasih");
	}else {
		system("cls");
		printf("=------------= Program Data Mahasiswa =-------------=\n");
		printf(" Inputan yang anda masukkan Invalid ");
	}
	return 0;
}
