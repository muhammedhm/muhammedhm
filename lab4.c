#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Q-1

// // Define a structure to store contact information
// struct Contact {
//     char name[50];
//     char email[50];
//     char phoneNumber[15];
// };

// // Function to add a new contact to the address book
// void addContact(struct Contact **addressBook, int *numContacts) {
//     // Increment the number of contacts
//     (*numContacts)++;

//     // Dynamically allocate memory for the new contact
//     *addressBook = realloc(*addressBook, (*numContacts) * sizeof(struct Contact));

//     // Input new contact details
//     printf("Enter name: ");
//     scanf("%s", (*addressBook)[*numContacts - 1].name);

//     printf("Enter email: ");
//     scanf("%s", (*addressBook)[*numContacts - 1].email);

//     printf("Enter phone number: ");
//     scanf("%s", (*addressBook)[*numContacts - 1].phoneNumber);

//     printf("Contact added successfully!\n");
// }

// // Function to delete a contact from the address book
// void deleteContact(struct Contact **addressBook, int *numContacts, char *contactName) {
//     int found = 0;

//     for (int i = 0; i < *numContacts; i++) {
//         if (strcmp((*addressBook)[i].name, contactName) == 0) {
//             // Contact found, remove it by shifting elements
//             for (int j = i; j < *numContacts - 1; j++) {
//                 (*addressBook)[j] = (*addressBook)[j + 1];
//             }

//             // Decrement the number of contacts
//             (*numContacts)--;

//             // Resize the memory block
//             *addressBook = realloc(*addressBook, (*numContacts) * sizeof(struct Contact));

//             printf("Contact deleted successfully!\n");
//             found = 1;
//             break;
//         }
//     }

//     if (!found) {
//         printf("Contact not found!\n");
//     }
// }

// // Function to display all contacts in the address book
// void displayContacts(struct Contact *addressBook, int numContacts) {
//     printf("\nContacts in the address book:\n");
//     for (int i = 0; i < numContacts; i++) {
//         printf("Name: %s\n", addressBook[i].name);
//         printf("Email: %s\n", addressBook[i].email);
//         printf("Phone Number: %s\n", addressBook[i].phoneNumber);
//         printf("----------------------------\n");
//     }
// }

// // Function to free the memory allocated for the address book
// void freeMemory(struct Contact **addressBook) {
//     free(*addressBook);
//     *addressBook = NULL;
// }

// int main() {
//     struct Contact *addressBook = NULL;
//     int numContacts = 0;
//     int choice;
//     char contactName[50];

//     do {
//         printf("\nAddress Book Menu:\n");
//         printf("1. Add Contact\n");
//         printf("2. Delete Contact\n");
//         printf("3. Display Contacts\n");
//         printf("4. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 addContact(&addressBook, &numContacts);
//                 break;
//             case 2:
//                 printf("Enter the name of the contact to delete: ");
//                 scanf("%s", contactName);
//                 deleteContact(&addressBook, &numContacts, contactName);
//                 break;
//             case 3:
//                 displayContacts(addressBook, numContacts);
//                 break;
//             case 4:
//                 freeMemory(&addressBook);
//                 printf("Memory freed. Exiting the program.\n");
//                 break;
//             default:
//                 printf("Invalid choice. Please enter a valid option.\n");
//         }

//     } while (choice != 4);

//     return 0;
// }

//Q-2

// // Node structure for a singly linked list/
// struct Node {
//     int data;
//     struct Node* next;
// };

// // Function to insert a new node at the end of a linked list
// struct Node* insertAtEnd(struct Node* head, int value) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->data = value;
//     newNode->next = NULL;

//     if (head == NULL) {
//         return newNode;
//     }

//     struct Node* temp = head;
//     while (temp->next != NULL) {
//         temp = temp->next;
//     }

//     temp->next = newNode;
//     return head;
// }

// // Function to merge two sorted linked lists into a single sorted linked list
// struct Node* mergeSortedLists(struct Node* list1, struct Node* list2) {
//     struct Node* mergedList = NULL;
//     struct Node* current = NULL;

//     while (list1 != NULL && list2 != NULL) {
//         if (list1->data < list2->data) {
//             mergedList = insertAtEnd(mergedList, list1->data);
//             list1 = list1->next;
//         } else {
//             mergedList = insertAtEnd(mergedList, list2->data);
//             list2 = list2->next;
//         }
//     }

//     // If one of the lists is not empty, add the remaining elements
//     while (list1 != NULL) {
//         mergedList = insertAtEnd(mergedList, list1->data);
//         list1 = list1->next;
//     }

//     while (list2 != NULL) {
//         mergedList = insertAtEnd(mergedList, list2->data);
//         list2 = list2->next;
//     }

//     return mergedList;
// }

// // Function to display a linked list
// void displayList(struct Node* head) {
//     while (head != NULL) {
//         printf("%d ", head->data);
//         head = head->next;
//     }
//     printf("\n");
// }

// // Function to free the memory allocated for a linked list
// void freeList(struct Node* head) {
//     struct Node* temp;

//     while (head != NULL) {
//         temp = head;
//         head = head->next;
//         free(temp);
//     }
// }

// int main() {
//     struct Node* list1 = NULL;
//     struct Node* list2 = NULL;

