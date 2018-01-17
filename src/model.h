#ifndef SOFTWARERENDERER_MODEL_H
#define SOFTWARERENDERER_MODEL_H


#include "objfile.h"
#include "geometry.h"
#include "bitmap.h"


typedef struct {
    vec_t pos, texcoord, normal;
} vertex_t;


typedef struct {
    vertex_t *vertices;
} triangle_t;


typedef struct {
    triangle_t *triangles;
    int nTriangles;
    bitmap_t texture;
} model_t;




void mdlCreateFromObj(obj_model_t *objmodel, model_t *model, char *fileTexture);

void mdlFreeModel(model_t *model);




#endif
