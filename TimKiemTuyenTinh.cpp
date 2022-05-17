#include<iostream>

using namespace std;
// Nhập các phần tử cho mảng
void NhapMang(int arr[],int n) {
    for (int i = 0; i < n; i++)
    {
        cout << "Moi ban nhap phan tu: ";
        //Ta input cho mang
        cin >> arr[i];
    }
    
}
//Xuất mảng 
void XuatMang(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] = " << arr[i] << "\t";
    }
    cout << endl;
    
}
// Giải thuật tìm kiếm 
int TimKiemNhiPhan(int arr[],int n,int k) {
    //Duyệt các phần tử trong mảng và tìm kiếm
    // Giải thích như sau: arr[0] là vị trí phần tử thứ nhất nếu phần tử đó == k thì trả về
    // vị trí của i vs i == 0, còn nếu ko bằng thì lặp tiếp vs i + 1, và so sánh arr[1] vs k...
    for (int i = 0; i < n; i++)
        if(arr[i] == k) return i;
    // nếu duyệt hết mảng mà ko thấy thì ta trả về -1.
    return -1;
    
}
int main()
{
    int n,k;
    cout << "Moi ban nhap so luong phan tu trong mang: ";
    cin >> n;
    int arr[n];         
    cout << "Moi ban nhap so can tim: ";
    cin >> k;
    NhapMang(arr,n);
    XuatMang(arr,n);
    int kp = TimKiemNhiPhan(arr,n,k);
    if(kp == -1)
        cout << "so ban tim ko thay trong mang ";
    else
        cout << "tim thay so ma ban can tim trong mang tai vi tri " << kp << endl;
    return 0;
}