
#include "graph.c"
#include "combat.c"
#include "scenario_function.c"
#include "skills.c"



/* ESTRUCTURA DEL NOSTRE JOC

1. MENU -> press any key
2. SELECCIÓ PERSONATGE
     - Borrar pantalla anterior
     - Print personatge + info
     - Input espera
     - Escull habilitats
     - Input habilitats -> Llista, array
     - Crear variable personatge amb info

3. INTRO HISTÒRIA
4. ENTRAR ESCENARI PRINCIPAL (root node)
    + Executar bucle node   (bucle_scenario.c)
          - Mostrar intro
          - Prendre decisió
          - Combat (combat.c)
          - Triar següent escenari (final joc si variable combat = game over)

les tres grans parts a fer son el graph (graph.c) la funció de combat (combat.c) i el bucle dels escenarios (bucle_scenario.c)
*/


int main(){

//1 - MENU
    printf("Welcome to the game: 'Les espies de veritat'!");
    printf("Menu:");

    bool loop = false;
    while(loop) //bucle de decisió menu 1
    { 
        int menu_result = print_menu(); //falta fer aquesta funció
        switch (menu_result)
        {
        case 0: // start game option. will jump directly to edit the character
            loop = true;
            break;
        case 1: // test battle option. will start a random battle between a Jerry and an enemy
            //start_battle(test)  //falta fer aquesta funció
            loop = true;
            break;
        default:
            clearscreen();
            break;
        }    
    }
    
//2 - SELECCIÓ PERSONATGE
  clearScreen();
   
//demanar input character
int character_selected;
Character player; //we will use this variable to create the player's customized character
int character_selected= get_character(); // this will preint the menu and get an int that represents the character selected

// crear variable personatge   TODO: switch case
if(character_selected==1){   //aquí assignem el nom corresponent al número selccionat
    *player.name = "Clover";
};
if(character_selected==2){
    *player.name = "Sam";
};
if(character_selected==3){
    *player.name = "Alex";

// demanar input skills
// here we will cutomize the player's skill list with the 4 skills they select
clearScreen();
SkillDirect available_skills[TOTAL_SKILLS] = {laser_lip, dryer, boomerang, backpack, umbrella, perfume, mirall, tattoo};

// here the procedure is as follows: we firstly print the skills menu, then get the selected skill and then save it in the player's customized character
print_skills_menu();
int first_skill = get_skill();
save_skill(available_skills, first_skill);
print_skills_menu();
int second_skill = get_skill();
save_skill(available_skills, second_skill);
print_skills_menu();
int third_skill = get_skill();
save_skill(available_skills, third_skill);
print_skills_menu();
int fourth_skill = get_skill();
save_skill(available_skills, third_skill);


clearScreen();

//3. INTRO HISTÒRIA
borrar_pantalla();
printf("INTRO AQUÍ");

//4. BUCLE NODE

// PRIMER ESCENARI (root node)
scenario_function(&mall);
//bucle




};

}



