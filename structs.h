#include "common.h"

typedef struct {
    char name[SIZE_NAME];
    char description[SIZE_DESCRIPTION];
    int atk_modifier; 
    int def_modifier; 
    int hp_modifier; 
} SkillDirect;

typedef struct {
    char name[SIZE_NAME];
    char description[SIZE_DESCRIPTION];
    int duration; 
    int atk_modifier; 
    int def_modifier; 
    int hp_modifier; 
} SkillTemporal;

typedef struct {
    char name[SIZE_NAME];
    int hp;
    int attck;
    int def;
    SkillDirect *skills[SIZE_SKILLS];
}Character;

typedef struct{
    char name[SIZE_NAME];
    int hp;
    int attck;
    int def;
}Enemy;

typedef struct{
    char option_name[TEXT];
    char r_text[TEXT];
    char n_text_b[TEXT];
    Enemy *enemies;
    char n_text_a[TEXT];
}Option;

typedef struct{
    char q_text[TEXT];
    Option *options[MAX_OPTIONS]; 
    int number_options;
}Decision;

typedef struct{
    char name[SIZE_NAME];
    char description[SIZE_DESCRIPTION];
    Decision *combat_decision_1;
    Decision *combat_decision_2;
    Decision *scenario_decision;
}Scenario;






