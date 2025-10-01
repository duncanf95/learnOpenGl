//
// Created by Duncan Fraser on 01/10/2025.
//

#ifndef LEARNOPENGL_SHADER_H
#define LEARNOPENGL_SHADER_H

#include <glad/glad.h>

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>


class Shader {
    public:
        unsigned int Id;

        Shader(const char* vertexPath, const char* fragmentPath);
        void use();

        void setBool(const std::string &name, bool value) const;
        void setInt(const std::string &name, int value) const;
        void setFloat(const std::string &name, float value) const;

    private:
        static void checkCompileErrors(unsigned int shader, std::string type);
};


#endif //LEARNOPENGL_SHADER_H