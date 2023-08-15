#include<stdio.h>
#include<string.h>

struct fraction{
    int numerator;
    int denominator;
};

int multiply(int x, int y){
    return (x*y);
}

struct fraction multiply_frac(struct fraction x, struct fraction y){
    int n = x.numerator * y.numerator;
    int d = x.denominator * y.denominator;
    struct fraction z = {n,d};
    return z;
    //printf("%d/%d\n",n,d);
}

void multiply_frac_pointers(struct fraction *x, int m ,struct fraction *z){
    int n = 1, d = 1;
    for(int i =0; i<m; i++){
    n = x->numerator * n;
    d = x->denominator * d;
    x++;
    }
    z->numerator = n;
    z->denominator = d;
}

int main(){
    struct fraction a[3] = {{1,2},{1,3},{1,4}};
    struct fraction product;

    
    //PASSING STRUCTURE POINTERs
    struct fraction product_3;
    multiply_frac_pointers(a,3,&product_3);
    printf("%d/%d\n", product_3.numerator, product_3.denominator);


}
