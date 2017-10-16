#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;
int main()
{
	int binnum;
	string binary;
	int shift;
	string hexa;
	string morse;
	int help;
	int guide = 1;
	while (guide != 0)
	{
		cout << "Here is your encryption helper, which encryption do you need help with?" << endl;
		cout << "[1] binary." << endl;
		cout << "[2] Caesarian shift." << endl;
		cout << "[3] morse code." << endl;
		cin >> help;
		if (help == 1)
		{
			cout << "Here is your binary helper, Please enter the number of binary sets you want translated: [8 numbers in a set]" << endl;
			cin >> binnum;
			for (int i = 0; i < binnum; i++)
			{
				cout << "Enter your binary set:" << endl;
				cin >> binary;
				if (binary == "01000001")
				{
					cout << "A" << endl;
				}
				if (binary == "01000010")
				{
					cout << "B" << endl;
				}
				if (binary == "01000011")
				{
					cout << "C" << endl;
				}
				if (binary == "01000100")
				{
					cout << "D" << endl;
				}
				if (binary == "01000101")
				{
					cout << "E" << endl;
				}
				if (binary == "01000110")
				{
					cout << "F" << endl;
				}
				if (binary == "01000111")
				{
					cout << "G" << endl;
				}
				if (binary == "01001000")
				{
					cout << "H" << endl;
				}
				if (binary == "01001001")
				{
					cout << "I" << endl;
				}
				if (binary == "01001010")
				{
					cout << "J" << endl;
				}
				if (binary == "01001011")
				{
					cout << "K" << endl;
				}
				if (binary == "01001100")
				{
					cout << "L" << endl;
				}
				if (binary == "01001101")
				{
					cout << "M" << endl;
				}
				if (binary == "01001110")
				{
					cout << "N" << endl;
				}
				if (binary == "01001111")
				{
					cout << "O" << endl;
				}
				if (binary == "01010000")
				{
					cout << "P" << endl;
				}
				if (binary == "01010001")
				{
					cout << "Q" << endl;
				}
				if (binary == "01010010")
				{
					cout << "R" << endl;
				}
				if (binary == "01010011")
				{
					cout << "S" << endl;
				}
				if (binary == "01010100")
				{
					cout << "T" << endl;
				}
				if (binary == "01010101")
				{
					cout << "U" << endl;
				}
				if (binary == "01010110")
				{
					cout << "V" << endl;
				}
				if (binary == "01010111")
				{
					cout << "W" << endl;
				}
				if (binary == "01011000")
				{
					cout << "X" << endl;
				}
				if (binary == "01011001")
				{
					cout << "Y" << endl;
				}
				if (binary == "01011010")
				{
					cout << "Z" << endl;
				}
				if (binary == "00110001")
				{
					cout << "1" << endl;
				}
				if (binary == "00110010")
				{
					cout << "2" << endl;
				}
				if (binary == "00110011")
				{
					cout << "3" << endl;
				}
				if (binary == "00110100")
				{
					cout << "4" << endl;
				}
				if (binary == "00110101")
				{
					cout << "5" << endl;
				}
				if (binary == "00110110")
				{
					cout << "6" << endl;
				}
				if (binary == "00110111")
				{
					cout << "7" << endl;
				}
				if (binary == "00111000")
				{
					cout << "8" << endl;
				}
				if (binary == "00111001")
				{
					cout << "9" << endl;
				}
				if (binary == "00110000")
				{
					cout << "0" << endl;
				}
			}
		}
		if (help == 2)
		{
			cout << "Here is your caesarian shift helper, how far would you like to shift your alphabet? [1-26]" << endl;
			cin >> shift;
			if (shift == 1)
			{
				cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z" << endl;
				cout << "^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^" << endl;
				cout << "| | | | | | | | | | | | | | | | | | | | | | | | | |" << endl;
				cout << "B C D E F G H I J K L M N O P Q R S T U V W X Y Z A" << endl;
			}
			if (shift == 2)
			{
				cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z" << endl;
				cout << "^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^" << endl;
				cout << "| | | | | | | | | | | | | | | | | | | | | | | | | |" << endl;
				cout << "C D E F G H I J K L M N O P Q R S T U V W Z Y Z A B" << endl;
			}
			if (shift == 3)
			{
				cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z" << endl;
				cout << "^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^" << endl;
				cout << "| | | | | | | | | | | | | | | | | | | | | | | | | |" << endl;
				cout << "D E F G H I J K L M N O P Q R S T U V W X Y Z A B C" << endl;
			}
			if (shift == 4)
			{
				cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z" << endl;
				cout << "^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^" << endl;
				cout << "| | | | | | | | | | | | | | | | | | | | | | | | | |" << endl;
				cout << "E F G H I J K L M N O P Q R S T U V W X Y Z A B C D" << endl;
			}
			if (shift == 5)
			{
				cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z" << endl;
				cout << "^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^" << endl;
				cout << "| | | | | | | | | | | | | | | | | | | | | | | | | |" << endl;
				cout << "F G H I J K L M N O P Q R S T U V W X Y Z A B C D E" << endl;
			}
			if (shift == 6)
			{
				cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z" << endl;
				cout << "^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^" << endl;
				cout << "| | | | | | | | | | | | | | | | | | | | | | | | | |" << endl;
				cout << "G H I J K L M N O P Q R S T U V W X Y Z A B C D E F" << endl;
			}
			if (shift == 7)
			{
				cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z" << endl;
				cout << "^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^" << endl;
				cout << "| | | | | | | | | | | | | | | | | | | | | | | | | |" << endl;
				cout << "H I J K L M N O P Q R S T U V W X Y Z A B C D E F G" << endl;
			}
			if (shift == 8)
			{
				cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z" << endl;
				cout << "^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^" << endl;
				cout << "| | | | | | | | | | | | | | | | | | | | | | | | | |" << endl;
				cout << "I J K L M N O P Q R S T U V W X Y Z A B C D E F G H" << endl;
			}
			if (shift == 9)
			{
				cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z" << endl;
				cout << "^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^" << endl;
				cout << "| | | | | | | | | | | | | | | | | | | | | | | | | |" << endl;
				cout << "J K L M N O P Q R S T U V W X Y Z A B C D E F G H I" << endl;
			}
			if (shift == 10)
			{
				cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z" << endl;
				cout << "^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^" << endl;
				cout << "| | | | | | | | | | | | | | | | | | | | | | | | | |" << endl;
				cout << "K L M N O P Q R S T U V W X Y Z A B C D E F G H I J" << endl;
			}
			if (shift == 11)
			{
				cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z" << endl;
				cout << "^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^" << endl;
				cout << "| | | | | | | | | | | | | | | | | | | | | | | | | |" << endl;
				cout << "L M N O P Q R S T U V W X Y Z A B C D E F G H I J K" << endl;
			}
			if (shift == 12)
			{
				cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z" << endl;
				cout << "^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^" << endl;
				cout << "| | | | | | | | | | | | | | | | | | | | | | | | | |" << endl;
				cout << "M N O P Q R S T U V W X Y Z A B C D E F G H I J K L" << endl;
			}
			if (shift == 13)
			{
				cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z" << endl;
				cout << "^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^" << endl;
				cout << "| | | | | | | | | | | | | | | | | | | | | | | | | |" << endl;
				cout << "N O P Q R S T U V W X Y Z A B C D E F G H I J K L M" << endl;
			}
			if (shift == 14)
			{
				cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z" << endl;
				cout << "^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^" << endl;
				cout << "| | | | | | | | | | | | | | | | | | | | | | | | | |" << endl;
				cout << "O P Q R S T U V W X Y Z A B C D E F G H I J K L M N" << endl;
			}
			if (shift == 15)
			{
				cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z" << endl;
				cout << "^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^" << endl;
				cout << "| | | | | | | | | | | | | | | | | | | | | | | | | |" << endl;
				cout << "P Q R S T U V W X Y Z A B C D E F G H I J K L M N O" << endl;
			}
			if (shift == 16)
			{
				cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z" << endl;
				cout << "^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^" << endl;
				cout << "| | | | | | | | | | | | | | | | | | | | | | | | | |" << endl;
				cout << "Q R S T U V W X Y Z A B C D E F G H I J K L M N O P" << endl;
			}
			if (shift == 17)
			{
				cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z" << endl;
				cout << "^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^" << endl;
				cout << "| | | | | | | | | | | | | | | | | | | | | | | | | |" << endl;
				cout << "R S T U V W X Y Z A B C D E F G H I J K L M N O P Q" << endl;
			}
			if (shift == 18)
			{
				cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z" << endl;
				cout << "^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^" << endl;
				cout << "| | | | | | | | | | | | | | | | | | | | | | | | | |" << endl;
				cout << "S T U V W X Y Z A B C D E F G H I J K L M N O P Q R" << endl;
			}
			if (shift == 19)
			{
				cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z" << endl;
				cout << "^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^" << endl;
				cout << "| | | | | | | | | | | | | | | | | | | | | | | | | |" << endl;
				cout << "T U V W X Y Z A B C D E F G H I J K L M N O P Q R S" << endl;
			}
			if (shift == 20)
			{
				cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z" << endl;
				cout << "^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^" << endl;
				cout << "| | | | | | | | | | | | | | | | | | | | | | | | | |" << endl;
				cout << "U V W X Y Z A B C D E F G H I J K L M N O P Q R S T" << endl;
			}
			if (shift == 21)
			{
				cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z" << endl;
				cout << "^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^" << endl;
				cout << "| | | | | | | | | | | | | | | | | | | | | | | | | |" << endl;
				cout << "V W X Y Z A B C D E F G H I J K L M N O P Q R S T U" << endl;
			}
			if (shift == 22)
			{
				cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z" << endl;
				cout << "^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^" << endl;
				cout << "| | | | | | | | | | | | | | | | | | | | | | | | | |" << endl;
				cout << "W X Y Z A B C D E F G H I J K L M N O P Q R S T U V" << endl;
			}
			if (shift == 23)
			{
				cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z" << endl;
				cout << "^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^" << endl;
				cout << "| | | | | | | | | | | | | | | | | | | | | | | | | |" << endl;
				cout << "X Y Z A B C D E F G H I J K L M N O P Q R S T U V W" << endl;
			}
			if (shift == 24)
			{
				cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z" << endl;
				cout << "^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^" << endl;
				cout << "| | | | | | | | | | | | | | | | | | | | | | | | | |" << endl;
				cout << "Y Z A B C D E F G H I J K L M N O P Q R S T U V W X" << endl;
			}
			if (shift == 25)
			{
				cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z" << endl;
				cout << "^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^" << endl;
				cout << "| | | | | | | | | | | | | | | | | | | | | | | | | |" << endl;
				cout << "Z A B C D E F G H I J K L M N O P Q R S T U V W X Y" << endl;
			}
			if (shift == 26)
			{
				cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z" << endl;
				cout << "^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^" << endl;
				cout << "| | | | | | | | | | | | | | | | | | | | | | | | | |" << endl;
				cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z" << endl;
			}
		}
		if (help == 3)
		{
			cout << "Here is your morse code Alphabet:" << endl;
			cout << "A: .-        M: --" << endl;
			cout << "B: -...      N: -." << endl;
			cout << "C: -.-.      O: ---" << endl;
			cout << "D: -..       P: .--." << endl;
			cout << "E: .         Q: --.-" << endl;
			cout << "F: ..-.      R: .-." << endl;
			cout << "G: --.       S: ..." << endl;
			cout << "H: ....      T: -" << endl;
			cout << "I: ..        U: ..-" << endl;
			cout << "J: .---      V: ...-" << endl;
			cout << "K: -.-       W: .--" << endl;
			cout << "L: .-..      X: -..-" << endl;
			cout << "1: .----     Y: -.--" << endl;
			cout << "2: ..---     Z: --.." << endl;
			cout << "3: ...--     4: ....-" << endl;
			cout << "5: .....     6: -...." << endl;
			cout << "7: --...     8: ---.." << endl;
			cout << "9: ----.     0: -----" << endl;
		}
	}
}