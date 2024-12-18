#include <stdio.h>
#include <string.h>

struct SinhVien{
    char name[50];
    char age[50];
    double phone;
};

typedef struct SinhVien SinhVien;

SinhVien nhap(SinhVien x){
    printf("Nhap ten : ");
    gets(x.name);
    printf("Nhap age : ");
    gets(x.age);
    printf("Nhap phone : ");
    scanf("%lf", &x.phone);
    getchar(); 
    return x;
}

void nhapDS(SinhVien a[], int n){
    for(int i = 0; i < n; i++){
        printf("Nhap thong tin cho sinh vien thu %d : \n", i + 1);
        a[i] = nhap(a[i]); 
    }
}

void xuat(SinhVien x){
    printf("------------------------\n");
    printf("Ho ten : %s\n", x.name );
    printf("tuoi: %s\n", x.age);
    printf("sdt : %.2lf\n", x.phone);
    printf("------------------------\n");
}

void xuatDS(SinhVien a[], int n){
    for(int i = 0; i < n; i++){
        printf("Thong tin sinh vien thu %d :\n", i + 1);
        xuat(a[i]);
    }
}


int main(){
    SinhVien a[1000];
    int n; 
    printf("Nhap so luong sinh vien truong ban va cho chung toi biet them thong tin ve sinh vien ay: ");
    scanf("%d", &n);
    getchar();
    nhapDS(a, n);
    xuatDS(a, n);
    return 0;
}
