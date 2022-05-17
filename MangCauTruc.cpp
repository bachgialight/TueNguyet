#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

struct SinhVien
{
    char code[10];
    char name[10];
    bool gioiTinh;
};

void NhapDanhSach(SinhVien arr[],int tiso) {

    for (int i = 0; i < tiso; i++)
    {
        cout << "Nhap ma: ";
        gets(arr[i].code);
        cout << "Nhap ten: ";
        gets(arr[i].name);
        cout << "Nhap gioi Tinh: ";
        char gt[2];
        gets(gt);
        if(strcmp(gt,"m"))
            arr[i].gioiTinh = false;
        else 
            arr[i].gioiTinh = true;
    }
    
}

void InDanhSach(SinhVien arr[],int tiso) {
      for (int i = 0; i < tiso; i++)
      {
          cout << arr[i].code << "\t" << arr[i].name << "\t" << (arr[i].gioiTinh == false ? "Nu" :"Nam") << endl;
      }
      
      
}
SinhVien TimSinhVien(SinhVien arr[],int tiso) {
    
}
int main()
{
    int tiso = 3;
    SinhVien arr[tiso];
    NhapDanhSach(arr,tiso);
    InDanhSach(arr,tiso);
    return 0;
}