#ifndef SOFTWARERENDERERV2_SHADER_H
#define SOFTWARERENDERERV2_SHADER_H

#include "geometry.h"
#include "model.h"
#include "uniforms.h"

typedef struct shader_t shader_t;

struct shader_t {
    void (*psh)(camera_t *camera, model_t *model, shader_t *shader);
    void (*vsh)(vertex_t *vertexIn, vertex_t *vertexOut, shader_t *shader);
    void (*fsh)(camera_t *camera, model_t *model, shader_t *shader, pixel_t *pixel, vec_t *iplPos, vec_t *iplUV, vec_t *iplNrm, vec_t *iplClr, vec_t *iplAttribs);
    uniformbuffer_t uniforms;
};


void pshShadowPass(camera_t *camera, model_t *model, shader_t *shader);

void vshShadowPass(vertex_t *vertexIn, vertex_t *vertexOut, shader_t *shader);

void fshShadowPass(camera_t *camera, model_t *model, shader_t *shader, pixel_t *pixel, vec_t *iplPos, vec_t *iplUV, vec_t *iplNrm, vec_t *iplClr, vec_t *iplAttribs);




void pshDefault(camera_t *camera, model_t *model, shader_t *shader);

void vshDefault(vertex_t *vertexIn, vertex_t *vertexOut, shader_t *shader);

void fshDefault(camera_t *camera, model_t *model, shader_t *shader, pixel_t *pixel, vec_t *iplPos, vec_t *iplUV, vec_t *iplNrm, vec_t *iplClr, vec_t *iplAttribs);


#endif



