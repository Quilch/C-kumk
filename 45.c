#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct BOOK
{
	char *author;
	char *name;
	int pgs;
};

typedef struct BOOK Book;

Book make_me_book(FILE *f)
{
	Book res;
	char *author = (char *)malloc(100*sizeof(char));
	char *name = (char *)malloc(1000*sizeof(char));
	char *pgs = (char *)malloc(100*sizeof(char));
	if (f != NULL)
	{
		res.author = fgets(author, 100, f);
		res.author[strlen(res.author)-1] = 0;
		res.name = fgets(name, 1000, f);
		res.name[strlen(res.name)-1] = 0;
		res.pgs = atoi(fgets(pgs, 100, f));
	}
	free(pgs);
	return res;
}

int compare_by_pgs(const void * e1, const void * e2){
	Book *b1 = (Book *)e1;
	Book *b2 = (Book *)e2;
	if (b1->pgs>b2->pgs){
		return 1;
	}
	if(b1->pgs<b2->pgs){
		return -1;
	}
	return 0;
}

void sort_by_pgs(Book *books, int len){
	qsort(books, len, sizeof(Book), compare_by_pgs);
}

int book_med(Book *books, int n){
	if (n % 2 == 1){
		return books[n/2].pgs;
	}
	return (books[n/2-1].pgs + books[n/2].pgs)/2;
}

int compare_by_authors(char * test_author, char * author){
	int i;
	if (strlen(author) == strlen(test_author)){
		for (i = 0; author[i] !=0 || test_author[i] !=0; i++){
			if (author[i] !=test_author[i]){
				return 0;
			}
		}
		return 1;
	}
	else{
		return 0;
	}
}
int how_much_books(Book *books, char *author,int len){
	int i;
	int count = 0;
	for (i = 0; i < len; i++){
		if (compare_by_authors(books[i].author, author)){
			count++;
		}
	}
	return count;
}

char *finder(Book *book, int amount){
	char *top;
	int i, tmp;
	int max = 0;
	for (i=0; i<amount; i++){
		tmp = how_much_books(book, book[i].author, amount);
		if (tmp > max){
			max = tmp;
			top = book[i].author;
		}
	}
	return top;
}

int main(){
	int n,i,median;
	char *popular_author;
	Book *book;
	FILE *f = fopen("lib.txt", "r");
	fscanf(f, "%d\n", &n);
	book = (Book *)calloc(n, sizeof(Book));
	for (i = 0; i<n; i++){
		book[i] = make_me_book(f);
	}
	fclose(f);
	sort_by_pgs(book, n);
	median = book_med(book, n);
	printf("median %d\n", median);
	popular_author = finder(book, n);
	printf("%s", popular_author);
	return 0;
}