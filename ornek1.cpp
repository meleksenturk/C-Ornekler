//Kullanýcý tarafýndan girilen bir karakter
//dizisindeki (karakter dizisinde en fazla 100 karakter
//olabilir) sesli ve sessiz harflerin sayýsýný bulacak bir
//uygulamayý C programlama dili ile geliþtiriniz.


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int main(void){
	char text[101];
	char consonant[] = {'b','c','d','f','g','h','j','k','l','m','n','p','r','s','t','y','z','q','w','x','B','C','D','F','G','H','J','K','L','M','N','P','R','S','T','Y','Z','Q','W','X'};
	char vowel[] = {'a','e','i','o','u','A','E','I','O','U'};
	int counterConsonant = 0, counterVowel = 0;
	
	printf("Enter a text:\n");
	gets(text);
	
	int lengthText = strlen(text);
	
	for(size_t i = 0; i < lengthText; i++){
		for(size_t j = 0; j < 10; j++)
		{
			if(text[i] == '\0' || text [i] == '.' || text[i] ==  ',' || text[i] == '!' || text[i] == '(' || text[i] ==  ')' || text[i]==';' || text[i] ==':' || text[i]=='[' || text[i] == ']' || text[i]=='{' ||text[i] == '}' || text[i]=='-' || text[i]=='?' ){
				continue;
			}
			if(text[i] == vowel[j]){
				counterVowel++;
			}
		}
		for(size_t k = 0; k < 42; k++){
			if(text[i] == '\0' || text [i] == '.' || text[i] ==  ',' || text[i] == '!' || text[i] == '(' || text[i] ==  ')' || text[i]==';' || text[i] ==':' || text[i]=='[' || text[i] == ']' || text[i]=='{' ||text[i] == '}' || text[i]=='-' || text[i]=='?'){
				continue;
			}
			if(text[i] == consonant[k]){
				counterConsonant++;
			}
		}
	}
	
	printf("The number of vowels in the entered text :%d\n" , counterVowel);
	
	printf("The number of consonants in the entered text :%d ", counterConsonant);
}





