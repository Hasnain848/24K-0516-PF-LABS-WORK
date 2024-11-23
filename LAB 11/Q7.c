#include<stdio.h>
struct Company {
	char name[50];
	int year_established;
	char departments[5][100];
};
int main() {
	struct Company company;
	printf("Enter company name: ");
	scanf(" %[^\n]",company.name);
	printf("Enter year established: ");
	scanf("%d",&company.year_established);
	printf("Enter the names of up to 5 departments:\n");
	for (int i=0; i<5; i++) {
		printf("Department %d: ", i + 1);
		scanf(" %[^\n]",company.departments[i]);
	}

	printf("------------------------------------");
	printf("\n  Company Details:  \n");
	printf("Name             : %s\n",company.name);
	printf("Year Established : %d\n",company.year_established);
	for (int i=0; i<5; i++) {
		printf("Departments %d    :%s\n",i+1,company.departments[i]);
	}

	return 0;

}