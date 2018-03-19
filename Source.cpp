#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
	char msv[10];
	char hoTen[30];
	double diemTB;
	struct ngaySinh
	{
		int ngay, thang, nam;
	};
	ngaySinh birth;
};

void main()
{
	 student sv[4];
	 
	 for (int i = 0; i < 2; i++)
	 {
		 printf("\nNhap du lieu cho sinh vien thu %d :\n", i + 1);
	
		// student = sv[i];
		if( fgets(sv[i].msv, 10, stdin)!=NULL);
		 printf("Ma so sinh vien : ");
		
		if(fgets(sv[i].msv, 10, stdin)!=NULL);
		sv[i].msv[strlen(sv[i].msv) - 1] = NULL;
		// if (fgets(sv[i].hoTen, 30, stdin) != NULL);
		 printf("Ho ten :");
		
		 if(fgets(sv[i].hoTen, 30, stdin)!=NULL) ;
		 sv[i].hoTen[strlen(sv[i].hoTen) - 1] = NULL;
		 printf("Diem trung binh : ");
		
		 scanf_s("%lf", &sv[i].diemTB);
		 printf("Ngay sinh (ngay, thang, nam) : ");
		 
		 scanf_s("%d %d %d", &sv[i].birth.ngay, &sv[i].birth.thang, &sv[i].birth.nam);
		 
	 }
	 printf("---------------Thong tin sinh vien-------------------\n");
	 printf("%-20s %-30s %-7s %-10s\n", "MSV", "Ho ten", "Diem TB", "Ngay sinh");
	 for (int i = 0; i < 2; i++)
	 {
		 printf("%-20s %-30s %-7.2lf %02d/%02d/%4d\n", sv[i].msv, sv[i].hoTen, sv[i].diemTB, sv[i].birth.ngay, sv[i].birth.thang, sv[i].birth.nam);
	 }
	
	
	_getch();
}