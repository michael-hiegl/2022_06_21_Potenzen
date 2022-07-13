//**************************************************************************
//**************************************************************************
//**
//**	Projekt: 2022_06_21_Potenzen	
//**    ***************************************
//**
//**	Filename: Main.c
//**
//**    Name: micha  
//**	Date: 6/21/2022 7:21:31 PM
//**	
//**	Description:
//**    
//**
//**
//**
//**************************************************************************
//**************************************************************************

//Includes
//**************************************************************************
#include <stdio.h>
#include <math.h>

//Defines & Pragmas
//**************************************************************************
#pragma warning(disable:4996) //Disable warning scanf unsafe
#pragma warning(disable:6031) //Disable warning return getchar()


//Functions
//**************************************************************************
void Pow(int *Basis, int Exponent)
{
	int Wert = *Basis;
	for (int i = 1; i < Exponent; i++)
	{
		*Basis = (*Basis) * Wert;
	}
}


int main(void)
{
	//Variables
	int Zahl = 0;
	int Exponent = 0;



	//Code
	printf("Bitte Basis eingeben\n");
	scanf("%i", &Zahl);
	printf("Bitte Exponent eingeben\n");
	scanf("%i", &Exponent);

	printf("Die Basis ist %i, der Exponent ist %i\n", Zahl, Exponent);

	Pow(&Zahl, Exponent);

	printf("Der Wert ist %i\n", Zahl);



	getchar();
	fflush(stdin);
	getchar();
	return 0;
}