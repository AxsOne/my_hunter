/*
** EPITECH PROJECT, 2022
** struc
** File description:
** rush 3 main file
*/

#include "../include/my.h"
#include <stdlib.h>

cursor_t *create_cursor(char const *path)
{
    cursor_t *cursor = malloc(sizeof(cursor_t));
    cursor->sprite = sfSprite_create();
    cursor->texture = sfTexture_createFromFile(path, NULL);
    sfSprite_setTexture(cursor->sprite, cursor->texture, sfTrue);
    cursor->mouse = (sfVector2i) {209, 36};
    return cursor;
    free(cursor);
}

menu2_t *create_menu2(char const *path, sfVector2f size_titre)
{
    menu2_t *menu2 = malloc(sizeof(play_t));
    menu2->sprite = sfSprite_create();
    menu2->texture = sfTexture_createFromFile(path , NULL);
    sfSprite_setTexture(menu2->sprite, menu2->texture, sfTrue);
    sfSprite_setScale(menu2->sprite, size_titre);
    return menu2;
    free(menu2);
}

levelone_t *create_level1(char const *path, sfVector2f position,sfVector2f size)
{
    levelone_t *levelone = malloc(sizeof(levelone_t));

    levelone->sprite = sfSprite_create();
    levelone->texture = sfTexture_createFromFile(path , NULL);
    sfSprite_setTexture(levelone->sprite, levelone->texture, sfTrue);
    levelone->blue = sfTexture_createFromFile(TEXTURE_BLUE2, NULL);
    levelone->hitbox = sfSprite_getTextureRect(levelone->sprite);
    levelone->hitbox.width = 382;
    sfSprite_setPosition(levelone->sprite, position);
    sfSprite_setScale(levelone->sprite, size);
    levelone->collision_box.width = 382;
    levelone->collision_box = FRECT(position.x, position.y, 32, 32);
    return levelone;
    free(levelone);
}

leveltwo_t *create_level2(char const *path, sfVector2f position,sfVector2f size)
{
    leveltwo_t *leveltwo = malloc(sizeof(play_t));

    leveltwo->sprite = sfSprite_create();
    leveltwo->texture = sfTexture_createFromFile(path , NULL);
    sfSprite_setTexture(leveltwo->sprite, leveltwo->texture, sfTrue);
    leveltwo->blue = sfTexture_createFromFile(TEXTURE_BLUE3, NULL);
    leveltwo->hitbox = sfSprite_getTextureRect(leveltwo->sprite);
    leveltwo->hitbox.width = 382;
    sfSprite_setPosition(leveltwo->sprite, position);
    sfSprite_setScale(leveltwo->sprite, size);
    leveltwo->collision_box.width = 382;
    leveltwo->collision_box = FRECT(position.x, position.y, 32, 32);
    return leveltwo;
    free(leveltwo);
}
