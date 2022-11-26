#include <iostream>
 
using namespace std;
     
const int DEC_10 = 10;
 
/**
 * kiem tra so thuan nghich
 * 
 * @param n: so nguyen duong
 * @return 1: la so thuan nghich
 *         0: khong la so thuan nghich
 */
int isThuanNghich(int n) {
    int a[20];
    int dem = 0, i;
    // phan tich n thanh mang cac chu so
    do {
        a[dem++] = (n % DEC_10);
        n = n / DEC_10;
    } while (n > 0);
    // kiem tra tinh thuan nghich
    for (i = 0; i < (dem/2); i++) {
        if (a[i] != a[(dem - i - 1)]) {
            return 0;
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
    	sum+=a[i];
	}
    if(sum!=17) return 0;
    
    return 1;
}
 
/**
 * main
 * 
 * @param args
 */
int main() {
    int count = 0, i;
    // in ra man hinh cac so thuan nghich co 6 chu so
    for (i = 100000000; i < 1000000000; i++) {
        if (isThuanNghich(i)) {
            
            count++;
        }
    }
    cout<<"Tong cac so thuan nghich co 6 chu so la: "<< count;
}
