#include <iostream>
#include <string>

int main()
{
	std::cout << "\n\n- - - - Jeu de Dames - - - -\n\n";

	int ligne, colonne {};
	
	for (ligne = 0 ; ligne < 10 ; ligne++)
	{
			for (colonne = 0 ; colonne < 10 ; colonne++)
			{
				std::cout << "*" << "   ";
			}
			std::cout << std::endl;

		if (ligne % 2 == 0)
		{
			std::cout << "  ";
		}
	}

 	return 0;
}