#include<stdio.h>
#include<stdlib.h>
lol * add_at_first( lol * tete){
	int x = 80;
	lol * t; // pointer li ymchi
	if(tete == NULL){ // hna dirct dert case l tete wa 3mrtha fih
		tete = (lol*)malloc(sizeof(lol));
		tete->age = x;
		tete->next = NULL;
		
	}else{ // hna ka zawj
		t = (lol*)malloc(sizeof(lol));// gbdet t wa 3mrtha
		t->age = x;
		t->next = tete ; // hna tete htitha fl next ta3 t safi wlat hiya tete
		tete = t;//hna rej3na tete kima kant
		
		
	}
	
	return tete;
	
	
}
typedef struct etud{
	float note;
	struct etud *next ;

	
}kids_school_data;
kids_school_data * add_the_node(kids_school_data * head,float m){
 kids_school_data * a, * ptr; 
 a = (kids_school_data*)malloc(sizeof(kids_school_data));
 a->note=m;
 a->next= NULL;
 if(head == NULL){
 head = a;
}else{
ptr = head;
while(ptr->next != NULL)
  ptr = ptr->next; 
ptr->next = a;
}
return head;
}
void note_and_liset(kids_school_data * head){
	kids_school_data  * V;
	float W = 0;
	int i = 0;
	V = head;
	while(V != NULL){
	printf("the mark of the student number %d =  %f/20\n",i+1,V->note);	
	W = W + V->note;
	i = i + 1;
	V = V->next;
	}
	W = W / i;
	printf("students mark = %f/20 \n",W);
    
}

int main(){
int n; float x;

kids_school_data * head = NULL;
   printf("Give me the number of students please =  ");
   scanf("%d",&n);
   for(int i=0;i<n;i++){
   	do{
	printf("give me the mark of the student (mark / 20) number %d please =  ",i+1);
   	scanf("%f",&x);
  }while(x>20 || x<0 );

   
   head = add_the_node(head,x);
  }
	note_and_liset(head);
	return 0; 
}