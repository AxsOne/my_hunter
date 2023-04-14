/*
** EPITECH PROJECT, 2022
** my
** File description:
** test
*/

#pragma once

#include <SFML/Graphics.h>
#include <SFML/System.h>

#define WIN ALL->settings.window
#define MODE ALL->settings.mode
#define EVENT ALL->settings.event
#define HITBOX ALL->settings.hitbox
#define BOX ALL->settings.box

#define V2F(x, y) \
        (sfVector2f) { \
        x, y \
        }

#define TEXTURE_BLUE "asset/play_blue.png"
#define TEXTURE_BLUE2 "asset/level1blue.png"
#define TEXTURE_BLUE3 "asset/level2blue.png"
#define EXPLOSION

#define V2F(x, y) \
        (sfVector2f) { \
        x, y \
        }

#define FRECT(x, y, width, height) \
        (sfFloatRect) { \
        x, y, width, height \
        }

typedef struct menu_s {
    sfSprite *sprite;
    sfTexture *texture;
} menu_t;

typedef struct menu2_s {
    sfSprite *sprite;
    sfTexture *texture;
} menu2_t;

typedef struct titre_s {
    sfSprite *sprite;
    sfTexture *texture;
} titre_t;


typedef struct play_s {
    sfSprite *sprite;
    sfTexture *texture;
    sfTexture *blue;
    sfFloatRect collision_box;
    sfIntRect hitbox;
} play_t;

typedef struct levelone_s {
    sfSprite *sprite;
    sfTexture *texture;
    sfTexture *blue;
    sfFloatRect collision_box;
    sfIntRect hitbox;
} levelone_t;

typedef struct leveltwo_s {
    sfSprite *sprite;
    sfTexture *texture;
    sfTexture *blue;
    sfFloatRect collision_box;
    sfIntRect hitbox;
} leveltwo_t;

typedef struct ois_s {
    sfSprite *sprite;
    sfTexture *texture;
    sfFloatRect collision_box;
    sfIntRect hitbox;
} ois_t;

typedef struct heart_s {
    sfSprite *sprite;
    sfTexture *texture;
    sfIntRect box;
} heart_t;

typedef struct cursor_s {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2i mouse;
} cursor_t;

typedef struct parametre_s {
    sfVideoMode mode;
    sfRenderWindow* window;
    sfEvent event;
    sfIntRect *box;
    //sfClock *horloge;
    //sfTime time;
} parametre_t;

typedef struct GLOBAL_s {
    parametre_t settings;
} GLOBAL_t;



void interface2(sfRenderWindow* window, sfEvent event);

int interface3(sfRenderWindow* window, sfEvent event);

int my_printf(char const *format, ...);

void interface5(sfRenderWindow* window, sfEvent event);

levelone_t *create_level1(char const *path,sfVector2f position,sfVector2f size);
void draw_level1(levelone_t *levelone, sfRenderWindow *window);

leveltwo_t *create_level2(char const *path,sfVector2f position,sfVector2f size);
void draw_level2(leveltwo_t *levelone, sfRenderWindow *window);

heart_t *create_heart(char const *path, sfVector2f position, sfVector2f size);
void draw_heart(heart_t *heart, sfRenderWindow *window);

void interface(sfRenderWindow* window, sfEvent event);

menu2_t *create_menu2(char const *path, sfVector2f size_titre);
void draw_menu2(menu2_t *menu2, sfRenderWindow *window);


cursor_t *create_cursor(char const *path);
void draw_cursor(cursor_t *cursor, sfRenderWindow *win);

titre_t *create_titre(char const *, sfVector2f, sfVector2f);
void draw_titre(titre_t *titre, sfRenderWindow *);

play_t *create_play(char const *, sfVector2f, sfVector2f);
void draw_play(play_t *, sfRenderWindow *);

menu_t *create_menu(char const *path, sfVector2f size_titre);
void draw_menu(menu_t *menu, sfRenderWindow *window);

ois_t *create_oiseaux(char const *path, sfVector2f position, sfVector2f size);
void draw_oiseaux(ois_t *cursor, sfRenderWindow *win);
