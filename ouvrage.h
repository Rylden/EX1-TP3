#include<iostream>
#include<string.h>

using namespace std;

class ouvrage
{  private:
	
    int ref_ouv;
    string auteur;
    string titre;
    bool best;
    
    public:
       ouvrage(int x, string y, string z, bool t)
		{
			ref_ouv=x;
			titre=y;
		
			auteur=z;
		
			best=t;
			
			
		}    
	ouvrage()
	{  	    ref_ouv=0;
			titre="default";
		
			auteur="default";
		
			best=false;
	
	}		
    ouvrage(const ouvrage &o)
    {
       auteur=o.auteur;
      titre=o.titre;
      ref_ouv=o.ref_ouv;
      best=o.best;
	}
    ~ouvrage()
    {  
	   //delete auteur;
      
	}
	

	int getref()
	{
		return ref_ouv;
	}
	
	void affiche()
	{   cout<<"-------------\n"<<endl;
		cout<<"reference"<<ref_ouv<<endl;
	    cout<<"titre est: "<<titre<<endl;
	     cout<< "auteur est : "<<auteur<<endl;
		if(best)
		cout<<"non seller"<<endl;
		else
		cout<<"best seller"<<endl;
	}
   
    

};


