
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



 /*studentList.liste = (Student*)malloc(sizeof(Student*));
 studentList.liste = (Student*)realloc(studentList.liste, (studentList.size + 1) * sizeof(Student*));*/
typedef struct Class{
	char course_code[7];
	char course_name[100];
	
}Class;

typedef struct Student{
	char name[100];
	int id;
	struct Class* course;
}Student;

struct StudentList{
	struct Student* studentList;
	int size;
};

void addStudent(struct StudentList list,Student studentToBeAdded){ 
	Student berk;
	strcpy(berk.name,"Musti Berk ");
	berk.id=2022110523;
	list.studentList[0]=berk;
	
	/*if(counterFirstStudent==1){
		person=(Student*) malloc(sizeof(Student)*1);
		if(person==NULL){
				printf("memory is not allocated");
		} else { 
			strcpy(person[0].name,"Musti Berk ");
	 	 	person[0].id=2022110523;
		 	printf("Study added succsecfully\n");
		 	listSize++;
		 	
		}
		 counterFirstStudent++;
		} else {
			person=realloc(person,sizeof(int)*listSize);
			
			 if(person==NULL){
				printf("memory is not allocated");
			  } 
		 	strcpy(person[listSize].name,"Sezer Ateþ");
		 	person[listSize].id=id;
		 	id++;
		 	printf("Study added succsecfully\n");
		 	listSize++;
	    }*/
}

int main() {
	StudentList studentListStruct;
	Student *person;
	
	
	studentListStruct.studentList = (Student*)malloc(sizeof(Student*)); 
	addStudent(studentListStruct);
	
	printf("Welcome ! What do you want?\n");
	printf("-------------------\n");
	printf("1.Add Student \n 2.Add class to student \n 3.Delete student \n 4.Print Student List \n 5. Sort student List \n 6.Exit\n");
	printf("-------------------\n");
	
	scanf("%d",&chooiceForMenu);
	while(chooiceForMenu !=6){
	switch(chooiceForMenu)
	{ 
	
	case 1:
		if(counterFirstStudent==1){
			person=(Student*) malloc(sizeof(Student)*1);
			if(person==NULL){
				printf("memory is not allocated");
			 } 
			
			else{ 
			strcpy(person[0].name,"Musti Berk ");
	 	 	person[0].id=2022110523;
		 	printf("Study added succsecfully\n");
		 	listSize++;
		 	
			 }
		 counterFirstStudent++;
		}
		
		 else{
			person=realloc(person,sizeof(int)*listSize);
			
			 if(person==NULL){
				printf("memory is not allocated");
			  } 
		 	strcpy(person[listSize].name,"Sezer Ateþ");
		 	person[listSize].id=id;
		 	id++;
		 	printf("Study added succsecfully\n");
		 	listSize++;
	     	
			
		}
	  break;
	  
	  case 2:
	
	  	
	  	strcpy(person[counterForList].course.course_code,"Ceng 241");
	  	printf("Course added succsecfully\n");
	  	counterForList++;
	  	break;
	  
	  case 4:
	  	for(i=0;i<listSize;i++){
	  		printf("--------------\n");
	  		printf("%s %d %s\n",person[i].name,person[i].id,person[i].course.course_code);
	  		printf("--------------\n");
		  } 
		  break;
	}


 	printf("Welcome ! What do you want?\n");
 	printf("-------------------\n");
 	printf("1.Add Student \n 2.Add class to student \n 3.Delete student \n 4.Print Student List \n 5. Sort student List 6.Exit\n");
 	printf("-------------------\n");
	 scanf("%d",&chooiceForMenu);
	  
	  
    }
    free(person);
    
    return 0;
}
