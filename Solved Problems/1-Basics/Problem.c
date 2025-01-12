#include <stdio.h>
#include <string.h>

void removeNewline(char *str) {
    str[strcspn(str, "\n")] = '\0';
}
void Presentation();
void Void();

int main() {
    //Presentation();
    //Void();
}

void Presentation(){
    char name[50];
    int age;
    char city[50];
    char hobbies[100];
    char favoriteSubject[50];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    removeNewline(name);
    printf("Enter your age: ");
    scanf("%d", &age);
    while(getchar() != '\n');
    printf("Enter your city: ");
    fgets(city, sizeof(city), stdin);
    removeNewline(city);
    printf("Enter your hobbies (comma-separated): ");
    fgets(hobbies, sizeof(hobbies), stdin);
    removeNewline(hobbies);
    printf("Enter your favorite subject: ");
    fgets(favoriteSubject, sizeof(favoriteSubject), stdin);
    removeNewline(favoriteSubject);
   
    printf("\n--- Self Presentation ---\n");
    printf("Hello everyone!\n\n");
    printf("My name is %s.\n", name);
    printf("I am %d years old and I come from %s.\n", age, city);
    printf("\nA little bit about myself:\n");
    printf("I enjoy spending my time doing the following hobbies: %s.\n", hobbies);
    printf("One of my favorite subjects is %s.\n", favoriteSubject);
    printf("\nI am passionate about learning and always eager to discover new things.\n");
    printf("Thank you for getting to know me!\n");
}

void Void(){
    char name[50];
    int age;
    char city[50];
    char animal[50];
    char dream[100];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    removeNewline(name);
    printf("Enter your age: ");
    scanf("%d", &age);
    while(getchar() != '\n');
    printf("Enter your city: ");
    fgets(city, sizeof(city), stdin);
    removeNewline(city);
    printf("Enter your favorite animal: ");
    fgets(animal, sizeof(animal), stdin);
    removeNewline(animal);
    printf("Enter your dream or ambition: ");
    fgets(dream, sizeof(dream), stdin);
    removeNewline(dream);
  
    printf("\n--- Your Story ---\n");
    printf("Once upon a time in the beautiful city of %s, there lived a person named %s.\n", city, name);
    printf("%s was %d years old and had always loved %s.\n", name, age, animal);
    printf("One day, while walking through %s, %s met a magical %s who could speak!\n", city, name, animal);
    printf("The %s told %s that if he worked hard and belive in himselves, he's dream of %s would come true.\n", animal, name, dream);
    printf("Inspired by this encounter, %s set out on an amazing journey, ready to make their dream a reality.\n", name);
    printf("And so, the adventure continues...\n\n");
    printf("Remember, %s, dreams can come true if you believe and never give up!\n", name);
}