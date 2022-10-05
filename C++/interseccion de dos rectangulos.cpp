#define N 100 /* Por ejemplo */ 

double x1[N], y1[N], x2[N], y2[N]; 
int maximo;
main() 
{ 
double ix1,iy1,ix2,iy2; /* Las 4 coords. de la interseccion. */ 

ix1 = maximo[x1]; 
iy1 = maximo[y1]; 
ix2 = maximo[x2]; 
iy2 = maximo[y2]; 

if ( (ix1 > ix2) || (iy1 > iy2) ) 
{ printf("Interseccion vacia\n"); 
return 0 } 

printf("Interseccion: (%f , %f , %f, %f)\n",ix1,iy1,ix2,iy2); 
return 0; 
} 
