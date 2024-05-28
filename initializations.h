#include "structs.h"

//Initialize enemies
Enemy Helga = {"Helga Von Guggen",100, 20, 0 };
Enemy Mandy = {"Helga Von Guggen",100, 20, 0 };
Enemy Blaine = {"Helga Von Guggen",100, 20, 0 };
Enemy Myrna = {"Helga Von Guggen",100, 20, 0 };

//Initialize options
    //mall options
    Option opt1 = {
        "Go in and try the clothes.\n", // option name
        "Yay! You have decided to enter the shop\n ", //r_text
        "Once you go in you find that the designer of the new collection, Helga Von Guggen, is right in front of you! Although you are very nervous, you decide to go talk to her and finally, you ask her to recommend some clothes for you to try on. While you are trying on the first shirt, you realize that you can not take it off and you start panicking. When you step out of the fitting room and ask Helga to help you take it off she refuses and tells you that she plans to kill everyone that wears her clothes by making them impossible to take off and strangling them each hour a little bit more until they can’t breathe. YOU NEED TO STOP HER! Fight against her and take her to prison so everyone, including you, can be free of her evil clothes.\n", 
        &Helga, //Enemy
        "You receive a message from Jerald saying “WARNING! Some prisoners have escaped from the Whoop Prison! The security corps need your help to put them back in their cell.” Now you have the option to choose to respond to the message with an “On my way!”  and go help them or go back to the university so you don’t fail all your subjects.\n"
        };

    Option opt2 = {
        "Keep walking and go to another shop.\n", 
        "Are you sure you don’t want to go in? Oh well, that is your loss.\n", 
        "You keep walking toward some other shop and suddenly you can not believe what you are seeing. They are the new Gucci boots limited edition! Obviously, you start running to buy them but right at the exact same moment you are grabbing the shoes, another hand steals them from you. It’s Mandy! The girl you hate most in the entire world. “These shoes are for me,” Tells you. “Go buy something else at Humana where you belong”. You could not be more mad. The guy at the shop tells you that these are the last pair of boots they have and you need to decide who buys them. After a lot of talking, well screaming, you decide to fight for them. Fight Mandy so she doesn’t steal YOUR boots.\n ", 
        &Mandy,
        "You receive a message from Jerald saying “WARNING! Some prisoners have escaped from the Whoop Prison! The security corps need your help to put them back in their cell.” Now you have the option to choose to respond to the message with an “On my way!”  and go help them or go back to the university so you don’t fail all your subjects.\n"
        };

    
    //prison's options

    //prison
    Option opt3 = {
        "Go to prison.\n", 
        "Let’s go to prison!\n ", 
        "As you reach the prison’s entrance, the security guard sighs in relief “Thank you so much for arriving !” “The prison’s out of control!” he yells.\n", 
        NULL, 
        "Approaching the main corridor, there’s clear evidence something terrible has happened. You hear a deafening scream right on the other side of the corridor, but all lights are off, so you must decide. What do you want to do?\n"
        };
    
    // BLANIE + UNI
    Option opt4 = {
        "You don’t have a chance without light! You go to the electric room.", 
        "Going to the electric room.", 
        "You somehow manage to find the electric room and suddenly hear a familiar voice “At last I got your attention”. It’s Blaine Blue and he’s holding a big red button in his hands. “Call Mandy and tell her to go on a date with me, or else I will free all the prisoners with this button” YOU MUST STOP THIS! Stop Blaine from starting a riot at the prison and murdering Mandy.", &Blaine, "This has been so exciting…I can’t even imagine what would’ve happened if“bip, bip, bip, bip” your telephone won’t stop ringing. It’s Lizzy, a classmate of yours. “WHERE THE HELL ARE YOU? I’ve been telling the professors you were at the doctor but I don’t think they’ll believe me for much longer!” OH NO! IT’S SO LATE! I need to get to uni right now.\n"} ;
    //BLAINE + PENTHOUSE
    Option opt5 = {
        "You don’t have a chance without light! You go to the electric room.\n", 
        "Going to the electric room.", "You somehow manage to find the electric room and suddenly hear a familiar voice “At last I got your attention”. It’s Blaine Blue and he’s holding a big red button in his hands. “Call Mandy and tell her to go on a date with me, or else I will free all the prisoners with this button” YOU MUST STOP THIS! Stop Blaine from starting a riot at the prison and murdering Mandy.\n", 
        &Blaine, "Now that you’ve fought everyone, you can go to the penthouse with your friends to rest and enjoy life.\n"
        };
    //HELGA + UNI
    Option opt6 = {
        "There’s no time to turn the lights on! You keep going through the corridor.\n", 
        "You chose to keep gong through the corridor.","You run as quickly as you can through the whole corridor but as you reach its end, you see that there’s a radio with screams. Suddenly you feel a boa getting all around your neck. IT’S A TRAP! The designer Helga Von Guggen has been using her brand-new-limited-edition boa collection to strangle all the security team and free all the prisoners. QUICKLY, stop her from starting a riot at the prison.\n", 
        &Helga, 
        "This has been so exciting…I can’t even imagine what would’ve happened if…“bip, bip, bip, bip” your telephone won’t stop ringing. It’s Lizzy, a classmate of yours. “WHERE THE HELL ARE YOU? I’ve been telling the professors you were at the doctor but I don’t think they’ll believe me for much longer!” OH NO! IT’S SO LATE! I need to get to uni right now.\n"
        };
    //HELGA + PENTHOUSE
    Option opt7 = {
        "There’s no time to turn the lights on! You keep going through the corridor.\n", 
        "You chose to keep gong through the corridor.","You run as quickly as you can through the whole corridor but as you reach its end, you see that there’s a radio with screams. Suddenly you feel a boa getting all around your neck. IT’S A TRAP! The designer Helga Von Guggen has been using her brand-new-limited-edition boa collection to strangle all the security team and free all the prisoners. QUICKLY, stop her from starting a riot at the prison.\n", 
        &Helga, 
        "Now that you’ve fought everyone, you can go to the penthouse with your friends to rest and enjoy life.\n"
        };



    //Uni's options

    //UNI
    Option opt8 = {
        "Go to University.\n", 
        "Let's go to uni!\n", 
        "You’re running down the corridor because, as always, you are running late and your class has already started.You check you schedule and you see that your class is at the other end of the university. You have EDA ll and you have to decide if you want to go to class or to the cafeteria. What do you want to do?\n"
        };

    //MANDY + PRISON
    Option opt9 = {
        "You go to class.\n", 
        "You chose to keep going\n", 
        "You start running to get to class as fast as possible. But just as you turn the corner, you crash into Mandy with the bad luck that she soiled her coffee all over her. Her face starts to get red and more red and you ask her “You OK? You be looking like a tomato.” She definitely gets as red as a tomato and screams back at you “AM I OK? YOU JUST RUINED MY CACHEMIRE POURSE!!!!”. She looks at you with rage in her face and whispers to you with a madly smile in her face “I’m gonna make you pay it back. AAAAAAAHHHHHHHHH!!!!!”. You need to fight her and go to class as fast as possible!\n ", 
        &Mandy, 
        "Even though you ignored the first message, you receive the same message again and a “PLEASE HELP US!” added so you feel obligated to go to prison and help them. You know that if you don't respond, you won't be able to sleep tonight because you will be overthinking about it.\n"
        };

    //MANDY + PENTHOUSE
    Option opt10 = {
        "You go to class.\n", 
        "You chose to keep going\n",
        "You start running to get to class as fast as possible. But just as you turn the corner, you crash into Mandy with the bad luck that she soiled her coffee all over her. Her face starts to get red and more red and you ask her “You OK? You be looking like a tomato.” She definitely gets as red as a tomato and screams back at you “AM I OK? YOU JUST RUINED MY CACHEMIRE POURSE!!!!”. She looks at you with rage in her face and whispers to you with a madly smile in her face “I’m gonna make you pay it back. AAAAAAAHHHHHHHHH!!!!!”. You need to fight her and go to class as fast as possible!\n ", 
        &Mandy, 
        "Now that you’ve fought everyone, you can go to the penthouse with your friends to rest and enjoy life.\n"
        };

    //BLAINE + PRISON
    Option opt11 = {
        "You go to the cafeteria.\n", 
        "Let's go get a coffee\n", 
        "You go downstairs to the cafeteria and on your way there you see Blaine. “How did you get out of prison so fast?” you ask him in disbelief. He responds to you with “I’ve been a good boy, so they let me free… or did they? Maybe I just escaped and nobody noticed. Where is Mandy? I need to talk to her”. You don’t really trust him, so you decide not to talk to him and keep walking to your destination, but suddenly, he grabs you and tells you “I’m not going to let you go until you tell me where she is. I NEED TO END HER! SHE IS EVIL!”. Even if you don’t really like Mandy, you cannot let him hurt another human. You need to fight him so that everyone is safe, even the not-so-good people.\n", 
        &Blaine, 
        "Even though you ignored the first message, you receive the same message again and a “PLEASE HELP US!” added so you feel obligated to go to prison and help them. You know that if you don't respond, you won't be able to sleep tonight because you will be overthinking about it.\n"
        };

    //BLAINE + PENTHOUSE
    Option opt12 = {
        "You go to the cafeteria.\n", 
        "Let's go get a coffee\n", 
        "You go downstairs to the cafeteria and on your way there you see Blaine. “How did you get out of prison so fast?” you ask him in disbelief. He responds to you with “I’ve been a good boy, so they let me free… or did they? Maybe I just escaped and nobody noticed. Where is Mandy? I need to talk to her”. You don’t really trust him, so you decide not to talk to him and keep walking to your destination, but suddenly, he grabs you and tells you “I’m not going to let you go until you tell me where she is. I NEED TO END HER! SHE IS EVIL!”. Even if you don’t really like Mandy, you cannot let him hurt another human. You need to fight him so that everyone is safe, even the not-so-good people.\n", 
        &Blaine, 
        "Now that you’ve fought everyone, you can go to the penthouse with your friends to rest and enjoy life.\n"
        };


    //penthause options
    Option opt13 = {
        "Go to the Penthouse.\n", 
        "Going to the Penthouse...\n", 
        "“AGH! Finally! Home sweet homeeee.“ After a long day o fighting the the evil, my friends and I deserve nothing less than a calm afternoon at the projector room chilling with a movie. You go to the kitchen and you see Myrna. “Hi Myrna, how you doin’?” you ask her as you look for snacks. There are no snacks so you ask Myrna “Hey! Could you please make us some snacks for us to eat while watching the movie?” . She replies “Of course sweetie! Just go relax with your friends and I'll be there in a minute”.You go to the projector room and while deciding the movie you’ll watch, one of your friends goes to the bathroom“We should totally watch Mean Girls!” you suggest. “No!! I’d much rather watch Radio Rebel! It’s way cooler” says your friend. Myrna suddenly enters the room with some snacks “There you go girls. Have a nice one!”. You finally agree on watching Mean Girls but you’re dying of thirst, so you head to the kitchen to grab a couple of drinks. When you get back to the mini theater, your friend is no longer there, so you are alone. “Hmmm… what’s going on?” Suddenly, a video  starts playing at the gigantic screen:“MUA HA HA HA. You girls are sooo stupid!” says Myrna through the screen. “What! What the hell are you doing, Myrna?”. Then she replies “I will beat you girls and I’ll finally own the penthouse i’ve always deserved” YOU MUST STOP MYRNA. As your final fight, SAVE YOUR FRIENDS AND THE PENTHOUSE!\n", 
        &Myrna, 
        "Congratulations! You saved your friends and the penthause and, most importantly, you can now go watch Mean Girls!\n"
        };


