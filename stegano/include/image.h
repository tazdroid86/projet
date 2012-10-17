#ifndef IMAGE_H
#define IMAGE_H


#define BUFFER_LENGHT 128
#define DEFAULT -1

typedef struct _pixel{
  int red;
  int green;
  int blue;
}pixel;



pixel init_pixel(int red,int green,int blue,char carac);
int stegano(char *file_image1,char *file_image2,char *file_texte);
char recover_texte(int red,int green,int blue);
int recover (char *file_image,char *file_texte);


#endif
