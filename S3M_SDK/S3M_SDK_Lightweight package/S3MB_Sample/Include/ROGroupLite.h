#pragma once
#include "Shell.h"
using namespace std;
using namespace S3MB;
class ROGroupLite
{
public:
	struct MeshParamInfo
	{
		wstring strID;
		int LodID;
		std::vector<float> verts;
		std::vector<unsigned int> indexs;
		std::vector<float> normals;
		std::vector<float> texCoords;
		std::vector<float> colors;
	};
	static RenderOperationGroup* CreateROGroupLite(int lodId, wstring texturePath);

	//! \brief 创建一个模型骨架数据
	static MeshParamInfo CreateMeshData(int lodId);

	//! \brief 根据读取的顶点信息创建geometry数据
	static Geometry* CreateGeometry(MeshParamInfo& meshInfo);

	//! \brief 创建纹理
	static TextureData* CreateTextureData(wstring texturePath);

	//! \brief 创建材质
	static Material* CreateMaterial(wstring textureDataName);
};
