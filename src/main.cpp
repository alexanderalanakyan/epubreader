# include <GLFW/glfw3.h>
using namespace std;

int main() {
    if(!glfwInit()) {
        return -1;
    }
  GLFWwindow* window = glfwCreateWindow(640, 480, "My Title", NULL, NULL);
if (!window)
{
    // Window or OpenGL context creation failed
}
}