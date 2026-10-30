#include <stdio.h>

struct Contact{
    char name[50];
    char phone[20];
    char email[50];
};
void AddContact(struct Contact *contacts,struct Contact *contact, size_t *ContactCounter){
contacts[*ContactCounter] = *contact;
*ContactCounter+=1;
}

void ListContacts(struct Contact *contacts, size_t ContactCounter){
    for (size_t i = 0; i < ContactCounter; i++)
    {
    printf("%s %s %s\n",contacts[i].name,contacts[i].phone,contacts[i].email );
    }
    
}
int main()
{
    size_t ContactCounter = 0;
    struct Contact contacts[10] = {};

    struct Contact contact1 = {"Alex","01020010089","alex.mahone@gmail.com"};
    struct Contact contact2 = {"Jackson","01030040021","jackson.adams@gmail.com"};


    AddContact(contacts,&contact1,&ContactCounter);
    AddContact(contacts,&contact2,&ContactCounter);
    //printf("%s %s %s\n",contacts[0].name,contacts[0].phone,contacts[0].email );
    ListContacts(contacts,ContactCounter);
    return 0;
}
