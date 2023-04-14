/*
** EPITECH PROJECT, 2022
** main
** File description:
** test
*/

#include <stdio.h>
#include <SFML/Graphics.h>
#include "include/my.h"
#include "include/deltatime.h"
#include <stdlib.h>
#include <SFML/Audio.h>

void click(sfRenderWindow* window, sfEvent event, play_t *play)
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
            interface2(window, event);
        }
    }
}

void test(GLOBAL_t *ALL)
{
    while (sfRenderWindow_pollEvent(WIN, &EVENT)) {
        if (EVENT.type == sfEvtClosed) {
            sfRenderWindow_close(WIN);
            }
    }
}

void racourci(GLOBAL_t *ALL)
{
    MODE.bitsPerPixel = 64;
    MODE.height = 1080;
    MODE.width = 1920;
    WIN = sfRenderWindow_create(MODE, "My Hunter", sfResize | sfClose, NULL);
}

void play (GLOBAL_t *ALL)
{
    titre_t *titre = create_titre("asset/lo.png", V2F(600, 150), V2F(1.5, 1.5));
    play_t *play = create_play("asset/play.png", V2F(800, 500), V2F(0.5, 0.5));
    menu_t * menu = create_menu("asset/menu.png", V2F(1, 1));
    cursor_t *cursor = create_cursor("asset/baguette.png");
    sfRenderWindow_setMouseCursorVisible(WIN, sfTrue);
    while (sfRenderWindow_isOpen(WIN)) {
            test(ALL);
        sfSprite_setTexture(titre->sprite, titre->texture, sfTrue);
        sfSprite_setTexture(play->sprite, play->texture, sfTrue);
        sfSprite_setTexture(menu->sprite, menu->texture, sfTrue);
        click(WIN, EVENT, play);
        sfRenderWindow_clear(WIN, sfWhite);
        draw_menu(menu, WIN);
        draw_titre(titre, WIN);
        draw_play(play, WIN);
        draw_cursor(cursor, WIN);
        sfRenderWindow_display(WIN);
    }
    sfRenderWindow_destroy(WIN);
}

int main(int ac, char **av)
{
    GLOBAL_t ALL;
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        my_printf("- shoot the duck with the cursor for win\n");
        return 0;
    }
    racourci(&ALL);
    play(&ALL);
    return 0;
}


//sfMusic *epic = sfMusic_createFromFile("asset/epic.ogg");
//    sfMusic_play(epic);
