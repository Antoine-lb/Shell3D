#include "../cub3d.h"

int key_press_hook_texture(int key, t_g *data)
{
    data->key_presed[key] = 1;
    return (0);
}

void render_image(t_g *g)
{
    mlx_destroy_image(g->mlx_ptr, g->img.ptr);
    g->img.ptr = mlx_new_image(g->mlx_ptr, g->screen.screenWidth, g->screen.screenHeight);
    g->img.data = (int *)mlx_get_data_addr(g->img.ptr, &g->img.bpp, &g->img.size_l, &g->img.endian);
    draw_floor_and_ceiling(g);
    get_screenshot(g, &draw_line_in_texture);
    sprite_casting(g);
    mlx_put_image_to_window(g->mlx_ptr, g->mlx_win, g->img.ptr, 0, 0);
    print_in_terminal(g);
}

int key_release_hook_texture(int key, t_g *g)
{
    if (g->key_presed[KEY_F])
    {
        g->textured_floor_and_ceiling = !g->textured_floor_and_ceiling;
        render_image(g);
    }
    g->key_presed[key] = 0;
    return (0);
}

int deal_key_texture(t_g *g)
{
    double moveSpeed = 0.05;
    double security = 0.5;
    double rotspeed = 0.05;

    if (g->key_presed[KEY_ESC])
        exit(0);

    if ((g->key_presed[KEY_A]) || (g->key_presed[KEY_D]) || (g->key_presed[KEY_UP] || g->key_presed[KEY_W]) || (g->key_presed[KEY_DOWN] || g->key_presed[KEY_S]) || (g->key_presed[KEY_RIGHT]) || (g->key_presed[KEY_LEFT]))
    {
        if (g->key_presed[KEY_A])
        {
            if (g->map.board[(int)(g->player.posX - g->screen.planeX * security)][(int)g->player.posY] == EMPTY)
                g->player.posX -= g->screen.planeX * moveSpeed;
            if (g->map.board[(int)g->player.posX][(int)(g->player.posY - g->screen.planeY * security)] == EMPTY)
                g->player.posY -= g->screen.planeY * moveSpeed;
        }
        if (g->key_presed[KEY_D])
        {
            if (g->map.board[(int)(g->player.posX + g->screen.planeX * security)][(int)g->player.posY] == EMPTY)
                g->player.posX += g->screen.planeX * moveSpeed;
            if (g->map.board[(int)g->player.posX][(int)(g->player.posY + g->screen.planeY * security)] == EMPTY)
                g->player.posY += g->screen.planeY * moveSpeed;
        }
        if (g->key_presed[KEY_UP] || g->key_presed[KEY_W])
        {
            if (g->map.board[(int)(g->player.posX + g->player.dirX * security)][(int)g->player.posY] == EMPTY)
                g->player.posX += g->player.dirX * moveSpeed;
            if (g->map.board[(int)g->player.posX][(int)(g->player.posY + g->player.dirY * security)] == EMPTY)
                g->player.posY += g->player.dirY * moveSpeed;
        }
        if (g->key_presed[KEY_DOWN] || g->key_presed[KEY_S])
        {
            if (g->map.board[(int)(g->player.posX - g->player.dirX * security)][(int)g->player.posY] == EMPTY)
                g->player.posX -= g->player.dirX * moveSpeed;
            if (g->map.board[(int)g->player.posX][(int)(g->player.posY - g->player.dirY * security)] == EMPTY)
                g->player.posY -= g->player.dirY * moveSpeed;
        }
        if (g->key_presed[KEY_RIGHT])
        {
            double oldDirX = g->player.dirX;
            g->player.dirX = g->player.dirX * cos(-rotspeed) - g->player.dirY * sin(-rotspeed);
            g->player.dirY = oldDirX * sin(-rotspeed) + g->player.dirY * cos(-rotspeed);
            double oldPlaneX = g->screen.planeX;
            g->screen.planeX = g->screen.planeX * cos(-rotspeed) - g->screen.planeY * sin(-rotspeed);
            g->screen.planeY = oldPlaneX * sin(-rotspeed) + g->screen.planeY * cos(-rotspeed);
        }
        if (g->key_presed[KEY_LEFT])
        {
            double oldDirX = g->player.dirX;
            g->player.dirX = g->player.dirX * cos(rotspeed) - g->player.dirY * sin(rotspeed);
            g->player.dirY = oldDirX * sin(rotspeed) + g->player.dirY * cos(rotspeed);
            double oldPlaneX = g->screen.planeX;
            g->screen.planeX = g->screen.planeX * cos(rotspeed) - g->screen.planeY * sin(rotspeed);
            g->screen.planeY = oldPlaneX * sin(rotspeed) + g->screen.planeY * cos(rotspeed);
        }

        render_image(g);
    }
    return (0);
}

