#include "Select_Character.h"
void
Select_Character::init()
{
    printf("Select_Character init\n");
    al_init_primitives_addon();
    al_init_font_addon();
    al_init_ttf_addon();
    al_init_image_addon();
    al_init_acodec_addon();
    
    picture = al_load_bitmap("./picture/scene/select_character.jpeg");
    sample = al_load_sample("./sound/select_character.wav");//background music
    background_sound = al_create_sample_instance(sample);
    al_set_sample_instance_playmode(background_sound, ALLEGRO_PLAYMODE_LOOP);
    al_attach_sample_instance_to_mixer(background_sound, al_get_default_mixer());
    al_set_sample_instance_gain(background_sound, 1);
    al_play_sample_instance(background_sound);
}

int
Select_Character::process(ALLEGRO_EVENT event)
{
    printf("select_character_process\n");
    if(event.type == ALLEGRO_EVENT_KEY_UP){
        switch (event.keyboard.keycode) {
            case ALLEGRO_KEY_ESCAPE:
                printf("press ESC in select process\n");
                return GAME_EXIT;
            case ALLEGRO_KEY_ENTER:
                printf("press ENTER\n");
                next_window = true;
                //return PLAYER_1;
        }
    }
    return GAME_CONTINUE;
}

void
Select_Character::draw()
{
    al_draw_bitmap(picture, 0, 0, 0);
    printf("draw select_character\n");
}
void
Select_Character::destroy()
{
    printf("destroy Select_Character\n");
    al_destroy_bitmap(picture);
    al_destroy_sample_instance(background_sound);
}
