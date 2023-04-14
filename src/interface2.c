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

void click2(sfRenderWindow* window, sfEvent event, play_t *play)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
    sfFloatRect rect = sfSprite_getGlobalBounds(play->sprite);
    if (sfFloatRect_contains(&rect, mouse.x, mouse.y)) {
        sfSprite_setTexture(play->sprite, play->blue, sfTrue);
    }
    if (sfMouse_isButtonPressed(sfMouseLeft) &&
    event.mouseButton.button == sfMouseLeft) {
        sfFloatRect box = sfSprite_getGlobalBounds(play->sprite);
        if (sfFloatRect_contains(&box, mouse.x,  mouse.y)) {
            interface(window, event);
        }
    }
    while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed) {
                sfRenderWindow_close(window);
            }
        }
}

void click4(sfRenderWindow* window, sfEvent event, leveltwo_t *leveltwo)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
    sfFloatRect rect = sfSprite_getGlobalBounds(leveltwo->sprite);
    if (sfFloatRect_contains(&rect, mouse.x, mouse.y)) {
        sfSprite_setTexture(leveltwo->sprite, leveltwo->blue, sfTrue);
    }
    if (sfMouse_isButtonPressed(sfMouseLeft) &&
    event.mouseButton.button == sfMouseLeft) {
        sfFloatRect box = sfSprite_getGlobalBounds(leveltwo->sprite);
        if (sfFloatRect_contains(&box, mouse.x,  mouse.y)) {
            interface5(window, event);
        }
    }
    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed) {
            sfRenderWindow_close(window);
        }
    }
}

void click3(sfRenderWindow* window, sfEvent event, levelone_t *levelone)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
    sfFloatRect rect = sfSprite_getGlobalBounds(levelone->sprite);
    if (sfFloatRect_contains(&rect, mouse.x, mouse.y)) {
        sfSprite_setTexture(levelone->sprite, levelone->blue, sfTrue);
    }
    if (sfMouse_isButtonPressed(sfMouseLeft) &&
    event.mouseButton.button == sfMouseLeft) {
        sfFloatRect box = sfSprite_getGlobalBounds(levelone->sprite);
        if (sfFloatRect_contains(&box, mouse.x,  mouse.y)) {
            interface(window, event);
        }
    }
    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed) {
            sfRenderWindow_close(window);
        }
    }
}

void interface2(sfRenderWindow* window, sfEvent event)
{
    levelone_t *levelone = create_level1("asset/level1.png",
    V2F(700,300), V2F(0.5, 0.5));
    leveltwo_t *leveltwo = create_level2("asset/level2.png",
    V2F(700,600), V2F(0.5, 0.5));
    menu_t *menu = create_menu("asset/menu.png", V2F(1, 1));
    while (sfRenderWindow_isOpen(window)) {
    click4(window, event, leveltwo);
    click3(window, event, levelone);
    sfRenderWindow_clear(window, sfWhite);
    draw_menu(menu, window);
    draw_level2(leveltwo, window);
    draw_level1(levelone, window);
    sfRenderWindow_display(window);
    }
}

int interface3(sfRenderWindow* window, sfEvent event)
{
    play_t *play = create_play("asset/play.png", V2F(800, 500), V2F(0.5, 0.5));
    menu2_t *menu2 = create_menu2("asset/menu2.jpg", V2F(1, 1));
    while (sfRenderWindow_isOpen(window)) {
    click2(window, event, play);
    sfRenderWindow_clear(window, sfWhite);
    draw_menu2(menu2, window);
    draw_play(play, window);
    sfRenderWindow_display(window);
    }
    return 0;
}
