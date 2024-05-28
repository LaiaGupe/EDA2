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

    printf("You are now starting the fight. You'll fight against %s\n", enemy->name);
    printf("She/he has %d life points, %d attack points, and %d defense points\n", enemy->hp, enemy->attck, enemy->def);
    printf("Your character has %d life points, %d attack points, and %d defense points.\n", current_character.hp, current_character.attck,current_character.def);
    printf("This fight is going to have 15 number of turns, each round it's going to inform you if it's your turn or your enemy's.\n");
    
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
        //to compare strings
        char str1[] = "character";
        char str2[] = "enemy";
       
       //print who's turn it is
        const char *firstElement = dequeue(&q);
        if (firstElement != NULL) {
            printf("Now it's %s turn.\n", firstElement);
        } else {
            printf("The queue is empty.\n");
        };
        
        //it's the enemys turn---------------------------------------------------------
        if (strcmp(str2, firstElement) == 0){
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
            printf("The enemy has attaked and now you have %d defense points, and %d health points.\n", current_character.def, current_character.hp);
        
        };


        //Now it's the players turn -----------------------------------------------------------
        if (strcmp(str1, firstElement) == 0){
            printf("Now it's your turn!\n");
            printf("First you are going to have to chose if you want to attack, to defend yourself, or to add life point to your character. Then, you can chose which gadget you want to use to do it. \n");
            printf("Enter 'a' to attack, 'd' to defend yourselve, or 'l' to add life points.\n");
            
            //It needs to chose if it wants to attack, defend or add life points
            printf("Enter your choice:\n ");
            char type_battle_choice = 'f';
            scanf(" %c", &type_battle_choice); 
            
            //Print which option they've chosen
            switch (type_battle_choice)
            {
            case 'a':
                printf("You've chosen to attack.\n");
                break;
            case 'd':
                printf("You've chosen to defense.\n");
                break;
            case 'l':
                printf("You've chosen to add life points.\n");
                break;
            default:
                break;
            }

            printf("Now you can choose the object you want to use (remember which ones were for attack, which ones for defense, and which ones were used to add points.) \n");
            printf("Enter 1 to use the %s \n", current_character.skills[1]->name); //Com puc imprimir el nom de les differents skills q el jugador ha previament triat al principi de la partida?
            printf("Enter 2 to use the %s \n", current_character.skills[2]->name);
            printf("Enter 3 to use the %s \n", current_character.skills[3]->name);
            printf("Enter 4 to use the %s \n", current_character.skills[4]->name);
            //The player imputs which skills wants to use
            printf("Enter your choice:\n ");
            int skill_choice;
            scanf(" %d", &skill_choice);
            
            //depends on what the player choses what to do
            switch (type_battle_choice)
            {
            case 'a':
                enemy->hp -= current_character.skills[skill_choice]->atk_modifier;
                printf("Good job! You've chosen to attack your enemy. Now %s has %d life point. Keep attaking and you'll win the fight!\n", enemy->name, enemy->hp);
                break;
            case 'l':
                current_character.def += current_character.skills[skill_choice]->def_modifier;
                printf("You've decided to augment your defense points.\n Now you have %d defense points.", current_character.def);
                break;
            case 'd':
                current_character.hp += 22;
                printf("You've chosen to use a gadget that adds you life points.\n Now you have %d life points.", current_character.hp);
                break;
            default:
                break;
            }
        }

        combat_rounds += 1;
    };

    if(enemy->hp > 0 || combat_rounds>16){
        game_over_funct(); //i still have to define this function
    }
}
