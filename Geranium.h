#ifndef WLVULKAN_MAIN_H
#define WLVULKAN_MAIN_H

#include <stdint.h>
#define __need_size_t
#include <stddef.h>

#define GERANIUM_MAJOR_VERSION 0
#define GERANIUM_MINOR_VERSION 0
#define GERANIUM_PATCH_VERSION 0
#define GERANIUM_TWEAK_VERSION 36

bool waterlily_vulkanCreate(const char *name, uint32_t version);

bool waterlily_vulkanCreateSurface(void **data);

bool waterlily_vulkanInitialize(uint32_t framebufferWidth,
                                uint32_t framebufferHeight);

bool waterlily_vulkanCompileShaders(const char **names, size_t count);

bool waterlily_vulkanGetShader(const char *name, char **contents, size_t *size);

bool waterlily_vulkanRenderFrame(uint32_t framebufferWidth,
                                 uint32_t framebufferHeight);

bool waterlily_vulkanSync(void);

#endif // WLVULKAN_MAIN_H
