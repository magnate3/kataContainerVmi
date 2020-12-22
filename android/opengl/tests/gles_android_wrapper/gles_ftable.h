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
static struct _gles_funcs_by_name {
    const char *name;
    void *proc;
} gles_funcs_by_name[] = { { "glAlphaFunc", (void*) glAlphaFunc }, {
        "glClearColor", (void*) glClearColor }, { "glClearDepthf",
        (void*) glClearDepthf }, { "glClipPlanef", (void*) glClipPlanef }, {
        "glColor4f", (void*) glColor4f }, { "glDepthRangef",
        (void*) glDepthRangef }, { "glFogf", (void*) glFogf }, { "glFogfv",
        (void*) glFogfv }, { "glFrustumf", (void*) glFrustumf }, {
        "glGetClipPlanef", (void*) glGetClipPlanef }, { "glGetFloatv",
        (void*) glGetFloatv }, { "glGetLightfv", (void*) glGetLightfv }, {
        "glGetMaterialfv", (void*) glGetMaterialfv }, { "glGetTexEnvfv",
        (void*) glGetTexEnvfv }, { "glGetTexParameterfv",
        (void*) glGetTexParameterfv },
        { "glLightModelf", (void*) glLightModelf }, { "glLightModelfv",
                (void*) glLightModelfv }, { "glLightf", (void*) glLightf }, {
                "glLightfv", (void*) glLightfv }, { "glLineWidth",
                (void*) glLineWidth },
        { "glLoadMatrixf", (void*) glLoadMatrixf }, { "glMaterialf",
                (void*) glMaterialf }, { "glMaterialfv", (void*) glMaterialfv },
        { "glMultMatrixf", (void*) glMultMatrixf }, { "glMultiTexCoord4f",
                (void*) glMultiTexCoord4f },
        { "glNormal3f", (void*) glNormal3f }, { "glOrthof", (void*) glOrthof },
        { "glPointParameterf", (void*) glPointParameterf }, {
                "glPointParameterfv", (void*) glPointParameterfv }, {
                "glPointSize", (void*) glPointSize }, { "glPolygonOffset",
                (void*) glPolygonOffset }, { "glRotatef", (void*) glRotatef }, {
                "glScalef", (void*) glScalef },
        { "glTexEnvf", (void*) glTexEnvf },
        { "glTexEnvfv", (void*) glTexEnvfv }, { "glTexParameterf",
                (void*) glTexParameterf }, { "glTexParameterfv",
                (void*) glTexParameterfv }, { "glTranslatef",
                (void*) glTranslatef }, { "glActiveTexture",
                (void*) glActiveTexture }, { "glAlphaFuncx",
                (void*) glAlphaFuncx },
        { "glBindBuffer", (void*) glBindBuffer }, { "glBindTexture",
                (void*) glBindTexture }, { "glBlendFunc", (void*) glBlendFunc },
        { "glBufferData", (void*) glBufferData }, { "glBufferSubData",
                (void*) glBufferSubData }, { "glClear", (void*) glClear }, {
                "glClearColorx", (void*) glClearColorx }, { "glClearDepthx",
                (void*) glClearDepthx }, { "glClearStencil",
                (void*) glClearStencil }, { "glClientActiveTexture",
                (void*) glClientActiveTexture }, { "glClipPlanex",
                (void*) glClipPlanex }, { "glColor4ub", (void*) glColor4ub }, {
                "glColor4x", (void*) glColor4x }, { "glColorMask",
                (void*) glColorMask }, { "glColorPointer",
                (void*) glColorPointer }, { "glCompressedTexImage2D",
                (void*) glCompressedTexImage2D }, { "glCompressedTexSubImage2D",
                (void*) glCompressedTexSubImage2D }, { "glCopyTexImage2D",
                (void*) glCopyTexImage2D }, { "glCopyTexSubImage2D",
                (void*) glCopyTexSubImage2D }, { "glCullFace",
                (void*) glCullFace }, { "glDeleteBuffers",
                (void*) glDeleteBuffers }, { "glDeleteTextures",
                (void*) glDeleteTextures },
        { "glDepthFunc", (void*) glDepthFunc }, { "glDepthMask",
                (void*) glDepthMask },
        { "glDepthRangex", (void*) glDepthRangex }, { "glDisable",
                (void*) glDisable }, { "glDisableClientState",
                (void*) glDisableClientState }, { "glDrawArrays",
                (void*) glDrawArrays }, { "glDrawElements",
                (void*) glDrawElements }, { "glEnable", (void*) glEnable }, {
                "glEnableClientState", (void*) glEnableClientState }, {
                "glFinish", (void*) glFinish }, { "glFlush", (void*) glFlush },
        { "glFogx", (void*) glFogx }, { "glFogxv", (void*) glFogxv }, {
                "glFrontFace", (void*) glFrontFace }, { "glFrustumx",
                (void*) glFrustumx },
        { "glGetBooleanv", (void*) glGetBooleanv }, { "glGetBufferParameteriv",
                (void*) glGetBufferParameteriv }, { "glGetClipPlanex",
                (void*) glGetClipPlanex }, { "glGenBuffers",
                (void*) glGenBuffers },
        { "glGenTextures", (void*) glGenTextures }, { "glGetError",
                (void*) glGetError }, { "glGetFixedv", (void*) glGetFixedv }, {
                "glGetIntegerv", (void*) glGetIntegerv }, { "glGetLightxv",
                (void*) glGetLightxv }, { "glGetMaterialxv",
                (void*) glGetMaterialxv }, { "glGetPointerv",
                (void*) glGetPointerv }, { "glGetString", (void*) glGetString },
        { "glGetTexEnviv", (void*) glGetTexEnviv }, { "glGetTexEnvxv",
                (void*) glGetTexEnvxv }, { "glGetTexParameteriv",
                (void*) glGetTexParameteriv }, { "glGetTexParameterxv",
                (void*) glGetTexParameterxv }, { "glHint", (void*) glHint }, {
                "glIsBuffer", (void*) glIsBuffer }, { "glIsEnabled",
                (void*) glIsEnabled }, { "glIsTexture", (void*) glIsTexture }, {
                "glLightModelx", (void*) glLightModelx }, { "glLightModelxv",
                (void*) glLightModelxv }, { "glLightx", (void*) glLightx }, {
                "glLightxv", (void*) glLightxv }, { "glLineWidthx",
                (void*) glLineWidthx }, { "glLoadIdentity",
                (void*) glLoadIdentity }, { "glLoadMatrixx",
                (void*) glLoadMatrixx }, { "glLogicOp", (void*) glLogicOp }, {
                "glMaterialx", (void*) glMaterialx }, { "glMaterialxv",
                (void*) glMaterialxv },
        { "glMatrixMode", (void*) glMatrixMode }, { "glMultMatrixx",
                (void*) glMultMatrixx }, { "glMultiTexCoord4x",
                (void*) glMultiTexCoord4x },
        { "glNormal3x", (void*) glNormal3x }, { "glNormalPointer",
                (void*) glNormalPointer }, { "glOrthox", (void*) glOrthox }, {
                "glPixelStorei", (void*) glPixelStorei }, { "glPointParameterx",
                (void*) glPointParameterx }, { "glPointParameterxv",
                (void*) glPointParameterxv }, { "glPointSizex",
                (void*) glPointSizex }, { "glPolygonOffsetx",
                (void*) glPolygonOffsetx },
        { "glPopMatrix", (void*) glPopMatrix }, { "glPushMatrix",
                (void*) glPushMatrix },
        { "glReadPixels", (void*) glReadPixels }, { "glRotatex",
                (void*) glRotatex }, { "glSampleCoverage",
                (void*) glSampleCoverage }, { "glSampleCoveragex",
                (void*) glSampleCoveragex }, { "glScalex", (void*) glScalex }, {
                "glScissor", (void*) glScissor }, { "glShadeModel",
                (void*) glShadeModel },
        { "glStencilFunc", (void*) glStencilFunc }, { "glStencilMask",
                (void*) glStencilMask }, { "glStencilOp", (void*) glStencilOp },
        { "glTexCoordPointer", (void*) glTexCoordPointer }, { "glTexEnvi",
                (void*) glTexEnvi }, { "glTexEnvx", (void*) glTexEnvx }, {
                "glTexEnviv", (void*) glTexEnviv }, { "glTexEnvxv",
                (void*) glTexEnvxv }, { "glTexImage2D", (void*) glTexImage2D },
        { "glTexParameteri", (void*) glTexParameteri }, { "glTexParameterx",
                (void*) glTexParameterx }, { "glTexParameteriv",
                (void*) glTexParameteriv }, { "glTexParameterxv",
                (void*) glTexParameterxv }, { "glTexSubImage2D",
                (void*) glTexSubImage2D }, { "glTranslatex",
                (void*) glTranslatex }, { "glVertexPointer",
                (void*) glVertexPointer }, { "glViewport", (void*) glViewport },
        { "glPointSizePointerOES", (void*) glPointSizePointerOES },
        { "glBlendEquationSeparateOES", (void*) glBlendEquationSeparateOES }, {
                "glBlendFuncSeparateOES", (void*) glBlendFuncSeparateOES }, {
                "glBlendEquationOES", (void*) glBlendEquationOES }, {
                "glDrawTexsOES", (void*) glDrawTexsOES }, { "glDrawTexiOES",
                (void*) glDrawTexiOES }, { "glDrawTexxOES",
                (void*) glDrawTexxOES }, { "glDrawTexsvOES",
                (void*) glDrawTexsvOES }, { "glDrawTexivOES",
                (void*) glDrawTexivOES }, { "glDrawTexxvOES",
                (void*) glDrawTexxvOES }, { "glDrawTexfOES",
                (void*) glDrawTexfOES }, { "glDrawTexfvOES",
                (void*) glDrawTexfvOES }, { "glEGLImageTargetTexture2DOES",
                (void*) glEGLImageTargetTexture2DOES }, {
                "glEGLImageTargetRenderbufferStorageOES",
                (void*) glEGLImageTargetRenderbufferStorageOES }, {
                "glAlphaFuncxOES", (void*) glAlphaFuncxOES }, {
                "glClearColorxOES", (void*) glClearColorxOES }, {
                "glClearDepthxOES", (void*) glClearDepthxOES }, {
                "glClipPlanexOES", (void*) glClipPlanexOES }, { "glColor4xOES",
                (void*) glColor4xOES }, { "glDepthRangexOES",
                (void*) glDepthRangexOES }, { "glFogxOES", (void*) glFogxOES },
        { "glFogxvOES", (void*) glFogxvOES }, { "glFrustumxOES",
                (void*) glFrustumxOES }, { "glGetClipPlanexOES",
                (void*) glGetClipPlanexOES }, { "glGetFixedvOES",
                (void*) glGetFixedvOES }, { "glGetLightxvOES",
                (void*) glGetLightxvOES }, { "glGetMaterialxvOES",
                (void*) glGetMaterialxvOES }, { "glGetTexEnvxvOES",
                (void*) glGetTexEnvxvOES }, { "glGetTexParameterxvOES",
                (void*) glGetTexParameterxvOES }, { "glLightModelxOES",
                (void*) glLightModelxOES }, { "glLightModelxvOES",
                (void*) glLightModelxvOES }, { "glLightxOES",
                (void*) glLightxOES }, { "glLightxvOES", (void*) glLightxvOES },
        { "glLineWidthxOES", (void*) glLineWidthxOES }, { "glLoadMatrixxOES",
                (void*) glLoadMatrixxOES }, { "glMaterialxOES",
                (void*) glMaterialxOES }, { "glMaterialxvOES",
                (void*) glMaterialxvOES }, { "glMultMatrixxOES",
                (void*) glMultMatrixxOES }, { "glMultiTexCoord4xOES",
                (void*) glMultiTexCoord4xOES }, { "glNormal3xOES",
                (void*) glNormal3xOES }, { "glOrthoxOES", (void*) glOrthoxOES },
        { "glPointParameterxOES", (void*) glPointParameterxOES }, {
                "glPointParameterxvOES", (void*) glPointParameterxvOES }, {
                "glPointSizexOES", (void*) glPointSizexOES }, {
                "glPolygonOffsetxOES", (void*) glPolygonOffsetxOES }, {
                "glRotatexOES", (void*) glRotatexOES }, {
                "glSampleCoveragexOES", (void*) glSampleCoveragexOES }, {
                "glScalexOES", (void*) glScalexOES }, { "glTexEnvxOES",
                (void*) glTexEnvxOES },
        { "glTexEnvxvOES", (void*) glTexEnvxvOES }, { "glTexParameterxOES",
                (void*) glTexParameterxOES }, { "glTexParameterxvOES",
                (void*) glTexParameterxvOES }, { "glTranslatexOES",
                (void*) glTranslatexOES }, { "glIsRenderbufferOES",
                (void*) glIsRenderbufferOES }, { "glBindRenderbufferOES",
                (void*) glBindRenderbufferOES }, { "glDeleteRenderbuffersOES",
                (void*) glDeleteRenderbuffersOES }, { "glGenRenderbuffersOES",
                (void*) glGenRenderbuffersOES }, { "glRenderbufferStorageOES",
                (void*) glRenderbufferStorageOES }, {
                "glGetRenderbufferParameterivOES",
                (void*) glGetRenderbufferParameterivOES }, {
                "glIsFramebufferOES", (void*) glIsFramebufferOES }, {
                "glBindFramebufferOES", (void*) glBindFramebufferOES }, {
                "glDeleteFramebuffersOES", (void*) glDeleteFramebuffersOES }, {
                "glGenFramebuffersOES", (void*) glGenFramebuffersOES }, {
                "glCheckFramebufferStatusOES",
                (void*) glCheckFramebufferStatusOES }, {
                "glFramebufferRenderbufferOES",
                (void*) glFramebufferRenderbufferOES },
        { "glFramebufferTexture2DOES", (void*) glFramebufferTexture2DOES }, {
                "glGetFramebufferAttachmentParameterivOES",
                (void*) glGetFramebufferAttachmentParameterivOES }, {
                "glGenerateMipmapOES", (void*) glGenerateMipmapOES }, {
                "glMapBufferOES", (void*) glMapBufferOES }, {
                "glUnmapBufferOES", (void*) glUnmapBufferOES }, {
                "glGetBufferPointervOES", (void*) glGetBufferPointervOES },
        { "glCurrentPaletteMatrixOES", (void*) glCurrentPaletteMatrixOES }, {
                "glLoadPaletteFromModelViewMatrixOES",
                (void*) glLoadPaletteFromModelViewMatrixOES }, {
                "glMatrixIndexPointerOES", (void*) glMatrixIndexPointerOES }, {
                "glWeightPointerOES", (void*) glWeightPointerOES }, {
                "glQueryMatrixxOES", (void*) glQueryMatrixxOES }, {
                "glDepthRangefOES", (void*) glDepthRangefOES }, {
                "glFrustumfOES", (void*) glFrustumfOES }, { "glOrthofOES",
                (void*) glOrthofOES }, { "glClipPlanefOES",
                (void*) glClipPlanefOES }, { "glGetClipPlanefOES",
                (void*) glGetClipPlanefOES }, { "glClearDepthfOES",
                (void*) glClearDepthfOES }, { "glTexGenfOES",
                (void*) glTexGenfOES },
        { "glTexGenfvOES", (void*) glTexGenfvOES }, { "glTexGeniOES",
                (void*) glTexGeniOES },
        { "glTexGenivOES", (void*) glTexGenivOES }, { "glTexGenxOES",
                (void*) glTexGenxOES },
        { "glTexGenxvOES", (void*) glTexGenxvOES }, { "glGetTexGenfvOES",
                (void*) glGetTexGenfvOES }, { "glGetTexGenivOES",
                (void*) glGetTexGenivOES }, { "glGetTexGenxvOES",
                (void*) glGetTexGenxvOES }, { "glBindVertexArrayOES",
                (void*) glBindVertexArrayOES }, { "glDeleteVertexArraysOES",
                (void*) glDeleteVertexArraysOES }, { "glGenVertexArraysOES",
                (void*) glGenVertexArraysOES }, { "glIsVertexArrayOES",
                (void*) glIsVertexArrayOES }, { "glDiscardFramebufferEXT",
                (void*) glDiscardFramebufferEXT }, { "glMultiDrawArraysEXT",
                (void*) glMultiDrawArraysEXT }, { "glMultiDrawElementsEXT",
                (void*) glMultiDrawElementsEXT }, { "glClipPlanefIMG",
                (void*) glClipPlanefIMG }, { "glClipPlanexIMG",
                (void*) glClipPlanexIMG }, {
                "glRenderbufferStorageMultisampleIMG",
                (void*) glRenderbufferStorageMultisampleIMG }, {
                "glFramebufferTexture2DMultisampleIMG",
                (void*) glFramebufferTexture2DMultisampleIMG }, {
                "glDeleteFencesNV", (void*) glDeleteFencesNV }, {
                "glGenFencesNV", (void*) glGenFencesNV }, { "glIsFenceNV",
                (void*) glIsFenceNV },
        { "glTestFenceNV", (void*) glTestFenceNV }, { "glGetFenceivNV",
                (void*) glGetFenceivNV }, { "glFinishFenceNV",
                (void*) glFinishFenceNV }, { "glSetFenceNV",
                (void*) glSetFenceNV }, { "glGetDriverControlsQCOM",
                (void*) glGetDriverControlsQCOM }, {
                "glGetDriverControlStringQCOM",
                (void*) glGetDriverControlStringQCOM },
        { "glEnableDriverControlQCOM", (void*) glEnableDriverControlQCOM },
        { "glDisableDriverControlQCOM", (void*) glDisableDriverControlQCOM }, {
                "glExtGetTexturesQCOM", (void*) glExtGetTexturesQCOM }, {
                "glExtGetBuffersQCOM", (void*) glExtGetBuffersQCOM },
        { "glExtGetRenderbuffersQCOM", (void*) glExtGetRenderbuffersQCOM }, {
                "glExtGetFramebuffersQCOM", (void*) glExtGetFramebuffersQCOM },
        { "glExtGetTexLevelParameterivQCOM",
                (void*) glExtGetTexLevelParameterivQCOM }, {
                "glExtTexObjectStateOverrideiQCOM",
                (void*) glExtTexObjectStateOverrideiQCOM }, {
                "glExtGetTexSubImageQCOM", (void*) glExtGetTexSubImageQCOM },
        { "glExtGetBufferPointervQCOM", (void*) glExtGetBufferPointervQCOM }, {
                "glExtGetShadersQCOM", (void*) glExtGetShadersQCOM }, {
                "glExtGetProgramsQCOM", (void*) glExtGetProgramsQCOM }, {
                "glExtIsProgramBinaryQCOM", (void*) glExtIsProgramBinaryQCOM },
        { "glExtGetProgramBinarySourceQCOM",
                (void*) glExtGetProgramBinarySourceQCOM }, {
                "glStartTilingQCOM", (void*) glStartTilingQCOM }, {
                "glEndTilingQCOM", (void*) glEndTilingQCOM } };
static int gles_num_funcs = sizeof(gles_funcs_by_name)
        / sizeof(struct _gles_funcs_by_name);
