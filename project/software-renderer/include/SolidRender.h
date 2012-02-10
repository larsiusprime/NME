#ifndef SOLID_RENDER_H
#define SOLID_RENDER_H


#include "PolygonRender.h"


namespace nme
{
	
	class SolidRender : public PolygonRender
	{
	public:
		
		SolidRender(const GraphicsJob &inJob, const GraphicsPath &inPath);
		int Iterate(IterateMode inMode,const Matrix &);
		
	};
	
}


#endif