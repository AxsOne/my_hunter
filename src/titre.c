/*
** EPITECH PROJECT, 2022
** main
** File description:
** test
*/

#include "../include/my.h"

void draw_menu(menu_t *menu, sfRenderWindow *window)
{
    sfRenderWindow_drawSprite(window, menu->sprite, NULL);
}

void draw_titre(titre_t *titre, sfRenderWindow *window)
{
    sfRenderWindow_drawSprite(window, titre->sprite, NULL);
}

void draw_play(play_t *play, sfRenderWindow *window)
{
    sfRenderWindow_drawSprite(window, play->sprite, NULL);
}

void draw_cursor(cursor_t *cursor, sfRenderWindow *window)
{
    sfSprite_setPosition(cursor->sprite,
    V2F(cursor->mouse.x, cursor->mouse.y));
    sfRenderWindow_drawSprite(window, cursor->sprite, NULL);
}

void draw_oiseaux(ois_t *oiseaux, sfRenderWindow *window)
{
    sfSprite_setTextureRect(oiseaux->sprite, oiseaux->hitbox);
    sfRenderWindow_drawSprite(window, oiseaux->sprite, NULL);
}
