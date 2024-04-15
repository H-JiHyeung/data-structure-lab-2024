#include<stdio.h>
#define MAX(a,b) ((a>b)? a:b)
#define MAX_DEGREE 50

typedef struct {
	int degree;
	float coef[MAX_DEGREE];
} ploynominal;

ploynominal addpoly(ploynominal A, ploynominal B) {
	ploynominal C;
	int A_index = 0, B_index = 0, C_index = 0;
	int A_degree = A.degree, B_degree = B.degree;
	C.degree = MAX(A.degree, B.degree);

	while (A_index <= A.degree && B_index <= B.degree) {
		if(A_degree > )
	}
}




int main(void) {

	ploynominal A = { 3, { 4,3 ,5, 0} };
	ploynominal B = { 4, { 3,1,0,2,1} };
	ploynominal C;

	C = addpoly(A, B);
	printf(" \n A(X) = "); printpoly(A);
	printf(" \n B(X) = "); printpoly(B);
	printf(" \n C(X) = "); printpoly(C);

	getchar(); return 0;
}