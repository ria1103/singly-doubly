#include <stdio.h>
#include <stdlib.h>

void main()
{
	int i;
	struct node
	{
		struct node *prev;
		int data;
		struct node *next;
	};
	int ch,entry;
	struct node *head=NULL,*pos=NULL,*tail=NULL,*del=NULL,*temp=NULL,*ptr=NULL;
	
	int z;
	printf("\n1.Append \n2.Forward display  \n3.Backward display\n4.Deletion head \n5.Delete tail \n6.Exit\n");
	while(1)
	{
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			{
				printf("Enter Data: \n");
				scanf("%d",&entry);
				if (head==NULL)
				{
					head=(struct node *)malloc(sizeof(struct node));
					head->prev=NULL;
					head->data=entry;
					head->next=NULL;
					pos=head;
					tail=head;
				}
				else
				{
					tail->next=(struct node *)malloc(sizeof(struct node));
					tail->next->prev=tail;
					tail->next->data=entry;
					tail->next->next=NULL;
					tail=tail->next;
				}
				break;
			}
			case 2:
				{
					pos=head;
					printf("\nElements are:");
					while(pos !=NULL)
					{
						printf("\t%d",pos->data);
						pos=pos->next;
					}
					printf("\n");
					break;
				}
			case 3:
				{
					pos=tail;
					printf("\nElements are:");
					while(pos !=NULL)
					{
						printf("\t%d",pos->data);
						pos=pos->prev;
					}
					printf("\n");
					break;
				}
				
			case 4:
				{
					del=head;
					head=head->next;
					head->prev=NULL;
					free(del);
					pos=head;
					printf("Elements after deletion are:\n");
					while(pos !=NULL)
					{
						printf("\t%d",pos->data);
						pos=pos->next;
					}
					printf("\n");
					break;
					
				}
			case 5:
				{
					del=tail;
					tail=tail->prev;
					tail->next=NULL;
					free(del);
					pos=tail;
					printf("Elements after deletion are:\n");
					while(pos !=NULL)
					{
						printf("\t%d",pos->data);
						pos=pos->prev;
					}
					printf("\n");
					break;	
							
				}
		
			case 6:
				{
				
					printf("Thankyou!");
					exit(0);
				}
		}
	}
}			
				
		

