#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define depth 255

void main()
{
	FILE * fp;

	int width, height, i, j, pixel, p;
	int R, G, B;
	pixel = 0;

	printf("Please type the number of pixels wide you want your image\n"); // Gets the image dimensions
	scanf("%i", &width);
	printf("Please type the number of pixels high you want your image\n");
	scanf("%i", &height);

	fp = fopen("c project.txt", "w+"); // Opens the text file
	fprintf(fp, "P3\n# myfile.ppm\n%i %i\n%i\n", width, height, depth); // Prints the preliminary text

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			pixel++;
			printf("For Pixel %i, ", pixel); // Requesting Colours
			printf("please type the Red colour depth, followed by Green then blue.\nThese should have spaces inbetween and then press enter\n");
			scanf("%i %i %i", &R, &G, &B);
			fprintf(fp, "%i %i %i\t", R, G, B);
		}
		fprintf(fp, "\n");

	}

	fclose(fp);
}