void draw_line_in_texture(t_g *g, int x, int drawStart, int drawEnd)
{
    int text_width;
    int text_height;
    int *tmp_data;

    if (g->side == 0 && g->rayDirX > 0)
    {
        text_width = g->texture.texture_north.width;
        text_height = g->texture.texture_north.height;
        tmp_data = g->texture.texture_north.data;
    }
    else if (g->side == 0 && g->rayDirX < 0)
    {
        text_width = g->texture.texture_south.width;
        text_height = g->texture.texture_south.height;
        tmp_data = g->texture.texture_south.data;
    }
    else if (g->side == 1 && g->rayDirY > 0)
    {
        text_width = g->texture.texture_east.width;
        text_height = g->texture.texture_east.height;
        tmp_data = g->texture.texture_east.data;
    }
    else 
    {
        text_width = g->texture.texture_west.width;
        text_height = g->texture.texture_west.height;
        tmp_data = g->texture.texture_west.data;
    }

    //calculate value of wallX
    double wallX; //where exactly the wall was hit
    if (g->side == 0)
        wallX = g->player.posY + g->perpWallDist * g->rayDirY;
    else
        wallX = g->player.posX + g->perpWallDist * g->rayDirX;
    wallX -= floor((wallX));

    //x coordinate on the texture
    int texX = (int)(wallX * (double)(text_width));
    if (g->side == 0 && g->rayDirX > 0)
        texX = text_width - texX - 1;
    if (g->side == 1 && g->rayDirY < 0)
        texX = text_width - texX - 1;

    // How much to increase the texture coordinate per screen pixel
    double step = 1.0 * text_height / g->lineHeight;
    // Starting texture coordinate
    double texPos = (drawStart - g->screen.screenHeight / 2 + g->lineHeight / 2) * step;

    int color;
    int y;
    for (y = drawStart; y < drawEnd; y++)
    {
        // Cast the texture coordinate to integer, and mask with (texHeight - 1) in case of overflow
        int texY = (int)texPos & (text_height - 1);
        texPos += step;

        color = tmp_data[text_width * texY + texX];
        if (g->side == 1)
            color = (color >> 1) & 8355711;
        g->img.data[y * g->screen.screenWidth + x] = color;
    }
}

int load_texture(void *mlx_ptr, t_img *texture, char *path)
{
    texture->ptr = mlx_xpm_file_to_image(mlx_ptr, path, &texture->width, &texture->height);
    texture->data = (int *)mlx_get_data_addr(texture->ptr, &texture->bpp, &texture->size_l, &texture->endian);
    return (1);
}

int print_in_texture(t_g *g)
{
    if ((g->mlx_ptr = mlx_init()) == NULL)
        return (EXIT_FAILURE);
    if ((g->mlx_win = mlx_new_window(g->mlx_ptr, g->screen.screenWidth, g->screen.screenHeight, "Texture")) == NULL)
        return (EXIT_FAILURE);

    g->img.ptr = mlx_new_image(g->mlx_ptr, g->screen.screenWidth, g->screen.screenHeight);

    load_texture(g->mlx_ptr, &g->texture.texture_north, g->texture.textures[0]);
    load_texture(g->mlx_ptr, &g->texture.texture_south, g->texture.textures[1]);
    load_texture(g->mlx_ptr, &g->texture.texture_east, g->texture.textures[2]);
    load_texture(g->mlx_ptr, &g->texture.texture_west, g->texture.textures[3]);
    
    load_texture(g->mlx_ptr, &g->sprite.sprite_texture, g->sprite.img_path);

    g->img.ptr = mlx_new_image(g->mlx_ptr, g->screen.screenWidth, g->screen.screenHeight);
    render_image(g);

    mlx_hook(g->mlx_win, 2, 0, key_press_hook_texture, g);
    mlx_hook(g->mlx_win, 3, 0, key_release_hook_texture, g);

    mlx_put_image_to_window(g->mlx_ptr, g->mlx_win, g->img.ptr, 0, 0);

    mlx_loop_hook(g->mlx_ptr, deal_key_texture, g);
    mlx_loop(g->mlx_ptr);

    return (0);
}