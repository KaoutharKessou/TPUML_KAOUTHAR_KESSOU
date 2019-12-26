
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

//Exercice 1
void affiche_vecteur(int *vecteur,int dimension);
void affiche_matrice(int matrice[][2],int lignes ,int colonnes);
//Exercice 2
int *alloue_vecteur(int dimention,int val);
int *liberer_vecteur(int * vecteur);
//Exercie 3
int **alloue_matrice(int lignes,int colonnes,int val);
void liberer_matrice(int ** matrice,int lignes);
//Exercie 4
int **alloue_matrice_Zero(int lignes,int colonnes);
int **genere_matrice_identite(int dimension);

int main()
{
	/*int tab[5]={10,12,90,5,100};
	int mat[2][2]={{1,2},{3,4}};
	affiche_vecteur(tab,5);
    affiche_matrice(mat,2,2);*/
    
    //Exercice 2
       int t[2]={1,2};
    alloue_vecteur(2,2);
    affiche_vecteur(t,2);
    //liberer_vecteur(t);
    
    //Exercice 3
  	/*int mat[2][2]={{1,2},{3,4}};
  	alloue_matrice(2,2,4);
  	affiche_matrice(mat,2,2);
    //liberer_matrice(mat,2);*/
    
    //Exercie 4
    
	return 0;
}

//********************Exercice 1**********
//Fonctions
void affiche_vecteur(int *vecteur,int dimension)
{
	int i;
	for(i=0;i<dimension;i++)
	printf("[%d ]",vecteur[i]);
    printf("\n");
}
void affiche_matrice(int matrice[][2],int lignes ,int colonnes)
{
	int i;
	for(i=0;i<lignes;i++)
	{
		affiche_vecteur(matrice[i],colonnes);
		printf("\n");
	}
}

//**********************Exercice 2**************
int *alloue_vecteur(int dimention,int val)
{
	int i;
	int *vecteur =(int *)malloc(dimention * sizeof(int));
	//int *vecteur = (dimention*)malloc(sizeof(int));
	for(i=0;i<dimention;i++)
	{
		vecteur[i]=val;
	}
	return vecteur;
}
int *liberer_vecteur(int * vecteur)
{
	free(vecteur);
}

//*********************Exercice 3************
int **alloue_matrice(int lignes,int colonnes,int val)
{
	int i,j;
	int**matrice =(int **)malloc(lignes*sizeof(int*));
	matrice[i]= (int *)malloc(colonnes*sizeof(int));
	for(i=0;i<lignes;i++)
	 for(j=0;i<colonnes;j++)
		matrice[i][j]=val;
	
	return matrice;
}
void liberer_matrice(int ** matrice,int lignes)
{
	int i;
	for(i=0;i<lignes;i++)
	free((int *)matrice[i]);
}

//*********************Exercice 4************
int **alloue_matrice_Zero(int lignes,int colonnes)
{
	int i;
	int ** matrice=(int**)calloc(lignes,sizeof(int*));
	for(i=0;i<lignes;i++)
	{
		matrice[i]=(int *)calloc(colonnes,sizeof(int));
	}
	return matrice;
}
int **genere_matrice_identite(int dimension)
{
	int i;
	int** identite=calloc_matrice_zero(dimension,dimension);
		for(i=0;i<dimension;i++)
		{
			identite[i][i]=1;
		}
	affiche_matrice(identite,dimension,dimension);
	return identite;	
}
