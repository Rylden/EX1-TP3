#include"bibliotheque.h"


int main()
{
    ouvrage A;
    ouvrage* B = new ouvrage(120,"Les miserables","Victor Hugo",1) ;
    ouvrage* C = new ouvrage(121,"Big fast open data","Lejeune Yannick",0) ;
    ouvrage* D = new ouvrage(122,"Information risk and security","Wilding Edward",1) ;
    
    bibliotheque b(5);
    
    b.ajouter(*B);
	b.ajouter(*C); 
	b.ajouter(*D);
	  
   b.supprimer(*C); 
	b.affTaille() ; 
	b.affiche() ;
    return 0;
}


