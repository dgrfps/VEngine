#pragma once

#define GLFW_INCLUDE_VULKAN

#include <GLFW/glfw3.h>
#include <iostream>

namespace Engine 
{
    namespace Internals
    {
        class Window
        {
            public:
                Window(int w, int h, std::string title) : _width{w}, _height{h}, _winName{title} { init(); };
                ~Window() { 
                    glfwDestroyWindow(_win);
                    glfwTerminate();
                }

                bool shouldClose() { return glfwWindowShouldClose(_win); };

                Window(const Window&) = delete;
                Window &operator = (const Window&) = delete;
                
            private:
                void init();
                GLFWwindow* _win;

                int _width;
                int _height;

                std::string _winName;
        };
    }
}

void Engine::Internals::Window::init()
{
    glfwInit();
    
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

    _win = glfwCreateWindow(_width, _height, _winName.c_str(), nullptr, nullptr);

}