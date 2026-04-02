// COPYRIGHT DASSAULT SYSTEMES 2000
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************

#ifndef CATSystemOleContentFormat_H
#define CATSystemOleContentFormat_H
////////////////////////////////////////////////////////////////////////////////////////
// slg
// 02/98
//
// Purpose: CATSystemOleContentFormat
//
//		manages "Embed Source" "Embedded Object" paste formats
//
//	Used to paste OLE Objects ( ex: Excel cells ...)
//
////////////////////////////////////////////////////////////////////////////////////////

#include "CATSystemFormat.h"
#include "CP0SPEC.h"
//
#include "CATIContainer.h"
class CATDocument;




class ExportedByCP0SPEC CATSystemOleContentFormat: public CATSystemFormat
{
	public:
		CATSystemOleContentFormat		( CATFormat* for_fmt=NULL);
		virtual 
			~CATSystemOleContentFormat	();

		//
		virtual
			LPFORMATETC SystemFormat() const;

		virtual 
			int ProvideTempoObject	( LPFORMATETC			system_format
									, LPSTGMEDIUM			system_medium
									, CATBaseUnknown_ptr&	oCreatedObject);
		virtual 
			int ReleaseTempoObject	( CATBaseUnknown_ptr&	tempo_object);



	protected:
		CATDocument*		_DemyDoc;
		CATIContainer_var	_DemyContainer;
};

#endif

