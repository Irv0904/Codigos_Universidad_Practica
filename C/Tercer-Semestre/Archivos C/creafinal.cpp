//Creafinal.cpp
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
nodo *creafinal(nodo *p);
nodo *liberamemoria(nodo *p);
void reverse (nodo **x);

void recorredirec(nodo *p);

int main()
{
	
	nodo *p=NULL;
	p = creafinal(p);
    recorrecursivo( p);
    
 //recorredirec(p);
  /*  
    printf("\n &p %5ld ",p);	
   */ 
    reverse(&p);
  
   // recorredirec(p);  
    recorreiterativo(p);
    //p=liberamemoria(p);
//*	reverse(&p);

//	recorredirec(p);

  // recorreiterativo(p);
   
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
	while( p != NULL)
	{
		q=p;
		p=p->liga;
		free(q);
		
	}
printf("\n\n\t\t La memoria ha sido liberada");	
return( p);
}

nodo *creafinal(nodo *p)
{
	int i, num;
	nodo *t, *q;
	
	p= creanodo();
	
	printf("\n Introduzca un valor entero: ");
	i= scanf("%d",&num);
	fflush(stdin);
	if( i == 1)
	{
		 p->num = num;
		 p->liga = NULL;
		 t=p;
		 do
		 {
		 	q= creanodo();
		 	printf("\n Introduzca un valor entero: ");
	        i= scanf("%d",&num);
	        fflush(stdin);
	        if( i == 1)
	          { 
			    q->num = num;
				q->liga = NULL;
				t->liga=q;
				t=q;
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
	
void reverse( nodo **x)
{
	nodo  *q, *r, *s;
/* printf("\n x %5ld ",x);	
 printf("\n *x %5ld ",*x);
 printf("\n **x %5ld ",**x);
 */
	q = *x;
 //printf("\n q %5ld ",q);	
	r = NULL;
	
//	int i=0;
	/* traverse the entire linked list */
	
	while ( q != NULL)
	{
//		printf("\n i= %d",++i);
		s=r;
/*		if (s == NULL)
		printf("\n s=r %s = %s",s,r);
		else
		 printf("\n s->num=r-num %5d = %5d",s->num,r->num);
*/
		r=q;
/*		if (r == NULL)
		printf("\n r=q %s = %s",r,q);
		else
		    printf("\n r->num=q->num %5d = %5d",r->num,q->num);
*/
		q=q->liga;
/*		if (q == NULL)
		printf("\n q %s ",q);
		else
		    printf("\n q->num %5d ",q->num);
*/
		r->liga=s;
/*		if (r == NULL)
		printf("\n r %s = %s",r);
		else
		    printf("\n r->num %5d ",r->num);
*/		    
	}

	
/*		if (r == NULL)
		printf("\n r %s = %s",r);
		else
		    printf("\n r->num %5d ",r->num);
*/
	*x=r;
/* printf("\n x %5ld ",x);	
 printf("\n *x %5ld ",*x);
 */
 //printf("\n **x %5ld ",**x);	
}



void recorredirec(nodo *p)
{
	nodo *q;  
	if( p != NULL)
		{
			printf("\n\n");
			for( q=p; q != NULL; q=q->liga)
	           printf("%5ld->",q);
			printf("%s",q);
		printf("\n\n");			
		}
	else
		    printf("\n\n\t\t La lista esta vacia");
	
	return;
	
	}
	
