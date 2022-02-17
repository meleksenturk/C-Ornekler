#include <stdio.h>
#include <string.h>

char charArray [] = "A computer is a machine that can be instructed to carry out sequences of arithmetic or logical operations automatically via computer programming.Modern computers have the ability to follow generalized sets of operations, called programs.These programs enable computers to perform an extremely wide range of tasks.A complete computer including the hardware, the operating system (main software), and peripheral equipment required and used for full operation can be referred to as a computer system.This term may as well be used for a group of computers that are connected and work together, in particular a computer network or computer cluster.Computers are used as control systems for a wide variety of industrial and consumer devices.This includes simple special purpose devices like microwave ovens and remote controls, factory devices such as industrial robots and computer-aided design, and also general purpose devices like personal computers and mobile devices such as smartphones.The Internet is run on computers and it connects hundreds of millions of other computers and their users.Early computers were only conceived as calculating devices.Since ancient times, simple manual devices like the abacus aided people in doing calculations.Early in the Industrial Revolution, some mechanical devices were builtto automate long tedious tasks, such as guiding patterns for looms.More sophisticated electrical machines did specialized analog calculations in the early 20th century.";

void stringcount(char array[] );

int main(void)
{
	int k = 1;
	int len = strlen( charArray );
	int maxVowel, maxConsonat = 0 ;
	char letter ;
	char character;
	char character2;
	int vowel[500] = {};
	int consonat[500] = {};
	int counter = 0;
	stringcount( charArray );
	
	printf("Bu karakter dizisinde %d adet karakter var.\n", len);
	
	for (size_t j = 0; j <len; j++) {
		if ((charArray[j] == 'a' || charArray[j] == 'e' || charArray[j] == 'i' || charArray[j] == 'o' || charArray[j] == 'u') ) {
            vowel[charArray[j]] ++;
        }
		else if (charArray[j] > 96 && charArray[j] < 123 && !(charArray[j] == 'a' || charArray[j] == 'e' || charArray[j] == 'i' || charArray[j] == 'o' || charArray[j] == 'u')) {
			consonat[charArray[j]] ++;
		}
	}
	
	maxVowel = vowel[charArray[k]];
	while(k < len) {
		if (maxVowel <= vowel[charArray[k]]){ 
			maxVowel = vowel[charArray[k]];
			character = charArray[k];
		}
		k++;
	}
	printf("Dizide en cok %c sesli harfi vardir.\n", character);
	
	
	maxConsonat = consonat[charArray[k]];
	k = 1;
	while(k < len) {
		if (maxConsonat < consonat[charArray[k]]){ 
			maxConsonat = consonat[charArray[k]];
			character2 = charArray[k];
		}
        k++;
	}
    printf("Dizide en cok %c sessiz harfi vardir.\n", character2);

	printf("Dizide aramak istediginiz bir harf giriniz:");
	scanf("%c", &letter);
	for( size_t i = 0; i < len; i ++ ){
		if( letter == charArray [i] )
			counter++;
	}
	printf("Girdiginiz harften %d tane var.\n", counter);
	return 0;
}

void stringcount(char array[] ){

	for (size_t i = 0; i< strlen( array ) && array[i] != '\0' && array[i] != ' ' && array[i] != '.' && array[i] != ','; i++) {
		if (array[i] >= 'A' && array[i] <= 'Z')
			array[i] = array[i] + 32;
	}
}
