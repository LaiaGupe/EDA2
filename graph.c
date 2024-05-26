
#include <stdio.h>
#include <stdbool.h>
#include "scenario.c"
#define TOTAL_NODES 4

//FUNCTIONS

void check_connections(Scenario from_node, Scenario to_node) {
    struct Dictionary2 *sub_dict = NULL;

//dict.ElementAt(i);
//lista: Scenario connected_nodes[];
    for(int i=0; i< sizeof(global_dictionary); i++){
        if(global_dictionary.ElementAt(i).key == from_node.name){
            sub_dict = global_dictionary.ElementAt(i).x_dictionary;
            for(int i=0; i < mall_dictionary.Count; i++){
                if(sub_dict.ElemntAt(i).connection == true){
                    // connected_nodes += sub_dict[i].to_node;
                }
            }
            break;
        }
    }
        //return connected_nodes 
};


Scenario scenarios_list[TOTAL_NODES];



//DICTIONARIES

// dictionary 2
struct Dictionary2 {
    Scenario key;
    bool connection;
};

struct Dictionary2 mall_dictionary[] = {
        {mall, false},
        {prison, true},
        {uni, true},
        {house, false},
    };

struct Dictionary2 prison_dictionary[] = {
        {mall, false},
        {prison, false},
        {uni, true},
        {house, true},
    };

struct Dictionary2 uni_dictionary[] = {
        {mall, false},
        {prison, true},
        {uni, false},
        {house, true},
    };
struct Dictionary2 house_dictionary[] = {
        {mall, false},
        {prison, false},
        {uni, false},
        {house, false},
    };

//dictionary 1
struct Dictionary1 {
    Scenario key;
    struct Dictionary2 x_dictionary ;
};

struct Dictionary1 global_dictionary[] = {
    {mall, mall_dictionary},
    {prison, prison_dictionary},
    {uni, uni_dictionary},
    {house, house_dictionary},
};





