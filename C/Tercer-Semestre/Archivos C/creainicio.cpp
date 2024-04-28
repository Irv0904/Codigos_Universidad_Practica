//Creainicio.cpp
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct datos{
	int num;
	struct datos *liga;
};

typedef struct datos nodo;

void *creamemoria(int n);
nodo *creanodo();

void recorrecursivo( nodo *p);

void recorreiterativo(nodo *p);

nodo *creainicio();

nodo *liberamemoria(nodo *p);

int main()
{
	
	nodo *p=NULL;
	
	p = creainicio();
	
    recorrecursivo( p);
    
    
    recorreiterativo(p);
    
    p=liberamemoria(p);
	
   recorreiterativo(p);
}

void *creamemoria(int n)
{
	void *p = (int *)malloc(n);
	if (p == NULL)
	 {
	 	puts("LO siento no hay memoria disponible");
	 	getchar();
	   exit(1);
	}
	
  return (p);	
}

nodo *creanodo()
{
	return( nodo *)creamemoria(sizeof(nodo));
}

void recorrecursivo( nodo *p)
{
	if ( p != NULL)
	{
		printf("%5d->",p->num);
		if(p->liga != NULL)
		  recorrecursivo(p->liga);
		else
		    printf("%s",p->liga);
	
	}
	else 

	     printf("\n\n\t\t La lista esta vacia");

}

nodo *liberamemoria(nodo *p)
{
	nodo *q = NULL;
if ( p != NULL)	
{	
	
	while( p != NULL)
	{
		q=p;
		p=p->liga;
		q->liga = NULL;
		free(q);
		
	}
       printf("\n\n\t\t La memoria ha sido liberada");
	}
 else 
      printf("\n\n\t\t La lista esta vacia");	
return( p);
}

nodo *creainicio()
{
	int i, num;
	nodo *p, *q;
	
	p= creanodo();
	
	printf("\n Introduzca un valor entero: ");
	i=scanf("%d",&num);
	fflush(stdin);
	if( i == 1)
	{
		 p->num = num;
		 p->liga = NULL;
		 
		 do
		 {
		 	q= creanodo();
		 	printf("\n Introduzca un valor entero: ");
	        i= scanf("%d",&num);
	        fflush(stdin);
	        if( i == 1)
	          { 
			    q->num = num;
				q->liga = p;
				p=q;
		      } 
			 else
			     {
			     	free(q);
			     	break;
				  }
				   
	}while(i== 1);
	
   }
   else{
   	    free(p);
   	    return(NULL);
   }
   
   q=p;
   
   return p;  
}  

void recorreiterativo(nodo *p)
{
	nodo *q;  
	if( p != NULL)
		{
			printf("\n\n");
			for( q=p; q != NULL; q=q->liga)
	               printf("%5d->",q->num);
			printf("%s",q);
		printf("\n\n");			
		}
	else
		    printf("\n\n\t\t La lista esta vacia");
	
	return;
	
	}
