#pragma once

#include "../classes/window.hpp"

namespace Engine
{
    class VEngine
    {
        public:
            int WIDTH = 800;
            int HEIGHT = 600;

            void run()
            {
                 while(!win.shouldClose())
                 {
                    glfwPollEvents();
                 }
            };
        private:
            Internals::Window win{WIDTH, HEIGHT, "VEngine @dev-1.0.0"};
    };
} // namespace engine
