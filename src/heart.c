/*
** EPITECH PROJECT, 2022
** draw_heart
** File description:
** test
*/

#include "../include/my.h"

void draw_heart(heart_t *heart, sfRenderWindow *window)
{
    sfSprite_setTextureRect(heart->sprite, heart->box);
    sfRenderWindow_drawSprite(window, heart->sprite, NULL);
}

void draw_menu2(menu2_t *menu2, sfRenderWindow *window)
{
    sfRenderWindow_drawSprite(window, menu2->sprite, NULL);
}

void draw_level1(levelone_t *levelone, sfRenderWindow *window)
{
    sfRenderWindow_drawSprite(window, levelone->sprite, NULL);
}

void draw_level2(leveltwo_t *leveltwo, sfRenderWindow *window)
{
    sfRenderWindow_drawSprite(window, leveltwo->sprite, NULL);
}
