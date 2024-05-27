#include "game_over_funct.h"
#include "functions_queue.h"

//---------------------FUNCTIONS FOR THE QUEUE--------------------------

// Function to create a new node
Node* createNode(const char *data) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}


// Function to initialize the queue
void initializeQueue(Queue *q) {
    q->front = q->rear = NULL;
}


// Function to check if the queue is empty
int isEmpty(Queue *q) {
    return q->front == NULL;
}


// Function to enqueue an element
void enqueue(Queue *q, const char *data) {
    Node *newNode = createNode(data);
    if (q->rear == NULL) {
        q->front = q->rear = newNode;
        return;
    }
    q->rear->next = newNode;
    q->rear = newNode;
}


// Function to dequeue an element
const char* dequeue(Queue *q) {
    if (isEmpty(q)) {
        return NULL;
    }
    Node *temp = q->front;
    const char *data = temp->data;
    q->front = q->front->next;


    if (q->front == NULL) {
        q->rear = NULL;
    }


    free(temp);
    return data;
}


// Function to print the queue
void printQueue(Queue *q) {
    Node *current = q->front;
    while (current != NULL) {
        printf("%s\n", current->data);
        current = current->next;
    }
}


//--------------------------COMBAT FUNCTION------------------------------------------

/* int value = 12;
    int *pointer = &value;
    print(*pointer) ->>> 12
    print(pointer) ->>> wdeg27
*/

void combat(Enemy *enemy, Character current_character)
{
    printf("You are now starting the fight. You'll fight against %s", enemy->name);
    printf("She/he has %d life points, %d attack points, and %d defense points", enemy->hp, enemy->attck, enemy->def);
    printf("Your character has %d life points, %d attack points, and %d defense points.", current_character.hp, current_character.attck,current_character.def);
    printf("This fight is going to have 15 number of turns, each round it's going to inform you if it's your turn or your enemy's.");
    
    //choose whos turn it is 
    // Seed the random number generator with the current time
    srand(time(0));

    // Initialize the queue
    Queue q;
    initializeQueue(&q);

    // Enqueue 15 random words "character" or "enemy"
    for (int i = 0; i < 15; i++) {
        if (rand() % 2 == 0) {
            enqueue(&q, "character");
        } else {
            enqueue(&q, "enemy");
        }
    }

    // Print the queue
    printf("Now you'll see who's turn it is each round (from 1 to 15):\n");
    printQueue(&q);

    //to choose how much does the enemy attack
    srand(time(NULL));

    int combat_rounds = 0;

    while(current_character.hp > 0 && enemy->hp > 0 && combat_rounds<16){
       //print who's turn it is
        const char *firstElement = dequeue(&q);
        if (firstElement != NULL) {
            printf("Now it's %s turn.\n", firstElement);
        } else {
            printf("The queue is empty.\n");
        };
        
        //it's the enemys turn---------------------------------------------------------
        if (firstElement == 'enemy'){
            //let's chose randomly how much is the enemy going to attack (between 18 and 24)
            int enemy_power_attack = rand() % (24 - 18 + 1) + 18;

            //if characters defense points are 0, it only subtracts from hp
            if(current_character.def ==0){
                current_character.hp -= enemy_power_attack;   //TOT AQUEST APARTAT NO SE SI HE D'UTILITZAR UNA FLETZA PER ACCEDIR AL VALOR DE LES VARIABLES HO DE D'UTILITZAR UN PUNT PER CANVIAR EL VALOR
            } else if (current_character.def > enemy_power_attack){
                current_character.def -= enemy_power_attack;
            } else{
                current_character.hp=current_character.hp - (enemy->attck - current_character.def);
            };
            printf("The enemy has attaked and now you have %d defense points, and %d health points", current_character.def, current_character.hp);
        
        };


        //Now it's the players turn -----------------------------------------------------------
        if (firstElement == 'character'){
            printf("Now it's your turn!");
            printf("First you are going to have to chose if you want to attack, to defend yourself, or to add life point to your character. Then, you can chose which gadget you want to use to do it.");
            printf("Enter 'a' to attack, 'd' to defend yourselve, or 'l' to add life points.");
            //It needs to chose if it wants to attack, defend or add life points
            printf("Enter your choice: ");
            char type_battle_choice[SIZE_NAME];
            fgets(type_battle_choice, sizeof(type_battle_choice), stdin);            
            printf("Now you can choose the object you want to do it with.");
            printf("Enter 1 to use the %s", current_character.skills[1]->name); //Com puc imprimir el nom de les differents skills q el jugador ha previament triat al principi de la partida?
            printf("Enter 2 to use the %s", current_character.skills[2]->name);
            printf("Enter 3 to use the %s", current_character.skills[3]->name);
            printf("Enter 4 to use the %s", current_character.skills[4]->name);
            //Now the player imputs which skills wants to use
            printf("Enter your choice: ");
            char skill_choice[SIZE_NAME];
            fgets(skill_choice, sizeof(skill_choice), stdin);
            //if the player choses to attack
            if(type_battle_choice == 'a')
            {

            };

        }

        combat_rounds += 1;
    };

    if(enemy->hp > 0 || combat_rounds>16){
        game_over_funct(); //i still have to define this function
    }
}
