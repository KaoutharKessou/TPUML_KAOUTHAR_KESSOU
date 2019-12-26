#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

//Exercice 1
void affiche_vecteur(int *vecteur,int dimension);
void affiche_matrice(int matrice[][2],int lignes ,int colonnes);
//Exercice 2
int *alloue_vecteur(int dimention,int val);
int *liberer_vecteur(int * vecteur);
//Exercice3
int **alloue_matrice(int lignes,int colonnes,int val);
void liberer_matrice(int ** matrice,int lignes);

int main()
{
	int tab[5]={10,12,90,5,100};
	int mat[2][2]={{1,2},{3,4}};
		//Exercice1
	affiche_vecteur(tab,5);
    affiche_matrice(mat,2,2);
    
        //Exercice 2
    alloue_vecteur(5,5);
    affiche_vecteur(tab,5);
    //liberer_vecteur(tab);
    
    	//Exercice 3
    alloue_matrice(2,2,4);
    affiche_matrice(mat,2,2);
    //liberer_matrice(int ** matrice,int lignes);
    
	return 0;
}
//*********Exercice1****************
//Fonctions
void affiche_vecteur(int *vecteur,int dimension)
{
	int i;
	for(i=0;i<dimension;i++)
    cout<<"["<<vecteur[i]<<"]";
	cout<<"\n";
}
void affiche_matrice(int matrice[][2],int lignes ,int colonnes)
{
	int i,j;
	for(i=0;i<lignes;i++)
	{
		affiche_vecteur(matrice[i],colonnes);
	}
	cout<<"\n";
}


//**********************Exercice 2**************
int *alloue_vecteur(int dimention,int val)
{
	int i;
	int* vecteur = new int[dimention];
	for(i=0;i<dimention;i++)
	{
		vecteur[i]=val;
	}
	return vecteur;
}
int *liberer_vecteur(int * vecteur)
{
	delete []vecteur;
}

//**********************Exercice 3**************
int **alloue_matrice(int lignes,int colonnes,int val)
{
	int i,j;
	int**matrice =new int *[lignes];
	matrice[i]= new int[colonnes];
	
	for(i=0;i<lignes;i++)
	 for(j=0;i<colonnes;j++)
		matrice[i][j]=val;
	
	return matrice;
}
void liberer_matrice(int ** matrice,int lignes)
{
	int i;
	for(i=0;i<lignes;i++)
	 delete [] matrice[lignes];
	 delete [] matrice;
}
