#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta, x1, x2;

    printf("--- Giai Phuong Trinh Bac Hai: ax^2 + bx + c = 0 ---\n");
    printf("Nhap he so a (so thuc): ");
    scanf("%lf", &a);
    printf("Nhap he so b (so thuc): ");
    scanf("%lf", &b);
    printf("Nhap he so c (so thuc): ");
    scanf("%lf", &c);
    
    if (a == 0) {
        printf("\n=> a = 0. Day la phuong trinh bac nhat: %.2fx + %.2f = 0\n", b, c);
        
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh co vo so nghiem (0 = 0).\n");
            } else {
                printf("Phuong trinh vo nghiem (vi: %.2f = 0 la vo ly).\n", c);
            }
        } else {
            x1 = -c / b;
            printf("Phuong trinh co mot nghiem duy nhat: x = %.4f\n", x1);
        }
    } 
    else {
        printf("\n=> a != 0. Day la phuong trinh bac hai: %.2fx^2 + %.2fx + %.2f = 0\n", a, b, c);
        
        delta = b * b - 4 * a * c;
        printf("Delta = b^2 - 4ac = %.4f\n", delta);
        
        if (delta < 0) {
            printf("Phuong trinh vo nghiem (vi Delta < 0).\n");
        } 
        else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("Phuong trinh co nghiem kep: x1 = x2 = %.4f\n", x1);
        } 
        else { 
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co hai nghiem phan biet:\n");
            printf("x1 = %.4f\n", x1);
            printf("x2 = %.4f\n", x2);
        }
    }
    return 0;
}
