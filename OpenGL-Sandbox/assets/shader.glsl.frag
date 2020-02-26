#version 450 core

layout (location = 0) out vec4 o_Color;

// Take in the color from the vertex shader
in vec4 v_Color;
in vec2 v_TexCoord;
in float v_TexIndex;

// array of samplers to store our textures
uniform sampler2D u_Textures[2];

void main()
{
	// convert v_TexIndex to an int
	int index = int(v_TexIndex);

	// we sample the texture
	o_Color = texture(u_Textures[index], v_TexCoord);
}
