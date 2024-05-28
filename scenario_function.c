#include "combat.c"


int chosen_path(int path_option, int path){
    if (path_option == 1){
        path = 1;
    }
    if (path_option == 2){
        path = 2;
    };
    return path ;1;
}

void option1_function(Scenario current_scenario, int path, Character current_character){
    if (path == 1){
        printf("%s", current_scenario.combat_decision_1->options[0]->r_text); //it prints the response text of the option (like a little explanation)
        printf("%s", current_scenario.combat_decision_1->options[0]->n_text_b);
        Enemy *enemy = current_scenario.combat_decision_1->options[0]->enemies;
        combat(enemy, current_character);
        printf("%s", current_scenario.combat_decision_1->options[0]->n_text_a);
    }
    if (path == 2){
        printf("%s", current_scenario.combat_decision_2->options[0]->r_text); //it prints the response text of the option (like a little explanation)
        printf("%s", current_scenario.combat_decision_2->options[0]->n_text_b);
        Enemy *enemy = current_scenario.combat_decision_2->options[0]->enemies;
        combat(enemy, current_character);
        printf("%s", current_scenario.combat_decision_2->options[0]->n_text_a);

    }
}

void option2_function(Scenario current_scenario, int path, Character current_character){
    if (path == 1){
        printf("%s", current_scenario.combat_decision_1->options[1]->r_text); //it prints the response text of the option (like a little explanation)
        printf("%s", current_scenario.combat_decision_1->options[1]->n_text_b);
        Enemy *enemy = current_scenario.combat_decision_1->options[1]->enemies;
        combat(enemy, current_character);
        printf("%s", current_scenario.combat_decision_1->options[1]->n_text_a);
    }
    if (path == 2){
        printf("%s", current_scenario.combat_decision_2->options[1]->r_text); //it prints the response text of the option (like a little explanation)
        printf("%s", current_scenario.combat_decision_2->options[1]->n_text_b);
        Enemy *enemy = current_scenario.combat_decision_2->options[1]->enemies;
        combat(enemy, current_character);
        printf("%s", current_scenario.combat_decision_2->options[1]->n_text_a);

    }
}

void option_decision(Scenario *current_scenario, int path, int option, Character current_character){
    if (path == 1){
        switch (option){
            case 1:
                option1_function(*current_scenario, 1, current_character);
                break;
            case 2:
                option2_function(*current_scenario, 1, current_character);
                break;
            default:
                break;

        }
    }
    if (path == 2){
        switch (option){
            case 1:
                option1_function(*current_scenario, 2, current_character);
                break;
            case 2:
                option2_function(*current_scenario, 2, current_character);
                break;
            default:
                break;

        }
    }
}

void print_options(Scenario *current_scenario, int path){
    if (path == 1){
        printf("Option 1: %s\n", current_scenario->combat_decision_1->options[0]->option_name); //Perque dona error d'acces?
        printf("Option 2: %s\n", current_scenario->combat_decision_1->options[1]->option_name); //Perque dona error d'acces?
        printf("Entern an option: ");
    }
    if (path == 2){
        printf("Option 1: %s\n", current_scenario->combat_decision_2->options[0]->option_name); //Perque dona error d'acces?
        printf("Option 2: %s\n", current_scenario->combat_decision_2->options[1]->option_name); //Perque dona error d'acces?
        printf("Entern an option: ");
    }
}


void print_scenario_description(Scenario *current_scenario, int path){
    printf("You're in the scenario: %s\n%s", current_scenario->name, current_scenario->description); // perque no imprimeix bé en nom de l'escenario ni la descripció?
    printf("%s\n", current_scenario->combat_decision_1->q_text); //Aqui passa el mateix
    print_options(current_scenario, path);
}


void scenario_function(Scenario *current_scenario, Character current_character){
    int scenario_count = 0;
    int path = 1;
    int option;
    int path_option;
    print_scenario_description(current_scenario, path);
    scanf("%d", &option);
    option_decision(current_scenario, path, option, current_character);
    //escollit escenari
    chosen_path(path_option, path);
    while (scenario_count <= 4){
        print_scenario_description(current_scenario, path);
        scanf("%d", &option);
        option_decision(current_scenario, path, option, current_character);
        scenario_count++;
    }
}


int main(){
    Character Sam = {"Sam", 100, 5, 5 , {&dryer, &boomerang, &umbrella, &mirall}}; 
    printf("HP: %d\n", Sam.hp);
    printf("Attck: %d\n", Sam.attck);
    printf("Def: %d\n", Sam.def);
    scenario_function(&mall, Sam); 
}

