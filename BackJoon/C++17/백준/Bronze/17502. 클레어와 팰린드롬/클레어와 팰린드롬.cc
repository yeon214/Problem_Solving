#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;
int main(void) {
	int n;
	char sentence[101];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf(" %c", &sentence[i]);
	} 
	sentence[n] = '\0';
	for (int i = 0; i < strlen(sentence) / 2; i++) {
		if ((sentence[i] < 'a' || sentence[i] > 'z') && (sentence[strlen(sentence) - 1 - i] < 'a' || sentence[strlen(sentence) - 1 - i] > 'z')) {
			sentence[i] = 'a', sentence[strlen(sentence) - 1 - i] = 'a';
		}
		else if (sentence[i] < 'a' || sentence[i] > 'z') {
			sentence[i] = sentence[strlen(sentence) - 1 - i];
		}
		else if (sentence[strlen(sentence) - 1 - i] < 'a' || sentence[strlen(sentence) - 1 - i] > 'z') {
			sentence[strlen(sentence) - 1 - i] = sentence[i];
		}
	}
	for (int i = 0; i < strlen(sentence); i++) {
		if (sentence[i] < 'a' || sentence[i] > 'z') sentence[i] = 'a';
	}
	for (int i = 0; i < n; i++) {
		printf("%c", sentence[i]);
	}
	return 0;
}