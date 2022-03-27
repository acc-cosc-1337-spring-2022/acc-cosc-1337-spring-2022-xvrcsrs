#include<string>
#include "sequence.h"
#include<iostream>
using std::cout; using std::cin; using std::string;

double get_gc_content(const std::string& dna)
{
   double G_count = 0;
   double C_count = 0;
   for (int i = 0; i < dna.length(); i++)
   {
       if (dna[i] == 'G')
           G_count++;
       if (dna[i] == 'C')
           C_count++;
   }
   return (G_count + C_count) / dna.length();
}


std::string get_dna_complement(std::string dna)
{
   std::string rev_dna = reverse_string(dna);
   for (int i = 0; i < rev_dna.length(); i++)
   {
       switch (rev_dna[i])
       {
           case 'A':
               rev_dna[i] = 'T';
               break;
           case 'T':
               rev_dna[i] = 'A';
               break;
           case 'C':
               rev_dna[i] = 'G';
               break;
           case 'G':
               rev_dna[i] = 'C';
               break;
       }
   }
   return rev_dna;
}


std::string reverse_string(std::string dna)
{
   std::string revDNA = "";
   for (int i = dna.length() - 1; i >= 0; i--)
       revDNA += dna[i];
   return revDNA;
}

void display_menu()
{
    cout << "1 - Get GC Content \n";
    cout << "2 - Get DNA Complement \n";
    cout << "3 - Exit \n";
}

void prompt_user()
{
    cout << "Enter DNA String";
}

void app_run()
{
	int choice;
    string dna;
	do
	{
		display_menu();
		cin >> choice;
        if (choice == 1)
        {
            prompt_user();
            cin >> dna;
            cout << get_gc_content(dna) << "\n";

        }
        else if (choice == 2)
        {
            prompt_user();
            cin >> dna;
            cout << get_dna_complement(dna) << "\n";
        }


	} while (!(choice == 3));

}