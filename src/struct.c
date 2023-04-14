/*
** EPITECH PROJECT, 2022
** struc
** File description:
** rush 3 main file
*/

#include "../include/my.h"
#include <stdlib.h>

titre_t *create_titre(char const *path, sfVector2f position, sfVector2f size)
{
    titre_t *titre = malloc(sizeof(titre_t));

    titre->sprite = sfSprite_create();
    titre->texture = sfTexture_createFromFile(path , NULL);
    sfSprite_setPosition(titre->sprite, position);
    sfSprite_setScale(titre->sprite, size);
    return titre;
    free(titre);
}

play_t *create_play(char const *path, sfVector2f position, sfVector2f size)
{
    play_t *play = malloc(sizeof(play_t));

    play->sprite = sfSprite_create();
    play->texture = sfTexture_createFromFile(path , NULL);
    sfSprite_setTexture(play->sprite, play->texture, sfTrue);
    play->blue = sfTexture_createFromFile(TEXTURE_BLUE, NULL);
    play->hitbox = sfSprite_getTextureRect(play->sprite);
    play->hitbox.width = 382;
    sfSprite_setPosition(play->sprite, position);
    sfSprite_setScale(play->sprite, size);
    play->collision_box.width = 382;
    play->collision_box = FRECT(position.x, position.y, 32, 32);
    return play;
    free(play);
}

ois_t *create_oiseaux(char const *path, sfVector2f position, sfVector2f size)
{
    ois_t *oiseaux = malloc(sizeof(play_t));

    oiseaux->sprite = sfSprite_create();
    oiseaux->texture = sfTexture_createFromFile(path , NULL);
    sfSprite_setTexture(oiseaux->sprite, oiseaux->texture, sfTrue);
    oiseaux->hitbox = sfSprite_getTextureRect(oiseaux->sprite);
    oiseaux->hitbox.width = 111;
    sfSprite_setPosition(oiseaux->sprite, position);
    sfSprite_setScale(oiseaux->sprite, size);
    return oiseaux;
    free(oiseaux);
}

heart_t *create_heart(char const *path, sfVector2f position, sfVector2f size)
{
    heart_t *heart = malloc(sizeof(play_t));

    heart->sprite = sfSprite_create();
    heart->texture = sfTexture_createFromFile(path , NULL);
    sfSprite_setTexture(heart->sprite, heart->texture, sfTrue);
    heart->box = sfSprite_getTextureRect(heart->sprite);
    heart->box.width = 389;
    sfSprite_setPosition(heart->sprite, position);
    sfSprite_setScale(heart->sprite, size);
    return heart;
    free(heart);
}

menu_t *create_menu(char const *path, sfVector2f size_titre)
{
    menu_t *menu = malloc(sizeof(play_t));

    menu->sprite = sfSprite_create();
    menu->texture = sfTexture_createFromFile(path , NULL);
    sfSprite_setTexture(menu->sprite, menu->texture, sfTrue);
    sfSprite_setScale(menu->sprite, size_titre);
    return menu;
    free(menu);
}

//oiseaux.speed = 5;