Decision dec1 = {"What do you want to do?", {&opt1, &opt2}, 2 }; //decide if going in the shop or keep going throug the corridor (MALL)
Decision dec2 = {"What do you want to do?", {&opt8, &opt3}, 2 }; //decide if going to prison ir to Uiversity (scenario decision)
Decision dec3 = {"What do you want to do?", {&opt5, &opt7}, 2 }; //first Uni then prison go to electic room or keep in the corridor (PRISON)
Decision dec4 = {"What do you want to do?", {&opt4, &opt6}, 2 }; //first you go to prison then univesiti going to electric room or keep in the corridor (PRISON)
Decision dec5 = {"What do you want to do?", {&opt9, &opt11}, 2 }; //First Uni then prison go to class or go to cafeteria (UNI)
Decision dec6 = {"What do you want to do?", {&opt10, &opt12}, 2 }; //first prison then Uni go to class or go to cafeteria (UNI)

// I don't think it is really necessary Maybe we do need it because if not how do we print the text to go to the penthgouse
Decision dec7 = {"What do you want to do?", {&opt13, NULL}, 1}; //Scenario decicion to go to the last scenario --> Penthouse


Scenario mall = {
    "Beverly Hills Mall\n",
    "This is the Beverly Hills Center Mall, an upscale shopping center in Beverly Hills. The character loves to spend his/her evenings there buying any type of clothes or just looking and trying them.\n", 
    &dec1,  //Batle decision
    NULL, 
    &dec2   //Scenario decision
    };


