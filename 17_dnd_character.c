#include "16_dnd_character.h"

#include <stdlib.h>

int modifier(int score) {
    return (score >= 10) ? (score - 10) / 2 : (score - 11) / 2;
}

int ability(void) {
    int sum = 0;
    int min = 7;

    for (int i = 0; i < 4; i++) {
        int roll = (rand() % 6) + 1;
        sum += roll;
        if (roll < min) {
            min = roll;
        }
    }

    return sum - min;
}

dnd_character_t make_dnd_character(void) {
    dnd_character_t character = {
        .strength = ability(),
        .dexterity = ability(),
        .constitution = ability(),
        .intelligence = ability(),
        .wisdom = ability(),
        .charisma = ability(),
    };

    character.hitpoints = 10 + modifier(character.constitution);

    return character;
}

