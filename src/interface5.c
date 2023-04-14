/*
** EPITECH PROJECT, 2022
** interface
** File description:
** test
*/

#include <SFML/Graphics.h>
#include "../include/my.h"
#include "../include/deltatime.h"
#include <stdlib.h>

void part2(sfRenderWindow *window, ois_t *oiseaux)
{
    int random = rand() % 900;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
    if (sfMouse_isButtonPressed(sfMouseLeft) && sfEvtMouseButtonReleased) {
        sfFloatRect box = sfSprite_getGlobalBounds(oiseaux->sprite);
        if (sfFloatRect_contains(&box, mouse.x,  mouse.y)) {
            sfSprite_setPosition(oiseaux->sprite, V2F(-10, random));
        }
    }
}

void retry2(sfRenderWindow *window,ois_t *oiseaux, sfIntRect *box,sfEvent event)
{
    int random = rand() % 900;
    sfVector2f cannard_pos = sfSprite_getPosition(oiseaux->sprite);
    if (cannard_pos.x > 1920) {
        sfSprite_setPosition(oiseaux->sprite, V2F(-random, random));
        box->width -= 130;
    }
    part2(window, oiseaux);
    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed) {
            sfRenderWindow_close(window);
        }
    }
    if (box->width <= 0) {
        interface3(window, event);
    }
}

int move2(sfIntRect *hitbox)
{
    if (hitbox->left < (331 - hitbox->width)) {
        hitbox->left += hitbox->width;
    }else {
        hitbox->left = 0;
    }
    return 0;
}

void clock2(sfRenderWindow *window, ois_t *oiseaux, menu_t *menu,heart_t *heart)
{
    sfRenderWindow_clear(window, sfWhite);
    draw_menu(menu, window);
    draw_heart(heart, window);
    draw_oiseaux(oiseaux, window);
    sfRenderWindow_display(window);
}

void interface5(sfRenderWindow* window, sfEvent event)
{
    ois_t *oiseaux = create_oiseaux("asset/oi.png", V2F(0, 200), V2F(0.5, 0.5));
    menu_t *menu = create_menu("asset/menu.png", V2F(1.12, 1.12));
    heart_t *heart = create_heart("asset/h.png", V2F(1700, 900), V2F(0.5, 0.5));
    sfClock *horloge = sfClock_create();
    sfTime time = {0};
    while (sfRenderWindow_isOpen(window)) {
        time = sfClock_getElapsedTime(horloge);
        float deltatime = sfTime_asSeconds(time);
        retry2(window , oiseaux, &heart->box, event);
        if (deltatime >= 0.2) {
            move2(&oiseaux->hitbox);
            sfClock_restart(horloge);
        }
    sfSprite_move(oiseaux->sprite, V2F(0.3, 0.0));
    clock2(window, oiseaux, menu, heart);
    }
}