//     // Insert elements into the first sorted linked list
//     list1 = insertAtEnd(list1, 1);
//     list1 = insertAtEnd(list1, 3);
//     list1 = insertAtEnd(list1, 5);

//     // Insert elements into the second sorted linked list
//     list2 = insertAtEnd(list2, 2);
//     list2 = insertAtEnd(list2, 4);
//     list2 = insertAtEnd(list2, 6);

//     printf("First sorted linked list: ");
//     displayList(list1);

//     printf("Second sorted linked list: ");
//     displayList(list2);

//     // Merge the two sorted linked lists
//     struct Node* mergedList = mergeSortedLists(list1, list2);

//     printf("Merged sorted linked list: ");
//     displayList(mergedList);

//     // Free the memory allocated for the linked lists
//     freeList(list1);
//     freeList(list2);
//     freeList(mergedList);

//     return 0;
// }

//Q3
// Node structure for a singly linked list
// struct Node {
//     int data;
//     struct Node* next;
// };

// // Function to insert a new node at the end of a linked list
// struct Node* insertAtEnd(struct Node* head, int value) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->data = value;
//     newNode->next = NULL;

//     if (head == NULL) {
//         return newNode;
//     }

//     struct Node* temp = head;
//     while (temp->next != NULL) {
//         temp = temp->next;
//     }

//     temp->next = newNode;
//     return head;
// }

// // Function to convert a linked list into an array
// int* convertListToArray(struct Node* head, int* size) {
//     // Count the number of elements in the linked list
//     int count = 0;
//     struct Node* temp = head;
//     while (temp != NULL) {
//         count++;
//         temp = temp->next;
//     }

//     // Allocate memory for the array
//     int* array = (int*)malloc(count * sizeof(int));

//     // Copy elements from the linked list to the array
//     temp = head;
//     for (int i = 0; i < count; i++) {
//         array[i] = temp->data;
//         temp = temp->next;
//     }

//     // Set the size of the array
//     *size = count;

//     return array;
// }

// // Function to display an array
// void displayArray(int* array, int size) {
//     printf("Array: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", array[i]);
//     }
//     printf("\n");
// }

// // Function to free the memory allocated for a linked list
// void freeList(struct Node* head) {
//     struct Node* temp;

//     while (head != NULL) {
//         temp = head;
//         head = head->next;
//         free(temp);
//     }
// }

// int main() {
//     struct Node* linkedList = NULL;

//     // Insert elements into the linked list
//     linkedList = insertAtEnd(linkedList, 1);
//     linkedList = insertAtEnd(linkedList, 2);
//     linkedList = insertAtEnd(linkedList, 3);
//     linkedList = insertAtEnd(linkedList, 4);

//     // Convert the linked list to an array
//     int size;
//     int* array = convertListToArray(linkedList, &size);

//     // Display the array
//     displayArray(array, size);

//     // Free the memory allocated for the linked list and array
//     freeList(linkedList);
//     free(array);

//     return 0;
// }

//Q-4

// Node structure for a singly linked list
//struct Node {
//     int data;
//     struct Node* next;
// };

// // Function to insert a new node at the end of a linked list
// struct Node* insertAtEnd(struct Node* head, int value) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->data = value;
//     newNode->next = NULL;

//     if (head == NULL) {
//         return newNode;
//     }

//     struct Node* temp = head;
//     while (temp->next != NULL) {
//         temp = temp->next;
//     }

//     temp->next = newNode;
//     return head;
// }

// // Function to remove elements with odd indices from a linked list
// struct Node* removeOddIndices(struct Node* head) {
//     struct Node* current = head;
//     struct Node* temp;

//     // If the list is empty or has only one element, return it as it is
//     if (head == NULL || head->next == NULL) {
//         return head;
//     }

//     while (current != NULL && current->next != NULL) {
//         // Save the next node in a temporary variable
//         temp = current->next;

//         // Adjust the next pointer to skip the next node (remove it)
//         current->next = temp->next;

//         // Free the memory of the removed node
//         free(temp);

//         // Move to the next node (skip the removed node)
//         current = current->next;
//     }

//     return head;
// }

// // Function to display a linked list
// void displayList(struct Node* head) {
//     while (head != NULL) {
//         printf("%d ", head->data);
//         head = head->next;
//     }
//     printf("\n");
// }

// // Function to free the memory allocated for a linked list
// void freeList(struct Node* head) {
//     struct Node* temp;

//     while (head != NULL) {
//         temp = head;
//         head = head->next;
//         free(temp);
//     }
// }

// int main() {
//     struct Node* linkedList = NULL;

//     // Insert elements into the linked list
//     linkedList = insertAtEnd(linkedList, 1);
//     linkedList = insertAtEnd(linkedList, 2);
//     linkedList = insertAtEnd(linkedList, 3);
//     linkedList = insertAtEnd(linkedList, 4);
//     linkedList = insertAtEnd(linkedList, 5);

//     printf("Original linked list: ");
//     displayList(linkedList);

//     // Remove elements with odd indices
//     linkedList = removeOddIndices(linkedList);

//     printf("Linked list after removing elements with odd indices: ");
//     displayList(linkedList);

//     // Free the memory allocated for the linked list
//     freeList(linkedList);

//     return 0;
// }