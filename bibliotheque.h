#include"ouvrage.h"

class  bibliotheque
{  private:    
    ouvrage *bib;
    int taille;
    int nbr;


public:
	bibliotheque(int n)
	{     bib=new ouvrage[n];
	      taille=n;
	      nbr=0;
	   

	}
	
	bool exist(int ref)
	{ 
	int  i=0;
     bool trouve=false;
	   while(i<taille && trouve==false)
	   {   
	      if ((bib[i].getref())==ref)
	      {
	      	 
	      	 trouve=true;
		  }
		  else
		  { 
		     i++;
		  }
		 
	   	
	   }
		return trouve;
		
	}
	

	
	void ajouter(ouvrage o)
	{
	if(nbr<taille)
	{ 
	
	  if(!exist(o.getref()))
	  {
	  	
		   
		   
			  bib[nbr]=o;
	  	      nbr++;
	  	      
		    
		 }else
	 { cout<<"l'ouvrage existe déjà"<<endl;
	 }
		
	  }
	  
	 
	
	else
	  {
	  	cout<<"la bibliothèque est pleine"<<endl;
	  }
}

	void supprimer(ouvrage o)
	{ 
      int i=0;
      	if(exist(o.getref()))
	    { while(i<nbr)
	      {  if(bib[i].getref()==o.getref())
	          { for(int j=i; j<taille-1; j++)
	            { 
				   bib[j]=bib[j+1];
				   
				}
		      }
		      i++;
	          
		  }
		nbr--;
    	}
    	else
		{
    		cout<<"l'ouvrage n'existe pas"<<endl;
		}
    	
		
		}
		
		 void affiche()
		 {int i=0;
		 	while(i<nbr)
		    	{ 
			         	bib[i].affiche();
			         	i++;
		         	
			    }
			    
			
		 }
		void affTaille() 
		{
			 cout<<"le nombre d'ouvrages est : "<<nbr<<endl;
		}
		 
};

