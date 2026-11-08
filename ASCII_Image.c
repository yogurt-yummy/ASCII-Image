// I am making this to learn to make Image to ASCII
// Though my final goal is Video to ASCII , that would be sooo cool to make
// My first step is to learn how to make image to ASCII first
#define STB_IMAGE_IMPLEMENTATION // I do this define so that i could use this implementation after i include the header file
#include "stb_image.h" // I am writing this to include the stb_image header file we just downloaded
#include <stdio.h>
int main(){

    int width; // I am making this variable to store the original width of the image
    int height; // I am making this varibale to store the original height of the image
    int original_channel;  // I am making this varible to store the original number of channels of the image
    int required_channel = 3; // I am making this varibale to store the number of channel which I will be using in this project

    char image_name[] = "image.jpg"; // I am making this array varible to store the name of the image
    
    unsigned char *image = stbi_load(image_name, &width, &height, &original_channel, required_channel); // I am storing all the info provided by the function stbi_load in image pointer

    if(image == NULL){
        printf("Couldnt load image.\n");
        return 1;
    }else{
        printf("Loaded Image info successfully.\n");
    }
    return 0;
}