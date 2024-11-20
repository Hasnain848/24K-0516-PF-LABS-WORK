#include<stdio.h>
#include<string.h>
struct book
{
	char title[20];
	char Author[20];
	int publication_year;
	float price;
};
void display_books(struct book [],int size);
void search_title(struct book Library[],int size);
void book_by_author(struct book Library[],int size);
int main(){
	  struct book Library[6] = {
        {"C Programming", "Brian Kernighan", 1978, 29.99},
        {"The Mythical Man-Month", "Frederick Brooks", 1975, 34.99},
        {"Clean Code", "Robert C. Martin", 2008, 40.00},
        {"The Pragmatic Programmer", "Andrew Hunt", 1999, 50.00},
        {"Introduction to Algorithms", "Thomas H. Cormen", 1990, 80.00},
        {"Clean Architecture", "Robert C. Martin", 2017, 56.00},
    };
    display_books(Library,6);
    search_title(Library,6);
    book_by_author(Library,6);
}
void display_books(struct book Library[],int size){
	printf("Books in Library");
	for(int i=0;i<size;i++){
		printf("\nTitle:%s",Library[i].title);	
	}
}
void search_title(struct book Library[],int size){
	printf("\nEnter the Title of book: ");
	char search_title[40];
	gets(search_title);
	for(int i=0;i<size;i++){
		if(strcmp(Library[i].title,search_title)==0){
		printf("\nTitle:%s \nAuthor:%s \nYear:%d \nPrice:%.2f$",Library[i].title,Library[i].Author,Library[i].publication_year,Library[i].price);
        return ;
	  }}
   	printf("No Result found!");	
   	return;
	}
void book_by_author(struct book Library[],int size){
	char author[50];
	int found=0;
	printf("\nEnter the Author name: ");
	gets(author);
	for(int i=0;i<size;i++){
		if(strcmp(Library[i].Author,author)==0){
			printf("\nTitle:%s \nYear:%d \nPrice:%.2f$",Library[i].title,Library[i].publication_year,Library[i].price);
			found=1;
		}
	}
	 if (!found) {
        printf("\nNo books found by author \"%s\".\n", author);
    }
}
		
	


	
	