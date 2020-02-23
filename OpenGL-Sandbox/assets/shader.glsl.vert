#version 450 core

layout (location = 0) in vec3 a_Position;
layout (location = 1) in vec4 a_Color;

uniform mat4 u_ViewProj;
uniform mat4 u_Transform;

// we output the color so we can use it in our fragment shader
out vec4 v_Color;

void main()
{
	v_Color = a_Color;
	gl_Position = u_ViewProj * u_Transform * vec4(a_Position, 1.0f);
}
