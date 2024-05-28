#include "functions_main.h"


int print_menu(){ //function to print the menu and get the player's response option
    int menu_opt; //variable that will be returned
    printf("1. New game");
    printf("2.Test battle");
    while(menu_opt != 0 || menu_opt != 1){ //while to check the player enters a valid option
    printf("Select a valid option ( 1 or 2 ): ");
    scanf("%d", menu_opt );
    }
    return menu_opt; // returns an int
}

void clearScreen() { //function that clears the screen
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int get_character(){ //function to print character menu and get player's option. returns an int
    printf("These are the characters from which you can choose from: ");
    printf("1. SAM: Sam is a resourceful, smart, loyal, loving, and sweet girl who can become highly jealous in a short period of time. She has great leadership skills and is highly respected by her friends. She is always focused on the task at hand whether it's studying for school or fighting crime. She has red long hair and green eyes.");
    printf("2. CLOVER: Clover is the most girly and flirtatious of the main group. She loves fashion, her appearance and falling in love with boys.  Even though Clover tends to be more focused on materialistic and superficial substances than on her missions, she does understand the importance of friendship and teamwork. She is blond and has blue eyes.");
    printf("3. ALEX: She is the most athletic and fitness-minded spy of the three. She loves to play sports, especially soccer, video games, and is always trying out some new fad diet. Another characteristic of Alex is that she's always about keeping her friends happy. She has short black hair and brown eyes.");
    int opt;
    
    while(opt != 1||opt != 2||opt != 3){ //check player enters a valid option
        printf("Select a valid option for your character(1 for SAM; 2 for CLOVER; 3 for ALEX)");
        scanf("%d", opt);
    }
    return opt;
}

void print_skills_menu(){ //prints the skills menu. doesn't return anything
    printf("Name :","%s","Description: ", "%s", "Attack points: ", " %d", laser_lip.name, laser_lip.description, laser_lip.atk_modifier );
    printf("Name :","%s","Description: ", "%s", "Attack points: ", " %d", dryer.name, dryer.description, dryer.atk_modifier );
    printf("Name :","%s","Description: ", "%s", "Attack points: ", " %d", boomerang.name, boomerang.description, boomerang.atk_modifier );
    printf("Name :","%s","Description: ", "%s", "Defense points: ", " %d", backpack.name, backpack.description, backpack.def_modifier );
    printf("Name :","%s","Description: ", "%s", "Defense points: ", " %d", umbrella.name, umbrella.description, umbrella.def_modifier );
    printf("Name :","%s","Description: ", "%s", "Defense points: ", " %d", perfume.name, perfume.description, perfume.def_modifier );
    printf("Name :","%s","Description: ", "%s", "Attack points: ", " %d", mirall.name, mirall.description, mirall.hp_modifier );
    printf("Name :","%s","Description: ", "%s", "Healing points: ", " %d", tattoo.name, tattoo.description, tattoo.hp_modifier );
}

int get_skill(){
    int skill_id;
     bool valid_input = false;
       while(!valid_input) {
           printf("Choose your skill: ");
           scanf("%d", skill_id);
           if(skill_id >= 1 && skill_id <= 8) {
               valid_input = true; // Valid input
           }
       }return skill_id;
}

//SkillDirect available_skills[TOTAL_SKILLS] = {laser_lip, dryer, boomerang, backpack, umbrella, perfume, mirall, tattoo};

void save_skill(SkillDirect available_skills, int selected_skill){ //???????? :( help
    int counter;
    while(counter!=4){
        for(int i= 0; i<TOTAL_SKILLS; i++ ){
            if(available_skills[i].id= selected_skill){
                Player.skills += available_skills[i];
    } 
  }    
}
}