Scenario uni = {
    "Malibu University\n",
    "Malibu University (more commonly called \"Mali-U\" for short) is the college that Sam, Clover, Alex, Blaine and Mandy attend. Sam, Clover, Alex and Mandy graduated from Beverly Hills High.\n", 
    &dec5,  //
    &dec6,   //
    NULL
    };


Scenario prison = {
    "Whoop prison",
    "Here is where they imprison all their enemies. It is a high security prison but sometimes a prisoner escapes and the security needs the help from the spies to put them back in their cells.\n", 
    &dec3,  //
    &dec4,
    NULL
    };


Scenario house = {
    "Spies’ Penthouse",
    "This is where the character lives, it is a huge penthouse with 2 pools and over 8 rooms. The character gets the house as a present from her/his parents when he/she moves to university.\n", 
    &dec7,
    NULL,
    NULL
    };


// atack skills
SkillDirect laser_lip = {"Laser lipstick", "It’s a lipstick that shoots a laser towards the enemy.You can use it unlimited times.",20,0,0};
SkillDirect dryer= {"Hair dryer", "It’s shaped like a hairdryer but when you try to use it, a tornado comes out of it and attacks the enemy.You can only use it one time during the battle.", 25,0,0}; 
SkillDirect boomerang = {"Banana Clip Boomerang", "It’s a clip that you can wear on your hair but additionally, it works as a boomerang and you can shoot it at your enemy.You can use it unlimited times.", 20,0,0};

//defense skills
SkillDirect backpack = {"Jetback Backpack", "When somebody attacks you, you have the ability to fly away from them without getting damaged. 5 turns of duration", 0, 10, 0};
SkillDirect umbrella = {"When you open the umbrella it creates a protective shield against the attacks of your enemies to protect you.You can use it 2 times during your battle", 2, 0, 40, 0};
SkillDirect perfume = {"When you apply the perfume to yourself it creates an ice-shield to defend yourself from the attacks of your enemy. 3 turn of duration", 3, 0, 20, 0};

//life skills
SkillDirect mirall = {"Telemirallet", "This gadget is like a phone with a scanner in it and when you use it, it scans your body and it cures you, giving you more energy and life. It's going to add you 22 life points.\n", 0, 0, 22};
SkillDirect tattoo = {"Henna Tracer Tattoo ", "If you are running out of life points, with this gadget you can dray a revival henna tattoo to add life points. It is going to add you 22 life points.\n", 0, 0, 22}; 

SkillDirect available;


//Characters initialization
Character Clover = {"Clover", 100, 5, 5 }; 
Character Sam = {"Sam", 100, 5, 5 }; 
Character Alex = {"Alex", 100, 5, 5 }; 

Character Player = {"", 100, 5, 5 }; 
