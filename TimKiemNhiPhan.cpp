#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
//nhập mảng
void Nhap(int arr[],int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
    }
    
}

//xuất mảng ngẫu nhiên 
void Xuat(int arr[],int n) {
    cout << "Mang chua duoc sap xep: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}
//giải thuật sắp xếp
void SapXepMang(int arr[],int n) {
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        
    }
    
}
//xuất mảng đã sắp xếp
void XuatMangSapXep(int arr[],int n) {
    cout << "Mang da duoc sap xep: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}
int TimKiemNhiPhan(int arr[],int n,int k) {
    int left = 0,right = n - 1;
    int mid;
    do
    {
        mid = (left + right) / 2; //Lấy phần tử chính giữa làm môc so sánh 
        if(k == arr[mid])// nếu như k = phần tử trong mảng thì trả mid 
            return mid;
        else if(k < arr[mid]) // nếu k < phần tử thì ta giảm từ phím bên phải -1, khi ấy thì mid cug giảm -1
            right = mid - 1;// tiếp tục so sánh mid mới vs k coi có bằng ko cứ thế tiếp tục
        else 
            left = mid + 1;
    } while (left <= right);// duyệt hết mảng ko thấy
    return -1; // thì trả về -1;
}
int main()
{
    int n,k;
    cout << "Moi ban nhap so luong pha tu trong mang: ";
    cin >> n;
    int arr[n];
    Nhap(arr,n);
    Xuat(arr,n);  
    SapXepMang(arr,n);
    XuatMangSapXep(arr,n);  
    cout << "Moi ban nhap so can tim: ";
    cin >> k;
    int kp = TimKiemNhiPhan(arr,n,k);
    if(kp == -1)
        cout << "Ko tim thay" << endl;
    else
        cout << "Tim thay tai vi tri: " << kp << endl;
    return 0;
}