#include "options.c"









Decision dec1 = {"What do you want to do?", {&opt1, &opt2}, 2 }; //decide if going in the shop or keep going throug the corridor (MALL)
Decision dec2 = {"What do you want to do?", {&opt3, &opt8}, 2 }; //decide if going to prison ir to Uiversity (scenario decision)
Decision dec3 = {"What do you want to do?", {&opt4, &opt6}, 2 }; //first you go to prison then univesiti going to electric room or keep in the corridor (PRISON)
Decision dec4 = {"What do you want to do?", {&opt5, &opt7}, 2 }; //first Uni then prison go to electic room or keep in the corridor (PRISON)
Decision dec5 = {"What do you want to do?", {&opt9, &opt11}, 2 }; //First Uni then prison go to class or go to cafeteria (UNI)
Decision dec6 = {"What do you want to do?", {&opt10, &opt12}, 2 }; //first prison then Uni go to class or go to cafeteria (UNI)

// I don't think it is really necessary
Decision dec7 = {"What do you want to do?", {&opt13, NULL}, 1}; //Scenario decicion to go to the last scenario --> Penthouse
