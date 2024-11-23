#include<stdio.h>
struct Address {
	char city[20];
	int zip_code;
};
struct Employee {
	char name[20];
	int id;
	float salary;
	struct Address data;
};
int main() {
	int n;
	printf("Enter the number of employess: ");
	scanf("%d",&n);
	struct Employee employees[n];
	for (int i=0; i<n; i++) {
		printf("\nEnter details for employee %d:\n",i+1);
		printf("Name: ");
		scanf(" %[^\n]",employees[i].name);
		printf("ID: ");
		scanf("%d",&employees[i].id);
		printf("Salary: ");
		scanf("%f",&employees[i].salary);
		printf("City: ");
		scanf(" %[^\n]",employees[i].data.city);
		printf("Zip Code: ");
		scanf("%d",&employees[i].data.zip_code);
	}
	FILE *file=fopen("Employess.txt","wb");
	if(file==NULL) {
		printf("Error");
		return 0;
	}
	fwrite(employees,sizeof(struct Employee),n,file);
	fclose(file);
	struct Employee read_employee[n];
	FILE *file2=fopen("Employess.txt","rb");
	if(file2==NULL) {
		printf("Error");
		return 0;
	}
	fread(read_employee,sizeof(struct Employee),n,file2);
	fclose(file2);
	printf("\nEmployee Details (Read from file):\n");
	for (int i=0; i<n; i++) {
		printf("------------------------------------");
		printf("\nEmployee %d:\n", i + 1);
		printf("  Name      : %s\n", read_employee[i].name);
		printf("  ID        : %d\n", read_employee[i].id);
		printf("  Salary    : %.2f\n", read_employee[i].salary);
		printf("  City      : %s\n", read_employee[i].data.city);
		printf("  Zip Code  : %d\n", read_employee[i].data.zip_code);
		printf("------------------------------------\n");
	}
}