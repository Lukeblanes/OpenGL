#version 450 core

layout (location = 0) out vec4 o_Color;

// Take in the color from the vertex shader
in vec4 v_Color;

void main()
{
	o_Color = v_Color; 
}
