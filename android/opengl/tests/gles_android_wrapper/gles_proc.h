/*
 * Copyright (C) 2011 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef _GLES_PROC_H
#define _GLES_PROC_H

#include <GLES/gl.h>
#define GL_GLEXT_PROTOTYPES
#include <GLES/glext.h>

typedef void (*glAlphaFunc_t)(GLenum, GLclampf);
typedef void (*glClearColor_t)(GLclampf, GLclampf, GLclampf, GLclampf);
typedef void (*glClearDepthf_t)(GLclampf);
typedef void (*glClipPlanef_t)(GLenum, const GLfloat*);
typedef void (*glColor4f_t)(GLfloat, GLfloat, GLfloat, GLfloat);
typedef void (*glDepthRangef_t)(GLclampf, GLclampf);
typedef void (*glFogf_t)(GLenum, GLfloat);
typedef void (*glFogfv_t)(GLenum, const GLfloat*);
typedef void (*glFrustumf_t)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat,
        GLfloat);
typedef void (*glGetClipPlanef_t)(GLenum, GLfloat*);
typedef void (*glGetFloatv_t)(GLenum, GLfloat*);
typedef void (*glGetLightfv_t)(GLenum, GLenum, GLfloat*);
typedef void (*glGetMaterialfv_t)(GLenum, GLenum, GLfloat*);
typedef void (*glGetTexEnvfv_t)(GLenum, GLenum, GLfloat*);
typedef void (*glGetTexParameterfv_t)(GLenum, GLenum, GLfloat*);
typedef void (*glLightModelf_t)(GLenum, GLfloat);
typedef void (*glLightModelfv_t)(GLenum, const GLfloat*);
typedef void (*glLightf_t)(GLenum, GLenum, GLfloat);
typedef void (*glLightfv_t)(GLenum, GLenum, const GLfloat*);
typedef void (*glLineWidth_t)(GLfloat);
typedef void (*glLoadMatrixf_t)(const GLfloat*);
typedef void (*glMaterialf_t)(GLenum, GLenum, GLfloat);
typedef void (*glMaterialfv_t)(GLenum, GLenum, const GLfloat*);
typedef void (*glMultMatrixf_t)(const GLfloat*);
typedef void (*glMultiTexCoord4f_t)(GLenum, GLfloat, GLfloat, GLfloat, GLfloat);
typedef void (*glNormal3f_t)(GLfloat, GLfloat, GLfloat);
typedef void (*glOrthof_t)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat,
        GLfloat);
typedef void (*glPointParameterf_t)(GLenum, GLfloat);
typedef void (*glPointParameterfv_t)(GLenum, const GLfloat*);
typedef void (*glPointSize_t)(GLfloat);
typedef void (*glPolygonOffset_t)(GLfloat, GLfloat);
typedef void (*glRotatef_t)(GLfloat, GLfloat, GLfloat, GLfloat);
typedef void (*glScalef_t)(GLfloat, GLfloat, GLfloat);
typedef void (*glTexEnvf_t)(GLenum, GLenum, GLfloat);
typedef void (*glTexEnvfv_t)(GLenum, GLenum, const GLfloat*);
typedef void (*glTexParameterf_t)(GLenum, GLenum, GLfloat);
typedef void (*glTexParameterfv_t)(GLenum, GLenum, const GLfloat*);
typedef void (*glTranslatef_t)(GLfloat, GLfloat, GLfloat);
typedef void (*glActiveTexture_t)(GLenum);
typedef void (*glAlphaFuncx_t)(GLenum, GLclampx);
typedef void (*glBindBuffer_t)(GLenum, GLuint);
typedef void (*glBindTexture_t)(GLenum, GLuint);
typedef void (*glBlendFunc_t)(GLenum, GLenum);
typedef void (*glBufferData_t)(GLenum, GLsizeiptr, const GLvoid*, GLenum);
typedef void (*glBufferSubData_t)(GLenum, GLintptr, GLsizeiptr, const GLvoid*);
typedef void (*glClear_t)(GLbitfield);
typedef void (*glClearColorx_t)(GLclampx, GLclampx, GLclampx, GLclampx);
typedef void (*glClearDepthx_t)(GLclampx);
typedef void (*glClearStencil_t)(GLint);
typedef void (*glClientActiveTexture_t)(GLenum);
typedef void (*glClipPlanex_t)(GLenum, const GLfixed*);
typedef void (*glColor4ub_t)(GLubyte, GLubyte, GLubyte, GLubyte);
typedef void (*glColor4x_t)(GLfixed, GLfixed, GLfixed, GLfixed);
typedef void (*glColorMask_t)(GLboolean, GLboolean, GLboolean, GLboolean);
typedef void (*glColorPointer_t)(GLint, GLenum, GLsizei, const GLvoid*);
typedef void (*glCompressedTexImage2D_t)(GLenum, GLint, GLenum, GLsizei,
        GLsizei, GLint, GLsizei, const GLvoid*);
typedef void (*glCompressedTexSubImage2D_t)(GLenum, GLint, GLint, GLint,
        GLsizei, GLsizei, GLenum, GLsizei, const GLvoid*);
typedef void (*glCopyTexImage2D_t)(GLenum, GLint, GLenum, GLint, GLint, GLsizei,
        GLsizei, GLint);
typedef void (*glCopyTexSubImage2D_t)(GLenum, GLint, GLint, GLint, GLint, GLint,
        GLsizei, GLsizei);
typedef void (*glCullFace_t)(GLenum);
typedef void (*glDeleteBuffers_t)(GLsizei, const GLuint*);
typedef void (*glDeleteTextures_t)(GLsizei, const GLuint*);
typedef void (*glDepthFunc_t)(GLenum);
typedef void (*glDepthMask_t)(GLboolean);
typedef void (*glDepthRangex_t)(GLclampx, GLclampx);
typedef void (*glDisable_t)(GLenum);
typedef void (*glDisableClientState_t)(GLenum);
typedef void (*glDrawArrays_t)(GLenum, GLint, GLsizei);
typedef void (*glDrawElements_t)(GLenum, GLsizei, GLenum, const GLvoid*);
typedef void (*glEnable_t)(GLenum);
typedef void (*glEnableClientState_t)(GLenum);
typedef void (*glFinish_t)();
typedef void (*glFlush_t)();
typedef void (*glFogx_t)(GLenum, GLfixed);
typedef void (*glFogxv_t)(GLenum, const GLfixed*);
typedef void (*glFrontFace_t)(GLenum);
typedef void (*glFrustumx_t)(GLfixed, GLfixed, GLfixed, GLfixed, GLfixed,
        GLfixed);
typedef void (*glGetBooleanv_t)(GLenum, GLboolean*);
typedef void (*glGetBufferParameteriv_t)(GLenum, GLenum, GLint*);
typedef void (*glGetClipPlanex_t)(GLenum, GLfixed*);
typedef void (*glGenBuffers_t)(GLsizei, GLuint*);
typedef void (*glGenTextures_t)(GLsizei, GLuint*);
typedef GLenum (*glGetError_t)();
typedef void (*glGetFixedv_t)(GLenum, GLfixed*);
typedef void (*glGetIntegerv_t)(GLenum, GLint*);
typedef void (*glGetLightxv_t)(GLenum, GLenum, GLfixed*);
typedef void (*glGetMaterialxv_t)(GLenum, GLenum, GLfixed*);
typedef void (*glGetPointerv_t)(GLenum, GLvoid**);
typedef const GLubyte* (*glGetString_t)(GLenum);
typedef void (*glGetTexEnviv_t)(GLenum, GLenum, GLint*);
typedef void (*glGetTexEnvxv_t)(GLenum, GLenum, GLfixed*);
typedef void (*glGetTexParameteriv_t)(GLenum, GLenum, GLint*);
typedef void (*glGetTexParameterxv_t)(GLenum, GLenum, GLfixed*);
typedef void (*glHint_t)(GLenum, GLenum);
typedef GLboolean (*glIsBuffer_t)(GLuint);
typedef GLboolean (*glIsEnabled_t)(GLenum);
typedef GLboolean (*glIsTexture_t)(GLuint);
typedef void (*glLightModelx_t)(GLenum, GLfixed);
typedef void (*glLightModelxv_t)(GLenum, const GLfixed*);
typedef void (*glLightx_t)(GLenum, GLenum, GLfixed);
typedef void (*glLightxv_t)(GLenum, GLenum, const GLfixed*);
typedef void (*glLineWidthx_t)(GLfixed);
typedef void (*glLoadIdentity_t)();
typedef void (*glLoadMatrixx_t)(const GLfixed*);
typedef void (*glLogicOp_t)(GLenum);
typedef void (*glMaterialx_t)(GLenum, GLenum, GLfixed);
typedef void (*glMaterialxv_t)(GLenum, GLenum, const GLfixed*);
typedef void (*glMatrixMode_t)(GLenum);
typedef void (*glMultMatrixx_t)(const GLfixed*);
typedef void (*glMultiTexCoord4x_t)(GLenum, GLfixed, GLfixed, GLfixed, GLfixed);
typedef void (*glNormal3x_t)(GLfixed, GLfixed, GLfixed);
typedef void (*glNormalPointer_t)(GLenum, GLsizei, const GLvoid*);
typedef void (*glOrthox_t)(GLfixed, GLfixed, GLfixed, GLfixed, GLfixed,
        GLfixed);
typedef void (*glPixelStorei_t)(GLenum, GLint);
typedef void (*glPointParameterx_t)(GLenum, GLfixed);
typedef void (*glPointParameterxv_t)(GLenum, const GLfixed*);
typedef void (*glPointSizex_t)(GLfixed);
typedef void (*glPolygonOffsetx_t)(GLfixed, GLfixed);
typedef void (*glPopMatrix_t)();
typedef void (*glPushMatrix_t)();
typedef void (*glReadPixels_t)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum,
        GLvoid*);
typedef void (*glRotatex_t)(GLfixed, GLfixed, GLfixed, GLfixed);
typedef void (*glSampleCoverage_t)(GLclampf, GLboolean);
typedef void (*glSampleCoveragex_t)(GLclampx, GLboolean);
typedef void (*glScalex_t)(GLfixed, GLfixed, GLfixed);
typedef void (*glScissor_t)(GLint, GLint, GLsizei, GLsizei);
typedef void (*glShadeModel_t)(GLenum);
typedef void (*glStencilFunc_t)(GLenum, GLint, GLuint);
typedef void (*glStencilMask_t)(GLuint);
typedef void (*glStencilOp_t)(GLenum, GLenum, GLenum);
typedef void (*glTexCoordPointer_t)(GLint, GLenum, GLsizei, const GLvoid*);
typedef void (*glTexEnvi_t)(GLenum, GLenum, GLint);
typedef void (*glTexEnvx_t)(GLenum, GLenum, GLfixed);
typedef void (*glTexEnviv_t)(GLenum, GLenum, const GLint*);
typedef void (*glTexEnvxv_t)(GLenum, GLenum, const GLfixed*);
typedef void (*glTexImage2D_t)(GLenum, GLint, GLint, GLsizei, GLsizei, GLint,
        GLenum, GLenum, const GLvoid*);
typedef void (*glTexParameteri_t)(GLenum, GLenum, GLint);
typedef void (*glTexParameterx_t)(GLenum, GLenum, GLfixed);
typedef void (*glTexParameteriv_t)(GLenum, GLenum, const GLint*);
typedef void (*glTexParameterxv_t)(GLenum, GLenum, const GLfixed*);
typedef void (*glTexSubImage2D_t)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei,
        GLenum, GLenum, const GLvoid*);
typedef void (*glTranslatex_t)(GLfixed, GLfixed, GLfixed);
typedef void (*glVertexPointer_t)(GLint, GLenum, GLsizei, const GLvoid*);
typedef void (*glViewport_t)(GLint, GLint, GLsizei, GLsizei);
typedef void (*glPointSizePointerOES_t)(GLenum, GLsizei, const GLvoid*);
typedef void (*glBlendEquationSeparateOES_t)(GLenum, GLenum);
typedef void (*glBlendFuncSeparateOES_t)(GLenum, GLenum, GLenum, GLenum);
typedef void (*glBlendEquationOES_t)(GLenum);
typedef void (*glDrawTexsOES_t)(GLshort, GLshort, GLshort, GLshort, GLshort);
typedef void (*glDrawTexiOES_t)(GLint, GLint, GLint, GLint, GLint);
typedef void (*glDrawTexxOES_t)(GLfixed, GLfixed, GLfixed, GLfixed, GLfixed);
typedef void (*glDrawTexsvOES_t)(const GLshort*);
typedef void (*glDrawTexivOES_t)(const GLint*);
typedef void (*glDrawTexxvOES_t)(const GLfixed*);
typedef void (*glDrawTexfOES_t)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
typedef void (*glDrawTexfvOES_t)(const GLfloat*);
typedef void (*glEGLImageTargetTexture2DOES_t)(GLenum, GLeglImageOES);
typedef void (*glEGLImageTargetRenderbufferStorageOES_t)(GLenum, GLeglImageOES);
typedef void (*glAlphaFuncxOES_t)(GLenum, GLclampx);
typedef void (*glClearColorxOES_t)(GLclampx, GLclampx, GLclampx, GLclampx);
typedef void (*glClearDepthxOES_t)(GLclampx);
typedef void (*glClipPlanexOES_t)(GLenum, const GLfixed*);
typedef void (*glColor4xOES_t)(GLfixed, GLfixed, GLfixed, GLfixed);
typedef void (*glDepthRangexOES_t)(GLclampx, GLclampx);
typedef void (*glFogxOES_t)(GLenum, GLfixed);
typedef void (*glFogxvOES_t)(GLenum, const GLfixed*);
typedef void (*glFrustumxOES_t)(GLfixed, GLfixed, GLfixed, GLfixed, GLfixed,
        GLfixed);
typedef void (*glGetClipPlanexOES_t)(GLenum, GLfixed*);
typedef void (*glGetFixedvOES_t)(GLenum, GLfixed*);
typedef void (*glGetLightxvOES_t)(GLenum, GLenum, GLfixed*);
typedef void (*glGetMaterialxvOES_t)(GLenum, GLenum, GLfixed*);
typedef void (*glGetTexEnvxvOES_t)(GLenum, GLenum, GLfixed*);
typedef void (*glGetTexParameterxvOES_t)(GLenum, GLenum, GLfixed*);
typedef void (*glLightModelxOES_t)(GLenum, GLfixed);
typedef void (*glLightModelxvOES_t)(GLenum, const GLfixed*);
typedef void (*glLightxOES_t)(GLenum, GLenum, GLfixed);
typedef void (*glLightxvOES_t)(GLenum, GLenum, const GLfixed*);
typedef void (*glLineWidthxOES_t)(GLfixed);
typedef void (*glLoadMatrixxOES_t)(const GLfixed*);
typedef void (*glMaterialxOES_t)(GLenum, GLenum, GLfixed);
typedef void (*glMaterialxvOES_t)(GLenum, GLenum, const GLfixed*);
typedef void (*glMultMatrixxOES_t)(const GLfixed*);
typedef void (*glMultiTexCoord4xOES_t)(GLenum, GLfixed, GLfixed, GLfixed,
        GLfixed);
typedef void (*glNormal3xOES_t)(GLfixed, GLfixed, GLfixed);
typedef void (*glOrthoxOES_t)(GLfixed, GLfixed, GLfixed, GLfixed, GLfixed,
        GLfixed);
typedef void (*glPointParameterxOES_t)(GLenum, GLfixed);
typedef void (*glPointParameterxvOES_t)(GLenum, const GLfixed*);
typedef void (*glPointSizexOES_t)(GLfixed);
typedef void (*glPolygonOffsetxOES_t)(GLfixed, GLfixed);
typedef void (*glRotatexOES_t)(GLfixed, GLfixed, GLfixed, GLfixed);
typedef void (*glSampleCoveragexOES_t)(GLclampx, GLboolean);
typedef void (*glScalexOES_t)(GLfixed, GLfixed, GLfixed);
typedef void (*glTexEnvxOES_t)(GLenum, GLenum, GLfixed);
typedef void (*glTexEnvxvOES_t)(GLenum, GLenum, const GLfixed*);
typedef void (*glTexParameterxOES_t)(GLenum, GLenum, GLfixed);
typedef void (*glTexParameterxvOES_t)(GLenum, GLenum, const GLfixed*);
typedef void (*glTranslatexOES_t)(GLfixed, GLfixed, GLfixed);
typedef GLboolean (*glIsRenderbufferOES_t)(GLuint);
typedef void (*glBindRenderbufferOES_t)(GLenum, GLuint);
typedef void (*glDeleteRenderbuffersOES_t)(GLsizei, const GLuint*);
typedef void (*glGenRenderbuffersOES_t)(GLsizei, GLuint*);
typedef void (*glRenderbufferStorageOES_t)(GLenum, GLenum, GLsizei, GLsizei);
typedef void (*glGetRenderbufferParameterivOES_t)(GLenum, GLenum, GLint*);
typedef GLboolean (*glIsFramebufferOES_t)(GLuint);
typedef void (*glBindFramebufferOES_t)(GLenum, GLuint);
typedef void (*glDeleteFramebuffersOES_t)(GLsizei, const GLuint*);
typedef void (*glGenFramebuffersOES_t)(GLsizei, GLuint*);
typedef GLenum (*glCheckFramebufferStatusOES_t)(GLenum);
typedef void (*glFramebufferRenderbufferOES_t)(GLenum, GLenum, GLenum, GLuint);
typedef void (*glFramebufferTexture2DOES_t)(GLenum, GLenum, GLenum, GLuint,
        GLint);
typedef void (*glGetFramebufferAttachmentParameterivOES_t)(GLenum, GLenum,
        GLenum, GLint*);
typedef void (*glGenerateMipmapOES_t)(GLenum);
typedef void* (*glMapBufferOES_t)(GLenum, GLenum);
typedef GLboolean (*glUnmapBufferOES_t)(GLenum);
typedef void (*glGetBufferPointervOES_t)(GLenum, GLenum, GLvoid*);
typedef void (*glCurrentPaletteMatrixOES_t)(GLuint);
typedef void (*glLoadPaletteFromModelViewMatrixOES_t)();
typedef void (*glMatrixIndexPointerOES_t)(GLint, GLenum, GLsizei,
        const GLvoid*);
typedef void (*glWeightPointerOES_t)(GLint, GLenum, GLsizei, const GLvoid*);
typedef GLbitfield (*glQueryMatrixxOES_t)(GLfixed*, GLint*);
typedef void (*glDepthRangefOES_t)(GLclampf, GLclampf);
typedef void (*glFrustumfOES_t)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat,
        GLfloat);
typedef void (*glOrthofOES_t)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat,
        GLfloat);
typedef void (*glClipPlanefOES_t)(GLenum, const GLfloat*);
typedef void (*glGetClipPlanefOES_t)(GLenum, GLfloat*);
typedef void (*glClearDepthfOES_t)(GLclampf);
typedef void (*glTexGenfOES_t)(GLenum, GLenum, GLfloat);
typedef void (*glTexGenfvOES_t)(GLenum, GLenum, const GLfloat*);
typedef void (*glTexGeniOES_t)(GLenum, GLenum, GLint);
typedef void (*glTexGenivOES_t)(GLenum, GLenum, const GLint*);
typedef void (*glTexGenxOES_t)(GLenum, GLenum, GLfixed);
typedef void (*glTexGenxvOES_t)(GLenum, GLenum, const GLfixed*);
typedef void (*glGetTexGenfvOES_t)(GLenum, GLenum, GLfloat*);
typedef void (*glGetTexGenivOES_t)(GLenum, GLenum, GLint*);
typedef void (*glGetTexGenxvOES_t)(GLenum, GLenum, GLfixed*);
typedef void (*glBindVertexArrayOES_t)(GLuint);
typedef void (*glDeleteVertexArraysOES_t)(GLsizei, const GLuint*);
typedef void (*glGenVertexArraysOES_t)(GLsizei, GLuint*);
typedef GLboolean (*glIsVertexArrayOES_t)(GLuint);
typedef void (*glDiscardFramebufferEXT_t)(GLenum, GLsizei, const GLenum*);
typedef void (*glMultiDrawArraysEXT_t)(GLenum, GLint*, GLsizei*, GLsizei);
typedef void (*glMultiDrawElementsEXT_t)(GLenum, const GLsizei*, GLenum,
        const GLvoid**, GLsizei);
typedef void (*glClipPlanefIMG_t)(GLenum, const GLfloat*);
typedef void (*glClipPlanexIMG_t)(GLenum, const GLfixed*);
typedef void (*glRenderbufferStorageMultisampleIMG_t)(GLenum, GLsizei, GLenum,
        GLsizei, GLsizei);
typedef void (*glFramebufferTexture2DMultisampleIMG_t)(GLenum, GLenum, GLenum,
        GLuint, GLint, GLsizei);
typedef void (*glDeleteFencesNV_t)(GLsizei, const GLuint*);
typedef void (*glGenFencesNV_t)(GLsizei, GLuint*);
typedef GLboolean (*glIsFenceNV_t)(GLuint);
typedef GLboolean (*glTestFenceNV_t)(GLuint);
typedef void (*glGetFenceivNV_t)(GLuint, GLenum, GLint*);
typedef void (*glFinishFenceNV_t)(GLuint);
typedef void (*glSetFenceNV_t)(GLuint, GLenum);
typedef void (*glGetDriverControlsQCOM_t)(GLint*, GLsizei, GLuint*);
typedef void (*glGetDriverControlStringQCOM_t)(GLuint, GLsizei, GLsizei*,
        GLchar*);
typedef void (*glEnableDriverControlQCOM_t)(GLuint);
typedef void (*glDisableDriverControlQCOM_t)(GLuint);
typedef void (*glExtGetTexturesQCOM_t)(GLuint*, GLint, GLint*);
typedef void (*glExtGetBuffersQCOM_t)(GLuint*, GLint, GLint*);
typedef void (*glExtGetRenderbuffersQCOM_t)(GLuint*, GLint, GLint*);
typedef void (*glExtGetFramebuffersQCOM_t)(GLuint*, GLint, GLint*);
typedef void (*glExtGetTexLevelParameterivQCOM_t)(GLuint, GLenum, GLint, GLenum,
        GLint*);
typedef void (*glExtTexObjectStateOverrideiQCOM_t)(GLenum, GLenum, GLint);
typedef void (*glExtGetTexSubImageQCOM_t)(GLenum, GLint, GLint, GLint, GLint,
        GLsizei, GLsizei, GLsizei, GLenum, GLenum, GLvoid*);
typedef void (*glExtGetBufferPointervQCOM_t)(GLenum, GLvoid**);
typedef void (*glExtGetShadersQCOM_t)(GLuint*, GLint, GLint*);
typedef void (*glExtGetProgramsQCOM_t)(GLuint*, GLint, GLint*);
typedef GLboolean (*glExtIsProgramBinaryQCOM_t)(GLuint);
typedef void (*glExtGetProgramBinarySourceQCOM_t)(GLuint, GLenum, GLchar*,
        GLint*);
typedef void (*glStartTilingQCOM_t)(GLuint, GLuint, GLuint, GLuint, GLbitfield);
typedef void (*glEndTilingQCOM_t)(GLbitfield);

#endif
