#include <stdio.h>
#include <math.h>

int main(){

double Cauchy,Gumbel, Laplace;

double x = -2;
//Cauchy
Cauchy = 1/(3.141592*(1+x *x ));
printf("Cauchy e igual a:%f \n",Cauchy );

//Gumbel
double y= 0;
double u= 0.5;
double b= 2;
double z= (y-u)/b;
Gumbel = (1/b)*exp(-(z+ exp(-z)));
printf("Gumbel e igual a:%f \n",Gumbel);

//Laplace
double w= -6;
double mu= -5;
double beta= 4;
Laplace = (1/(2*beta))*exp(-(fabs(w- mu)/beta));
printf("Laplace e igual a:%f",Laplace);

return 0;

}
